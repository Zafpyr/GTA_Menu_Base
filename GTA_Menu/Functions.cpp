#include "Functions.h"
#include "Utils.h"
#include "Natives.h"
#include "Menu.h"

#define INIT_ARRAY_16 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

int sprintf_opd[2] = { 0x14FE110, TOC };
int(*__sprintf)(char * s, size_t n, const char * format, ...) = (int(*)(char*, size_t, const char*, ...))&sprintf_opd;

char print_buf[0x50];
void print0(char* text, int time) {
	UI::_0xF42C43C7("STRING");
	UI::_0x27A244D8(text);
	UI::_0x38F82261(time, 1);
}

void teleport(Vector3 Vec) {
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Vec);
}
void explode_player(int player) {
	FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(player)), 29, 0.5f, true, false, 5.0f);
}
int get_players_count() {
	int players = 0;
	for_player {
		if (strcmp(PLAYER::GET_PLAYER_NAME(player), "**Invalid**")) players++;
	}
	return players;
}

bool* toggle_godmode(int _do) {
	static bool value;
	switch (_do) {
		case -1: {
			sprint("Godmode %s", value ? "~g~On" : "~r~Off");
			break;
		}
		case 1: {
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), value);
			break;
		}
	}
	return &value;
}
bool* set_model(int _do, char* model) {
	static bool value;
	static char* _model;
	if (model != 0) _model = model;

	if (!value) return &value;
	switch (_do) {
		case -1: {
			sprint("Model set to ~g~%s", _model);
			break;
		}
		case 1: {
			int hash = GAMEPLAY::GET_HASH_KEY(_model);
			if (STREAMING::IS_MODEL_IN_CDIMAGE(hash) && STREAMING::IS_MODEL_VALID(hash)) {
				STREAMING::REQUEST_MODEL(hash);
				if (STREAMING::HAS_MODEL_LOADED(hash)) {
					PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), hash);
					value = false;
				}
			}
			else value = false;
			break;
		}
	}
	return &value;
}
bool* spawn_vehicle(int _do, char* name) {
	static bool value;
	static char* _name;
	if (name != 0) _name = name;

	if (!value) return &value;
	switch (_do) {
		case -1: {
			sprint("Spawned ~g~%s", _name);
			break;
		}
		case 1: {
			int hash = GAMEPLAY::GET_HASH_KEY(_name);
			if (STREAMING::IS_MODEL_IN_CDIMAGE(hash) && STREAMING::IS_MODEL_VALID(hash)) {
				STREAMING::REQUEST_MODEL(hash);
				if (STREAMING::HAS_MODEL_LOADED(hash)) {
					int ped_id = PLAYER::PLAYER_PED_ID();
					int old_vehicle = PED::GET_VEHICLE_PED_IS_USING(ped_id);
					float speed = ENTITY::GET_ENTITY_SPEED(old_vehicle);
					if (old_vehicle) VEHICLE::DELETE_VEHICLE(&old_vehicle);
					float* origin = ENTITY::GET_ENTITY_COORDS(ped_id);
					int new_vehicle = VEHICLE::CREATE_VEHICLE(hash, origin, 0, 1, 0);
					if (new_vehicle) {
						ENTITY::SET_ENTITY_HEADING(new_vehicle, ENTITY::GET_ENTITY_HEADING(ped_id));
						PED::SET_PED_INTO_VEHICLE(ped_id, new_vehicle, -1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(new_vehicle, 1, 0);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(new_vehicle, speed);
						value = 0;
					}
				}
			}
			else value = 0;
			break;
		}
	}
	return &value;
}
bool* toggle_cash_drop(int _do, int _player) {
	static bool drop[16] = { INIT_ARRAY_16 };

	switch (_do) {
		case -1: {
			sprint("Drop money for %s %s", PLAYER::GET_PLAYER_NAME(_player), drop[_player] ? "~g~On" : "~r~Off");
			break;
		}
		case 1: {
			int pickup_money_case = GAMEPLAY::GET_HASH_KEY("PICKUP_MONEY_CASE"), model = GAMEPLAY::GET_HASH_KEY("prop_money_bag_01");
			for_player {
				if (drop[player]) {
					Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(player));
					OBJECT::CREATE_AMBIENT_PICKUP(pickup_money_case, coords, 0, 40000, model, 0, 1);
				}
			}
			break;
		}
	}
	return &drop[_player];
}
namespace Instructions {
	int VAR_INSTRUCTIONAL_COUNT, VAR_INSTRUCTIONAL_CONTAINER;
	void Instructions::Init() {
		VAR_INSTRUCTIONAL_COUNT = 0;
		VAR_INSTRUCTIONAL_CONTAINER = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(VAR_INSTRUCTIONAL_CONTAINER, 255, 255, 255, 0, 0);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(VAR_INSTRUCTIONAL_CONTAINER, "CLEAR_ALL");
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(VAR_INSTRUCTIONAL_CONTAINER, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(200);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	void Instructions::Add(char *text, int button) {
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(VAR_INSTRUCTIONAL_CONTAINER, "SET_DATA_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(VAR_INSTRUCTIONAL_COUNT);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(button);
		GRAPHICS::_BEGIN_TEXT_COMPONENT("STRING");
		UI::_ADD_TEXT_COMPONENT_STRING(text);
		GRAPHICS::_END_TEXT_COMPONENT();
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		VAR_INSTRUCTIONAL_COUNT++;
	}
	void Instructions::End() {
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(VAR_INSTRUCTIONAL_CONTAINER, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(VAR_INSTRUCTIONAL_CONTAINER, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(80);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}
void draw_instructions() {
	Instructions::Init();
	Instructions::Add((char*)(Menu.current_menu ? "Back" : "Close"), 32); // BUTTON_X
	Instructions::Add("Scroll", 10);//BUTTON_DPAD_UP_DOWN
	switch (Menu.c_option_t) {
		default: case 0: Instructions::Add("Select", 30); break;//BUTTON_A
		case 1: Instructions::Add("Toggle", 30); break;//BUTTON_A
		case 2: Instructions::Add("Change Value", 11); break;//BUTTON_DPAD_LEFT_RIGHT
	}
	Instructions::End();
}