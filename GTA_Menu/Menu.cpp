#include "Utils.h"
#include "Buttons.h"
#include "Colors.h"
#include "Huds.h"
#include "Menu.h"
#include "Strings.h"
#include "Functions.h"
#include "Natives.h"

struct menu Menu;

float x_axis = .87, y_axis = .06;
char drawing_index = 0;
bool can_draw_item() {
	return
		(drawing_index < MAX_PP) &&
		((Menu.current_index[Menu.current_menu] - Menu.c_option_index < (MAX_PP / 2) + 1) ||
		(Menu.c_option_index - drawing_index > abs(MAX_PP - Menu.option_count + 1)) ||
		((Menu.current_index[Menu.current_menu] - Menu.c_option_index < MAX_PP) && Menu.option_count <= MAX_PP));
}
bool is_current_option() {
	return Menu.current_index[Menu.current_menu] == Menu.c_option_index;
}
void draw_arrows() {
	float difference = ((Menu.c_option_index > MAX_PP ? MAX_PP : Menu.c_option_index) * (.035 * 10)) / 10;
	if (Menu.option_count > MAX_PP) {
		if(Menu.current_index[Menu.current_menu] > MAX_PP / 2)
			draw_sprite("helicopterhud", "hudarrow", x_axis, y_axis + difference + .067, .025, .010, white, 0, 1);
		if (Menu.option_count - Menu.current_index[Menu.current_menu] > MAX_PP / 2 + 1)
			draw_sprite("helicopterhud", "hudarrow", x_axis, y_axis + difference + .082, .025, .010, white, 180, 1);
	}
}
void draw_option(char* text) {
	if (can_draw_item()) {
		bool selected = Menu.current_index[Menu.current_menu] - Menu.c_option_index == 0;
		if (selected) Menu.c_drawing_index = drawing_index;
		draw_text(text, 4, .565, x_axis - .1 + (selected ? .012 : 0), y_axis + .052 + (.035 * drawing_index), white);
		drawing_index++;
	}
	Menu.c_option_index++;
}
void draw_value(string value) {
	if (can_draw_item()) {
		draw_text(string("&lt; ") + value + string(" ~w~&gt;"), 4, .565, x_axis + .1, y_axis + .052 + (.035 * drawing_index), white, right);
	}
}
void draw_bool(bool value) {
	if (can_draw_item()) {
		char* n = (char*)(value ? "shop_box_tick" : "shop_box_cross");
		draw_sprite("commonmenu", n, x_axis + 0.088, y_axis + 0.073 + (.035 * drawing_index), 0.032, 0.056, (value ? color_s(0, 255, 0, 150) : color_s(255, 0, 0, 150)), 0, 1);
	}
}

#define add_option_c(text, function, ...) \
	if(is_current_option()) { Menu.c_option_t = 0; if(Menu.call_function) { function(__VA_ARGS__); Menu.call_function = false; } } \
	draw_option(text);

#define add_option_bc_arg(text, show, x, v, ...) \
	if(is_current_option()) { \
		Menu.c_option_t = show; \
		if(Menu.call_function) { \
			*(x(0, __VA_ARGS__)) = v; \
			(x(-1, __VA_ARGS__)); \
			Menu.call_function = false; \
		} \
	} \
	if(show) draw_bool(*(x(0, __VA_ARGS__))); \
	draw_option(text);

void add_option_bc(char* text, bool show, bool*(*x)(int), bool v) {
	if (is_current_option()) { 
		Menu.c_option_t = show;
		if (Menu.call_function) { 
			*(x(0)) = v; 
			(x(-1));
			Menu.call_function = false;
		} 
	}
	if (show) draw_bool(*(x(0)));
	draw_option(text);
}

