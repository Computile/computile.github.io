using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class SplashController : MonoBehaviour {

	// Sprite variables referencing each sprite from logo_sprite.png asset
	public Sprite sprite1;
	public Sprite sprite2;
	public Sprite sprite3;
	public Sprite sprite4;

	// enum to keep track of logo object's current sprite
	public enum State {
		sprite1,
		sprite2,
		sprite3,
		sprite4
	}

	private static State state;

	// class constants
	private static float LOGO_ANIMATION_DURATION = 0.3f;
	private static int SPLASH_DURATION = 2;

	IEnumerator Start () {
		// assign logo object with first logo sprite 
		state = State.sprite1; 

		// call the UpdateSprite() method every 0.3 seconds 
		InvokeRepeating ("UpdateSprite", 0f, LOGO_ANIMATION_DURATION);

		// let application sleep for 2 seconds before quitting the Splash Scene 
		yield return new WaitForSeconds (SPLASH_DURATION);
		//Application.Quit (); 

		// display the GameScene Scene  
		SceneManager.LoadScene (1); 
	}

	void Update () {
		// update the logo object's sprite based on its state 
		switch (state) {
			case State.sprite1:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite1;
				break; 
			case State.sprite2:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite2;
				break; 
			case State.sprite3:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite3;
				break; 
			case State.sprite4:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite4;
				break; 
		}
	}

	void UpdateSprite () {
		// transition logo object's sprite state 
		switch (state) {
			case State.sprite1:
				state = State.sprite2; 
				break; 
			case State.sprite2:
				state = State.sprite3; 
				break; 
			case State.sprite3:
				state = State.sprite4; 
				break; 
			case State.sprite4:
				state = State.sprite1; //loop back to initial state 
				break; 
		}
	}
}
