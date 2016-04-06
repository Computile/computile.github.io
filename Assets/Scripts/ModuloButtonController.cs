using UnityEngine;
using System.Collections;

public class ModuloButtonController : MonoBehaviour {

	// Sprite variables referencing each sprite from modulo_btn.png asset
	public Sprite sprite1;
	public Sprite sprite2;
	public Sprite sprite3;
	public Sprite sprite4;
	public Sprite sprite5;
	public Sprite sprite6;

	// enum to keep track of button's current sprite
	public enum State {
		Unselected1,
		Unselected2,
		Unselected3,
		Unselected4,
		Unselected5,
		Selected
	}

	private static State state;

	// Use this for initialization
	void Start () {
		state = State.Unselected1; 
	}

	// Update is called once per frame
	void Update () {
		// update the sprite based on its state 
		switch (state) {
			case State.Unselected1:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite1;
				break; 
			case State.Unselected2:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite2;
				break; 
			case State.Unselected3:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite3;
				break; 
			case State.Unselected4:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite4;
				break; 
			case State.Unselected5:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite5;
				break; 
			case State.Selected:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite6; 
				break; 
		}
	}

	#region private methods

	public void onClick () {
		// change game's operation to modulo mode 
		if (state == State.Unselected5 && GridController.GetOperationState () == GridController.Operation.Minus) {
			GridController.SetOperationState ("modulo"); 
			state = State.Selected; 

			// change minus button's state 
			MinusButtonController.ChangeState ();
		}
	}

	#endregion

	#region class methods

	public static void ChangeState () {
		// update button's sprite state 
		switch (state) {
			case State.Unselected1:
				state = State.Unselected2; 
				break; 
			case State.Unselected2:
				state = State.Unselected3; 
				break; 
			case State.Unselected3:
				state = State.Unselected4; 
				break; 
			case State.Unselected4:
				state = State.Unselected5; 
				break; 
			case State.Unselected5:
				state = State.Unselected5; 
				break; 
			case State.Selected:
				state = State.Selected; 
				break; 
		}
	}

	// reset the button's state to default
	public static void ResetState () {
		state = State.Unselected1; 
	}

	public static void SetSelectedState () {
		state = State.Selected; 
	}

	public static State GetState () {
		return state; 
	}

	#endregion
}
