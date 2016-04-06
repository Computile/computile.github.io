/***
Original 2048 implementation: Copyright (c) 2014, Justin Hamilton All rights reserved. (https://github.com/jamiltron/2048-unity)
Modified to create Computile: Copyright (c) 2016, Computile All rights reserved. (https://github.com/Computile/computile.github.io)

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

	Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
	Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
	Neither the name of Doom Crow, LLC nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS 
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
OF SUCH DAMAGE.
*/

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class GridController : MonoBehaviour {
	// variables referencing Unity scene objects
	public GameObject canvas;
	public GameObject hintsCanvas;
	public GameObject gameOverPanel;
	public GameObject noTile;
	public GameObject blockerTile;
	public Text scoreText;
	public Text scoreMultiplierText;
	public Text gameoverScoreDetailsText;
	public Text gameoverScoreText;
	public Text gameoverTitle;
	public GameObject[] tilePrefabs;
	public LayerMask backgroundLayer;
	public float minSwipeDistance = 10.0f;

	// constant variables holding board properties
	private static int ROWS = 6;
	private static int COLS = 6;
	private static float BORDER_OFFSET = 0.05f;
	private static float HORIZONTAL_SPACING_OFFSET = -1.65f;
	private static float VERTICAL_SPACING_OFFSET = 1.65f;
	private static float BORDER_SPACING = 0.1f;
	private static float HALF_TILE_WIDTH = 0.55f;
	private static float SPACE_BETWEEN_TILES = 1.1f;

	// global variables used locally
	private int score;
	private double scoreMultiplier;
	private double turnCounter;
	private int pairTilesEvaluated;
	private int pairTilesCleared;
	private List<GameObject> tiles;
	private List<GameObject> blockerTileList;
	private bool blockerTilesRemoved = false;
	private Rect resetButton;
	private Rect gameOverButton;
	private Vector2 touchStartPosition = Vector2.zero;

	// game states
	private enum State {
		Loaded,
		WaitingForInput,
		CheckingMatches,
		Win,
		GameOver
	}

	// operation states
	public enum Operation {
		Minus,
		Divide,
		Modulo
	}

	// state instances
	private State state;
	private static Operation operation;

	#region monodevelop

	void Awake () {
		// initialize tile array lists 
		tiles = new List<GameObject> ();
		blockerTileList = new List<GameObject> (); 

		// initialize/reset variables to initial values 
		state = State.Loaded;
		operation = Operation.Minus; 
		score = 0; 
		scoreMultiplier = 10; 
		turnCounter = 0; 
		pairTilesEvaluated = 0;
		pairTilesCleared = 0;
	}

	void Update () {
		// check for victory before checking state 
		CheckVictoryCondition (); 

		if (state == State.Win) {
			gameoverTitle.text = "YOU'VE WON!";

			// show victory/gameover panel 
			gameOverPanel.SetActive (true);
			canvas.SetActive (false);
		} else if (state == State.GameOver) {

			// update highscore components and show victory/gameover panel 
			gameoverScoreDetailsText.text = score + " x " + scoreMultiplier + " = ";
			gameoverScoreText.text = (score * scoreMultiplier).ToString (); 
			gameoverTitle.text = "GAMEOVER"; 
			gameOverPanel.SetActive (true);
			canvas.SetActive (false);
		} else if (state == State.Loaded) {
			state = State.WaitingForInput;

			// generate 8 random tiles 
			for (int i = 0; i < 8; i++) {
				GenerateRandomTile ();
			}
		} else if (state == State.WaitingForInput) {
			CheckVictoryCondition (); 

			blockerTilesRemoved = false; 

// handle input from standalone build or input from Unity Editor 
#if UNITY_STANDALONE || UNITY_EDITOR || UNITY_WEBPLAYER
			if (Input.GetButtonDown ("Left")) {
				if (MoveTilesLeft ()) {
					state = State.CheckingMatches;
				}
			} else if (Input.GetButtonDown ("Right")) {
				if (MoveTilesRight ()) {
					state = State.CheckingMatches;
				}
			} else if (Input.GetButtonDown ("Up")) {
				if (MoveTilesUp ()) {
					state = State.CheckingMatches;
				}
			} else if (Input.GetButtonDown ("Down")) {
				if (MoveTilesDown ()) {
					state = State.CheckingMatches;
				}
			} else if (Input.GetButtonDown ("1")) {
				if (MinusButtonController.GetState () == MinusButtonController.State.Unselected && operation == Operation.Minus) {
					operation = Operation.Minus; 
					MinusButtonController.ResetState (); 
				}
			} else if (Input.GetButtonDown ("2")) {
				if (DivideButtonController.GetState () == DivideButtonController.State.Unselected3 && operation == Operation.Minus) {
					operation = Operation.Divide; 
					DivideButtonController.SetSelectedState ();
					MinusButtonController.ChangeState ();
				}
			} else if (Input.GetButtonDown ("3")) {
				if (ModuloButtonController.GetState () == ModuloButtonController.State.Unselected5 && operation == Operation.Minus) {
					operation = Operation.Modulo;
					ModuloButtonController.SetSelectedState ();
					MinusButtonController.ChangeState ();
				}
			} else if (Input.GetButtonDown ("Reset")) {
				Reset ();
			} else if (Input.GetButtonDown ("Quit")) {
				Application.Quit ();
			}
#endif

// handle input from mobile builds 
#if UNITY_ANDROID || UNITY_IOS|| UNITY_WP8 || UNITY_WP8_1 
			try {
				if (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Began) {
					touchStartPosition = Input.GetTouch (0).position;
				}
				if (Input.GetTouch (0).phase == TouchPhase.Ended) {
					Vector2 swipeDelta = (Input.GetTouch (0).position - touchStartPosition);
					if (swipeDelta.magnitude < minSwipeDistance) {
						return;
					}
					swipeDelta.Normalize ();
					if (swipeDelta.y > 0.0f && swipeDelta.x > -0.5f && swipeDelta.x < 0.5f) {
						if (MoveTilesUp ()) {
							state = State.CheckingMatches;
						}
					} else if (swipeDelta.y < 0.0f && swipeDelta.x > -0.5f && swipeDelta.x < 0.5f) {
						if (MoveTilesDown ()) {
							state = State.CheckingMatches;
						}
					} else if (swipeDelta.x > 0.0f && swipeDelta.y > -0.5f && swipeDelta.y < 0.5f) {
						if (MoveTilesRight ()) {
							state = State.CheckingMatches;
						}
					} else if (swipeDelta.x < 0.0f && swipeDelta.y > -0.5f && swipeDelta.y < 0.5f) {
						if (MoveTilesLeft ()) {
							state = State.CheckingMatches;
						}
					}
				}
			} catch {
				//ArgumentException handling; do nothing
			}
#endif
		} else if (state == State.CheckingMatches) {
			turnCounter++; 

			// generate a random numbered tile at the end of every turn 
			GenerateRandomTile ();

			if (blockerTilesRemoved == false) {
				// generate a blocker tile if the operation is subtraction 
				if (operation == Operation.Minus) {
					GenerateBlockerTile ();
				} else {
					// remove a blocker tile if the operation is division
					if (blockerTileList.Count > 0) {
						DestroyTiles (SelectBlockerTile (), null); 

						// if current operation is modulo, remove one more blockerTile for total of 2
						if (blockerTileList.Count > 0 && operation == Operation.Modulo)
							DestroyTiles (SelectBlockerTile (), null); 
					}
				}
			}

			// update the operation button sprites at end of turn 
			UpdateOperationButtonSprite (); 

			// update the score components 
			UpdateScore (); 
			scoreText.text = score.ToString ();
			scoreMultiplierText.text = "x" + scoreMultiplier.ToString (); 
			pairTilesEvaluated = 0; 
			pairTilesCleared = 0; 

			// check if the board is filled, end the game if true 
			if (CheckForMovesLeft ()) {
				// if there is room to generate more tiles, continue the game 
				ReadyTilesForUpgrading ();
				state = State.WaitingForInput;
			} else {
				state = State.GameOver;
			}
		}
	}

	void UpdateOperationButtonSprite () {
		// animate the button sprites for each turn 
		DivideButtonController.ChangeState (); 
		ModuloButtonController.ChangeState (); 

		// reset the operation state back to subtraction once selected 
		switch (operation) {
			case Operation.Minus:	
				// do nothing
				break; 				
			case Operation.Divide:
				MinusButtonController.ResetState (); 
				DivideButtonController.ResetState (); 
				operation = Operation.Minus; 
				break; 
			case Operation.Modulo:
				MinusButtonController.ResetState (); 
				ModuloButtonController.ResetState ();
				operation = Operation.Minus; 
				break; 
		}	
	}

	#endregion

	#region class methods

	private static Vector2 GridToWorldPoint (int x, int y) {
		return new Vector2 (x + HORIZONTAL_SPACING_OFFSET + BORDER_SPACING * x, 
			-y + VERTICAL_SPACING_OFFSET - BORDER_SPACING * y);
	}

	private static Vector2 WorldToGridPoint (float x, float y) {
		return new Vector2 ((x - HORIZONTAL_SPACING_OFFSET) / (1 + BORDER_SPACING),
			(y - VERTICAL_SPACING_OFFSET) / -(1 + BORDER_SPACING));
	}

    
	public static Operation GetOperationState () {
		return operation; 
	}

	public static void SetOperationState (string state) {
		switch (state) {
			case "minus":
				operation = Operation.Minus; 
				break;
			case "divide":
				operation = Operation.Divide; 
				break; 
			case "modulo": 
				operation = Operation.Modulo;
				break; 
			default: 
				operation = Operation.Minus; 
				break;
		}
	}

	#endregion

	#region private methods

	private bool CheckForMovesLeft () {
		// check if the game board is filled 
		if ((tiles.Count + blockerTileList.Count) < ROWS * COLS) {
			return true;
		}
		return false;
	}

	private void CheckVictoryCondition () {
		// checking if all the numbered tiles are destroyed, end game if true 
		if (tiles.Count <= 0 && turnCounter != 0) {
			state = State.Win;
			gameoverScoreDetailsText.text = score + " x " + scoreMultiplier + " = ";
			gameoverScoreText.text = (score * scoreMultiplier).ToString (); 
		}
	}

	public void GenerateRandomTile () {
		// handle grid is full exception
		if ((tiles.Count + blockerTileList.Count) >= ROWS * COLS) {
			state = State.GameOver;
			return; 
		}
    
		int value;
		// find out if we are generating a tile with the lowest or highest value
		float highOrLowChance = Random.Range (0f, 0.99f);
		value = (int)(highOrLowChance * 10); 
		if (value == 0)
			value++; 
    
		// attempt to get the starting position
		int x = Random.Range (0, COLS);
		int y = Random.Range (0, ROWS);
    
		// starting from the random starting position, loop through
		// each cell in the grid until we find an empty positio
		bool found = false;
		while (!found) {
			if (GetObjectAtGridPosition (x, y) == noTile) {
				found = true;
				Vector2 worldPosition = GridToWorldPoint (x, y);
				GameObject obj;
				obj = SimplePool.Spawn (tilePrefabs [value], worldPosition, transform.rotation);        
				tiles.Add (obj);
				TileAnimationHandler tileAnimManager = obj.GetComponent<TileAnimationHandler> ();
				tileAnimManager.AnimateEntry ();
			}
      
			x++;
			if (x >= COLS) {
				y++;
				x = 0;
			}
      
			if (y >= ROWS) {
				y = 0;
			}
		}
	}

	public void GenerateBlockerTile () {
		// handle grid is full exception
		if ((tiles.Count + blockerTileList.Count) >= ROWS * COLS) {
			state = State.GameOver; 
			return; 
		}
   
		// attempt to get the starting position
		int x = Random.Range (0, COLS);
		int y = Random.Range (0, ROWS);
    
		// starting from the random starting position, loop through
		// each cell in the grid until we find an empty positio
		bool found = false;
		while (!found) {
			if (GetObjectAtGridPosition (x, y) == noTile) {
				found = true;
				Vector2 worldPosition = GridToWorldPoint (x, y);
				GameObject obj;
				obj = SimplePool.Spawn (tilePrefabs [0], worldPosition, transform.rotation);        
				blockerTileList.Add (obj); 
				TileAnimationHandler tileAnimManager = obj.GetComponent<TileAnimationHandler> ();
				tileAnimManager.AnimateEntry ();
			}
      
			x++;
			if (x >= COLS) {
				y++;
				x = 0;
			}
      
			if (y >= ROWS) {
				y = 0;
			}
		}
	}

	private GameObject SelectBlockerTile () {
		// randomly select a blocker tile (to destory it after)
		int index = Random.Range (0, blockerTileList.Count); 
		return (blockerTileList [index]);
	}

	private GameObject GetObjectAtGridPosition (int x, int y) {
		// retrieve a tile object based on its x-y coordinates 
		RaycastHit2D hit = Physics2D.Raycast (GridToWorldPoint (x, y), Vector2.right, BORDER_SPACING);
    
		if (hit && hit.collider.gameObject.GetComponent<Tile> () != null) {
			return hit.collider.gameObject;
		} else {
			return noTile;
		}
	}

	private bool MoveTilesDown () {
		// handle down direction 
		bool hasMoved = false;
		for (int y = ROWS - 1; y >= 0; y--) {
			for (int x = 0; x < COLS; x++) {
				GameObject obj = GetObjectAtGridPosition (x, y);

				// skip if the current tile is an empty tile 
				if (obj == noTile) {
					continue;
				}

				// skip if the current tile is a blocker tile 
				if (obj.tag == "Blocker") {
					continue; 
				}

				// continue if the current tile is a numbered tile 
				Vector2 raycastOrigin = obj.transform.position;
				raycastOrigin.y -= HALF_TILE_WIDTH;
				RaycastHit2D hit = Physics2D.Raycast (raycastOrigin, -Vector2.up, Mathf.Infinity);
				if (hit.collider != null) {
					// get the tile its interacting with 
					GameObject hitObject = hit.collider.gameObject;
					if (hitObject != obj) {
						// handling numbered tile to numbered tile behaviour 
						if (hitObject.tag == "Tile") {
							Tile thatTile = hitObject.GetComponent<Tile> ();
							Tile thisTile = obj.GetComponent<Tile> ();

							// perform the selected operation 
							int result = ExecuteOperation (thisTile, thatTile); 
							if (result > 0) {
								// replace both tiles with a tile with resulting value 
								UpgradeTile (obj, thisTile, hitObject, thatTile, result);
								hasMoved = true;
								pairTilesEvaluated++;
							} else if (result == 0) {
								// remove both tiles if result is 0 
								DestroyTiles (obj, hitObject); 
								hasMoved = true; 

								// destory a blocker tile 
								if (blockerTileList.Count > 0) {
									DestroyTiles (SelectBlockerTile (), null);
									blockerTilesRemoved = true; 
								}
								pairTilesCleared++;
							} else {
								// if operation is not executable, place the tiles together 
								Vector3 newPosition = hitObject.transform.position;
								newPosition.y += SPACE_BETWEEN_TILES;
								if (!Mathf.Approximately (obj.transform.position.y, newPosition.y)) {
									obj.transform.position = newPosition;
									hasMoved = true;
								}
							}
						} 
						// handling numbered tile to blocker tile behaviour 
						else if (hitObject.tag == "Blocker") {
							Vector3 newPosition = hitObject.transform.position;
							newPosition.y += SPACE_BETWEEN_TILES;
							if (!Mathf.Approximately (obj.transform.position.y, newPosition.y)) {
								obj.transform.position = newPosition;
								hasMoved = true;
							}
						} 
						// handling numbered tile to border behaviour 
						else if (hitObject.tag == "Border") {
							Vector3 newPosition = obj.transform.position;
							newPosition.y = hit.point.y + HALF_TILE_WIDTH + BORDER_OFFSET;
							if (!Mathf.Approximately (obj.transform.position.y, newPosition.y)) {
								obj.transform.position = newPosition;
								hasMoved = true;
							}
						} 
					}
				}
			}
		}

		return hasMoved;
	}

	private bool MoveTilesLeft () {
		// handling left direction, see down direction above for comments 
		bool hasMoved = false;
		for (int x = 1; x < COLS; x++) {
			for (int y = 0; y < ROWS; y++) {
				GameObject obj = GetObjectAtGridPosition (x, y);
        
				if (obj == noTile) {
					continue;
				}

				if (obj.tag == "Blocker") {
					continue; 
				}

				Vector2 raycastOrigin = obj.transform.position;
				raycastOrigin.x -= HALF_TILE_WIDTH;
				RaycastHit2D hit = Physics2D.Raycast (raycastOrigin, -Vector2.right, Mathf.Infinity);
				if (hit.collider != null) {
					GameObject hitObject = hit.collider.gameObject;
					if (hitObject != obj) {
						if (hitObject.tag == "Tile") {
							Tile thatTile = hitObject.GetComponent<Tile> ();
							Tile thisTile = obj.GetComponent<Tile> ();
							int result = ExecuteOperation (thisTile, thatTile); 
							if (result > 0) {
								UpgradeTile (obj, thisTile, hitObject, thatTile, result);
								hasMoved = true;
								pairTilesEvaluated++;
							} else if (result == 0) {
								DestroyTiles (obj, hitObject);  
								hasMoved = true; 
								if (blockerTileList.Count > 0) {
									DestroyTiles (SelectBlockerTile (), null);
									blockerTilesRemoved = true; 
								}
								pairTilesCleared++; 
							} else {
								Vector3 newPosition = hitObject.transform.position;
								newPosition.x += SPACE_BETWEEN_TILES;
								if (!Mathf.Approximately (obj.transform.position.x, newPosition.x)) {
									obj.transform.position = newPosition;
									hasMoved = true;
								}
							}
						} else if (hitObject.tag == "Blocker") {
							Vector3 newPosition = hitObject.transform.position;
							newPosition.x += SPACE_BETWEEN_TILES;
							if (!Mathf.Approximately (obj.transform.position.x, newPosition.x)) {
								obj.transform.position = newPosition;
								hasMoved = true;
							}
						} else if (hitObject.tag == "Border") {
							Vector3 newPosition = obj.transform.position;
							newPosition.x = hit.point.x + HALF_TILE_WIDTH + BORDER_OFFSET;
							if (!Mathf.Approximately (obj.transform.position.x, newPosition.x)) {
								obj.transform.position = newPosition;
								hasMoved = true;
							}
						} 
					}
				}
			}
		}

		return hasMoved;
	}

	private bool MoveTilesRight () {
		// handling right direction, see down direction above for comments 
		bool hasMoved = false;
		for (int x = COLS - 1; x >= 0; x--) {
			for (int y = 0; y < ROWS; y++) {
				GameObject obj = GetObjectAtGridPosition (x, y);
        
				if (obj == noTile) {
					continue;
				}

				if (obj.tag == "Blocker") {
					continue; 
				}
        
				Vector2 raycastOrigin = obj.transform.position;
				raycastOrigin.x += HALF_TILE_WIDTH;
				RaycastHit2D hit = Physics2D.Raycast (raycastOrigin, Vector2.right, Mathf.Infinity);
				if (hit.collider != null) {
					GameObject hitObject = hit.collider.gameObject;
					if (hitObject != obj) {
						if (hitObject.tag == "Tile") {
							Tile thatTile = hitObject.GetComponent<Tile> ();
							Tile thisTile = obj.GetComponent<Tile> ();
							int result = ExecuteOperation (thisTile, thatTile); 
							if (result > 0) {
								UpgradeTile (obj, thisTile, hitObject, thatTile, result);
								hasMoved = true;
								pairTilesEvaluated++;
							} else if (result == 0) {
								DestroyTiles (obj, hitObject); 
								hasMoved = true; 
								if (blockerTileList.Count > 0) {
									DestroyTiles (SelectBlockerTile (), null);
									blockerTilesRemoved = true; 
								}
								pairTilesCleared++; 
							} else {
								Vector3 newPosition = hitObject.transform.position;
								newPosition.x -= SPACE_BETWEEN_TILES;
								if (!Mathf.Approximately (obj.transform.position.x, newPosition.x)) {
									obj.transform.position = newPosition;
									hasMoved = true;
								}
							}
						} else if (hitObject.tag == "Blocker") {
							Vector3 newPosition = hitObject.transform.position;
							newPosition.x -= SPACE_BETWEEN_TILES;
							if (!Mathf.Approximately (obj.transform.position.x, newPosition.x)) {
								obj.transform.position = newPosition;
								hasMoved = true;
							}
						} else if (hitObject.tag == "Border") {
							Vector3 newPosition = obj.transform.position;
							newPosition.x = hit.point.x - HALF_TILE_WIDTH - BORDER_OFFSET;
							if (!Mathf.Approximately (obj.transform.position.x, newPosition.x)) {
								obj.transform.position = newPosition;
								hasMoved = true;
							}
						} 
					}
				}
			}
		}

		return hasMoved;
	}

	private bool MoveTilesUp () {
		// handling up direction, see down direction above for comments 
		bool hasMoved = false;
		for (int y = 1; y < ROWS; y++) {
			for (int x = 0; x < COLS; x++) {
				GameObject obj = GetObjectAtGridPosition (x, y);
        
				if (obj == noTile) {
					continue;
				} 

				if (obj.tag == "Blocker") {
					continue; 
				}

				Vector2 raycastOrigin = obj.transform.position;
				raycastOrigin.y += HALF_TILE_WIDTH;
				RaycastHit2D hit = Physics2D.Raycast (raycastOrigin, Vector2.up, Mathf.Infinity);
				if (hit.collider != null) {
					GameObject hitObject = hit.collider.gameObject;
					if (hitObject != obj) {
						if (hitObject.tag == "Tile") {
							Tile thatTile = hitObject.GetComponent<Tile> ();
							Tile thisTile = obj.GetComponent<Tile> ();
							int result = ExecuteOperation (thisTile, thatTile); 
							if (result > 0) {
								UpgradeTile (obj, thisTile, hitObject, thatTile, result);
								hasMoved = true;
								pairTilesEvaluated++;
							} else if (result == 0) {
								DestroyTiles (obj, hitObject);  
								hasMoved = true; 
								if (blockerTileList.Count > 0) {
									DestroyTiles (SelectBlockerTile (), null);
									blockerTilesRemoved = true; 
								}
								pairTilesCleared++;
							} else {
								Vector3 newPosition = hitObject.transform.position;
								newPosition.y -= SPACE_BETWEEN_TILES;
								if (!Mathf.Approximately (obj.transform.position.y, newPosition.y)) {
									obj.transform.position = newPosition;
									hasMoved = true;
								}
							}
						} else if (hitObject.tag == "Blocker") {
							Vector3 newPosition = hitObject.transform.position;
							newPosition.y -= SPACE_BETWEEN_TILES;
							if (!Mathf.Approximately (obj.transform.position.y, newPosition.y)) {
								obj.transform.position = newPosition;
								hasMoved = true;
							}
						} else if (hitObject.tag == "Border") {
							Vector3 newPosition = obj.transform.position;
							newPosition.y = hit.point.y - HALF_TILE_WIDTH - BORDER_OFFSET;
							if (!Mathf.Approximately (obj.transform.position.y, newPosition.y)) {
								obj.transform.position = newPosition;
								hasMoved = true;
							}
						} 
					}
				}
			}
		}

		return hasMoved;
	}

	private int ExecuteOperation (Tile thisTile, Tile thatTile) {
		int result = -1; 

		// perform the selected operation 
		switch (operation) {
			case Operation.Minus: 
				// perform subtraction
				result = thisTile.value - thatTile.value; 
				break; 
			case Operation.Divide: 
				int remainder = thisTile.value % thatTile.value;

				// perform the division operation if there is no remainder 
				if (remainder == 0)
					result = thisTile.value / thatTile.value;
				else if (remainder > 0)
					result = -1; 

				break; 
			case Operation.Modulo: 
				// perform modulo operation
				result = thisTile.value % thatTile.value; 
				break; 
		}

		// return the result 
		if (result >= 0 && !thisTile.upgradedThisTurn && !thatTile.upgradedThisTurn)
			return result;
		else
			return -1; 
	}

	private void ReadyTilesForUpgrading () {
		foreach (var obj in tiles) {
			Tile tile = obj.GetComponent<Tile> ();
			tile.upgradedThisTurn = false;
		}
	}

	public void Reset () {
		// handling restart
		canvas.SetActive (true);
		gameOverPanel.SetActive (false);

		// clear the board
		foreach (var tile in tiles) {
			SimplePool.Despawn (tile);
		}
		foreach (var tile in blockerTileList) {
			SimplePool.Despawn (tile);
		}

		// resetting variables to initial values 
		tiles.Clear ();
		blockerTileList.Clear ();
		blockerTilesRemoved = false; 
		score = 0;
		scoreText.text = "0";
		scoreMultiplier = 10; 
		scoreMultiplierText.text = "x" + scoreMultiplier;
		state = State.Loaded;
		turnCounter = 0; 

		// Reset the operation buttons
		MinusButtonController.ResetState (); 
		DivideButtonController.ResetState ();
		ModuloButtonController.ResetState ();
	}

	private void UpgradeTile (GameObject toDestroy, Tile destroyTile, GameObject toUpgrade, Tile upgradeTile, int result) {
		Vector3 toUpgradePosition = toUpgrade.transform.position;

		// remove both tiles 
		tiles.Remove (toDestroy);
		tiles.Remove (toUpgrade);

		SimplePool.Despawn (toDestroy);
		SimplePool.Despawn (toUpgrade);

		CheckVictoryCondition (); 

		// create the tile with resulting value 
		GameObject newTile = SimplePool.Spawn (tilePrefabs [result], toUpgradePosition, transform.rotation);
		tiles.Add (newTile);
		Tile tile = newTile.GetComponent<Tile> ();
		tile.upgradedThisTurn = true;

		// animate new tile entry 
		TileAnimationHandler tileAnim = newTile.GetComponent<TileAnimationHandler> ();
		tileAnim.AnimateUpgrade ();
	}

	private void DestroyTiles (GameObject thisDestory, GameObject thatDestory) {
		// removing tiles from the board 
		if (thisDestory.tag == "Blocker")
			blockerTileList.Remove (thisDestory); 

		tiles.Remove (thisDestory); 
		SimplePool.Despawn (thisDestory);

		if (thatDestory != null) {
			tiles.Remove (thatDestory); 
			SimplePool.Despawn (thatDestory);
		}

		// check for victory condition in case all numbered tiles are cleared 
		CheckVictoryCondition (); 
	}

	public void UpdateScore () {
		// update the highscore 
		score += pairTilesEvaluated * 1 + pairTilesCleared * 3; 

		if (turnCounter != 0 && turnCounter <= 90) {
			scoreMultiplier = 10 - 0.1 * turnCounter; 
		}
	}

	public void ToggleHints () {
		// toggle on/off in-game hints panel 
		if (hintsCanvas.activeSelf) {
			hintsCanvas.SetActive (false);
		} else {
			hintsCanvas.SetActive (true);
		}
	}

	#endregion
}
