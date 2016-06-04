#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Includes.h"
#include "Utils.h"

void explode_player(int player);
bool* toggle_godmode(int _do = 0);
bool* spawn_vehicle(int _do = 0, char* name = 0);
bool* set_model(int _do = 0, char* model = 0);
bool* toggle_cash_drop(int _do = 0, int _player = -1);

void teleport(Vector3 Vec);

int get_players_count();

void draw_instructions();
void print0(char* text, int time);

extern int sprintf_opd[2];
extern int(*__sprintf)(char * s, size_t n, const char * format, ...);

extern char print_buf[0x50];
#define sprint(fmt, ...) \
	__sprintf(print_buf, sizeof(print_buf), fmt, __VA_ARGS__); \
	print0(print_buf, 750);

#define for_player for(int player = 0; player < 16; player++)

#endif