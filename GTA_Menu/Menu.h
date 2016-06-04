#ifndef MENU_H
#define MENU_H

#define MAX_MENUS 10
#define MAX_PP 9

#define MENU_COUNT __COUNTER__
#define COUNT_MENU = __COUNTER__,

enum menus {
	Main_Menu			COUNT_MENU
	Sub_1				COUNT_MENU
	Sub_2				COUNT_MENU
	Players				COUNT_MENU
	Players_Options		COUNT_MENU
};

struct menu {
	char current_index[MAX_MENUS], parent_menu[MAX_MENUS], option_count;
	char c_option_index, current_menu, previous_menu, c_drawing_index, c_option_t, selected_player;
	bool call_function, is_open, changing_menu;
	char* title, *creator_text, *sub_title;
	void init();
	void change_menu(char index, bool s = false);
	void draw_menu();
	void run_menu();
};

extern struct menu Menu;

#endif // !MENU_H
