using UnityEngine;
using System.Collections;

public class MinusButtonController : MonoBehaviour {

	// Sprite variables referencing each sprite from minus_btn.png asset
	public Sprite sprite1;
	public Sprite sprite2;

	// enum to keep track of button's current sprite
	public enum State {
		Unselected,
		Selected
	}

	private static State state;

	// Use this for initialization
	void Start () {
		state = State.Selected; 
	}

	// Update is called once per frame
	void Update () {
		// update the sprite based on its state 
		switch (state) {
			case State.Unselected:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite1;
				break; 
			case State.Selected:
				this.gameObject.GetComponent<SpriteRenderer> ().sprite = sprite2; 
				break; 
		}
	}

	#region private methods

	public void onClick () {
		// change game's operation to minus mode 
		if (state == State.Unselected && GridController.GetOperationState () == GridController.Operation.Minus) {
			GridController.SetOperationState ("minus"); 
			state = State.Selected; 
		}
	}

	#endregion

	#region class methods

	// change button's state
	public static void ChangeState () {
		if (GridController.GetOperationState () != GridController.Operation.Minus) {
			state = State.Unselected; 
		}
	}

	// change button's state
	public static void ResetState () {
		// minus button's default state is 'selected' 
		state = State.Selected; 
	}

	public static State GetState () {
		return state; 
	}

	#endregion
}
