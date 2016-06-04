#include "Includes.h"
#include "Utils.h"
#include "Natives.h"
#include "Huds.h"
#include "Buttons.h"
#include "Menu.h"
#include "Colors.h"
#include "Strings.h"
#include "Functions.h"
#include "tErrors.h"

int IS_PLAYER_ONLINE() {
	char* script = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (!strcmp(script, "ingamehud")) {
		/* Hud stuff goes here */
		Menu.draw_menu();
		Menu.run_menu();
		update_buttons();
	}
	if(!strcmp(script, "freemode") || !NETWORK::NETWORK_IS_IN_SESSION()) {
		/* Menu calls go in here, unless they draw huds then they go above */
		toggle_godmode(true);
		spawn_vehicle(true);
		set_model(true);
		toggle_cash_drop(true);
		
		toggle_buttons(!Menu.is_open);
	}

	return 1;
}

void thread_a(uint64_t) {
	init_colors();
	Menu.init();

	char sleep_time = 50;
	while (true) {
		if (!Menu.is_open) {
			DPAD_LEFT_RIGHT = false, DPAD_UP_DOWN = false, BUTTON_L1_R1 = false;
			Menu.is_open = BUTTON_L1_HELD && DPAD_RIGHT_HELD;
			BUTTON_X = false;
		}
		else {
			if (BUTTON_A) {
				Menu.call_function = true;
				sleep(sleep_time);
			}
			if (DPAD_UP_DOWN) {
				Menu.call_function = false;
				Menu.current_index[Menu.current_menu] += DPAD_UP ? -1 : 1;
				wrap_num(&Menu.current_index[Menu.current_menu], (char)0, (char)(Menu.option_count - 1));
				sleep(sleep_time);
			}
			if (BUTTON_X) {
				if (Menu.current_menu == 0) Menu.is_open = false;
				else {
					Menu.change_menu(Menu.parent_menu[Menu.current_menu], true);
					sleep(sleep_time);
				}
			}
		}
		sleep(10);
	}
}

RUN_MODULE(Menu Base, main);
int main() {
	new_thread(thread_a);
	PatchInJump(0x3E3A20, (int)IS_PLAYER_ONLINE);
	return 0;
}