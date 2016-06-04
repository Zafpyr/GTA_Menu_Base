#include "Natives.h"
#include "Buttons.h"

bool button_pressed(int button) {
	return CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, button);
}
bool button_held(int button) {
	return CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, button);
}
void disable_control(int button) {
	CONTROLS::SET_INPUT_EXCLUSIVE(0, button);
	CONTROLS::DISABLE_CONTROL_ACTION(0, button);
}

bool BUTTON_A, BUTTON_X, BUTTON_L1, BUTTON_R1, BUTTON_L1_R1, DPAD_UP, DPAD_DOWN, DPAD_UP_DOWN, DPAD_LEFT, DPAD_RIGHT, DPAD_LEFT_RIGHT;
bool BUTTON_L1_HELD, DPAD_RIGHT_HELD;

void update_buttons() {
	BUTTON_A = button_pressed(0xC1);
	BUTTON_X = button_pressed(0xC2);
	BUTTON_L1 = button_pressed(0xC4);
	BUTTON_R1 = button_pressed(0xC5);
	BUTTON_L1_R1 = BUTTON_L1 | BUTTON_R1;
	DPAD_UP = button_pressed(0xCA);
	DPAD_DOWN = button_pressed(0xCB);
	DPAD_LEFT = button_pressed(0xCC);
	DPAD_RIGHT = button_pressed(0xCD);
	DPAD_LEFT_RIGHT = DPAD_LEFT | DPAD_RIGHT;
	DPAD_UP_DOWN = DPAD_UP | DPAD_DOWN;

	BUTTON_L1_HELD = button_held(0xC4);
	DPAD_RIGHT_HELD = button_held(0xCD);
}
void toggle_buttons(bool state) {
	if (state) {
		CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
		return;
	}
	disable_control(0xCA);//UP
	disable_control(0xCB);//DOWN
	disable_control(0xCC);//LEFT
	disable_control(0xCD);//RIGHT
	disable_control(0xC4);//L1
	disable_control(0xC5);//R1
	disable_control(0xC1);//CROSS
	disable_control(0xC2);//SQUARE
}
/*
BUTTON_A = 0xC1,
BUTTON_B = 0xC3,
BUTTON_X = 0xC2,
BUTTON_Y = 0xC0,
BUTTON_Back = 0xBF,
BUTTON_L1 = 0xC4,
BUTTON_L2 = 0xC6,
BUTTON_L3 = 0xC8,
BUTTON_R1 = 0xC5,
BUTTON_R2 = 0xC7,
BUTTON_R3 = 0xC9,
Dpad_Up = 0xCA,
Dpad_Down = 0xCB,
Dpad_Left = 0xCC,
Dpad_Right = 0xCD
*/