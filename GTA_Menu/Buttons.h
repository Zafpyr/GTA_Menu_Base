#ifndef BUTTONS_H
#define BUTTONS_H

extern bool BUTTON_A, BUTTON_X, BUTTON_L1, BUTTON_R1, BUTTON_L1_R1, DPAD_UP, DPAD_DOWN, DPAD_UP_DOWN, DPAD_LEFT, DPAD_RIGHT, DPAD_LEFT_RIGHT;
extern bool BUTTON_L1_HELD, DPAD_RIGHT_HELD;
void update_buttons();
void toggle_buttons(bool state);

#endif