void add_option_n(char* text) {
	add_option_c(text, sprint, "Selected ~g~%s", text);
}
template<typename T>
void add_option_e(char* text, string display, T* ptr, T min, T max, T incremement_s, T incremement_l) {
	if (is_current_option()) {
		if (DPAD_LEFT_RIGHT && !BUTTON_L1_R1) {
			*ptr += (DPAD_LEFT ? -incremement_s : incremement_s);
		}
		if (BUTTON_L1_R1 && !DPAD_LEFT_RIGHT) {
			*ptr += (BUTTON_L1 ? -incremement_l : incremement_l);
		}
		wrap_num(ptr, min, max);
		Menu.c_option_t = 2;
	}
	draw_value(display);
	draw_option(text);
}
void add_option_i(char* text, int* ptr, int min, int max, int increment_s = 1, int increment_l = 10) {
	add_option_e(text, string(*ptr), ptr, min, max, increment_s, increment_l);
}
void add_option_f(char* text, float* ptr, float min, float max, float increment_s = 0.1, float increment_l = 1) {
	add_option_e(text, string(round_(*ptr)), ptr, min, max - (1 - increment_s), increment_s, increment_l);
}
void add_option_b(char* text, bool* ptr) {
	if (is_current_option()) {
		if (BUTTON_A) *ptr = !*ptr;
		Menu.c_option_t = 1;
	}
	draw_bool(*ptr);
	draw_option(text);
}
void menu::change_menu(char index, bool s) {
	changing_menu = true;
	if(!s) parent_menu[index] = current_menu;
	current_menu = index;
	changing_menu = false;
}
void open_players_options(int player) {
	Menu.selected_player = player;
	Menu.change_menu(Players_Options);
}
void menu::draw_menu() {
	if (!is_open) return;
	if (current_index[current_menu] + 2 > option_count && current_menu == Players) current_index[current_menu] = option_count - 1;
	float difference = ((option_count > MAX_PP ? MAX_PP : option_count) * (.035 * 10)) / 10;
	draw_rect(x_axis, y_axis + .018, .205, .074, shader_color);
	draw_rect(x_axis, y_axis + .055 + difference / 2, .205, difference, background_color);
	draw_rect(x_axis, y_axis + .074 + difference, .205, .038, shader_color);
	draw_text(title, 1, 1, x_axis, y_axis - .024, white, center);
	draw_text(sub_title, 1, .55, x_axis, y_axis + .022, white, center);
	draw_text(creator_text, 1, .455, x_axis - .097, y_axis + difference + .058, white);
	draw_text((string)(current_index[current_menu] + 1) + "/" + (string)option_count, 1, .455, x_axis + .095, y_axis + difference + .058, white, right);
	draw_sprite("commonmenu", "arrowright", x_axis - .095, y_axis + .074 + (.035 * c_drawing_index), .022, .022, pointer_color);
	draw_instructions();
	draw_arrows();
}

void reset_vars() {
	drawing_index = 0;
	Menu.c_option_index = 0;
}
void menu::run_menu() {
	if (!is_open) return;
	reset_vars();

	static int a_int = 0;
	static float a_float = 0;
	static bool a_bool = false;

	switch (current_menu) {
		case Main_Menu: {
			sub_title = "Main Menu";
			option_count = 9;
			add_option_i("Edit Int", &a_int, 0, 100);
			add_option_f("Edit Float", &a_float, 0, 5);
			add_option_b("Toggle Bool", &a_bool);
			add_option_bc("Toggle Godmode", true, toggle_godmode, !*toggle_godmode());
			add_option_c("Explode Self", explode_player, PLAYER::PLAYER_ID());
			add_option_bc_arg("Spawn Adder", false, spawn_vehicle, true, "adder");
			add_option_bc_arg("Change Model to Alien", false, set_model, true, "S_M_M_MovAlien_01");
			add_option_c("Open Sub", change_menu, Sub_1);
			add_option_c("Players Menu", change_menu, Players);
			break;
		}
		case Sub_1: {
			sub_title = "Sub menu 1";
			option_count = 15 + 1;
			for (int i = 0; i < 15; i++) {
				add_option_n(string("Option ") + string(i + 1));
			}
			add_option_c("Open Nested Sub", change_menu, Sub_2);
			break;
		}
		case Sub_2: {
			sub_title = "A Nested Sub";
			option_count = 3;
			add_option_n("Option 1");
			add_option_n("Option 2");
			add_option_n("Option 3");
			break;
		}
		case Players: {
			sub_title = "Players Menu";
			option_count = get_players_count();
			for_player {
				char* name = PLAYER::GET_PLAYER_NAME(player);
				if (!strcmp(name, "**Invalid**")) continue;
				add_option_c(name, open_players_options, player);
			}
			break;
		}
		case Players_Options: {
			sub_title = PLAYER::GET_PLAYER_NAME(selected_player);
			option_count = 3;
			add_option_c("Blow Up", explode_player, selected_player);
			add_option_c("Teleport To", teleport, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(selected_player)));
			add_option_bc_arg("Drop Cash", true, toggle_cash_drop, !*toggle_cash_drop(0, selected_player), selected_player);
			break;
		}
	}
}
void menu::init() {
	title = "Menu Base v3";
	creator_text = "by John";
}