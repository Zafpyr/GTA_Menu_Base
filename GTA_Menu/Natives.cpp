#include "Natives.h"

int PLAYER::GET_PLAYER_PED(int player) { return invoke<int>(0x6E31E993, player); }
int PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(int player) { return invoke<int>(0x6AC64990, player); }
void PLAYER::SET_PLAYER_MODEL(int player, int modelHash) { invoke<void*>(0x774A4C54, player, modelHash); }
void PLAYER::CHANGE_PLAYER_PED(int p0, int p1, int p2, int p3) { invoke<void*>(0xBE515485, p0, p1, p2, p3); }
void PLAYER::GET_PLAYER_RGB_COLOUR(int player, int* Red, int* Green, int* Blue) { invoke<void*>(0x6EF43BBB, player, Red, Green, Blue); }
int PLAYER::GET_NUMBER_OF_PLAYERS() { return invoke<int>(0x4C1B8867); }
int PLAYER::GET_PLAYER_TEAM(int player) { return invoke<int>(0x9873E404, player); }
void PLAYER::SET_PLAYER_TEAM(int player, int Team) { invoke<void*>(0x725ADCF2, player, Team); }
char* PLAYER::GET_PLAYER_NAME(int player) { return invoke<char*>(0x406B4B20, player); }
float PLAYER::GET_WANTED_LEVEL_RADIUS(int player) { return invoke<float>(0x1CF7D7DA, player); }
Vector3 PLAYER::GET_PLAYER_WANTED_CENTRE_POSITION(int player) { return invoke<Vector3>(0x821F2D2C, player); }
void PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(int player, float x, float y, float z) { invoke<void*>(0xF261633A, player, x, y, z); }
int PLAYER::GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xD9783F6B, wantedLevel); }
void PLAYER::SET_PLAYER_WANTED_LEVEL(int player, int wantedLevel, int p2) { invoke<void*>(0xB7A0914B, player, wantedLevel, p2); }
void PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(int player, int wantedLevel, int p2) { invoke<void*>(0xED6F44F5, player, wantedLevel, p2); }
void PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(int player, int p1) { invoke<void*>(0xAF3AFD83, player, p1); }
int PLAYER::ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(int player) { return invoke<int>(0xE13A71C7, player); }
int PLAYER::ARE_PLAYER_STARS_GREYED_OUT(int player) { return invoke<int>(0x5E72AB72, player); }
void PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(int player, int Enable) { invoke<void*>(0x48A18913, player, Enable); }
int PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(int player, int wantedLevel) { return invoke<int>(0x589A2661, player, wantedLevel); }
void PLAYER::CLEAR_PLAYER_WANTED_LEVEL(int player) { invoke<void*>(0x54EA5BCC, player); }
int PLAYER::IS_PLAYER_DEAD(int player) { return invoke<int>(0x140CA5A8, player); }
int PLAYER::IS_PLAYER_PRESSING_HORN(int player) { return invoke<int>(0xED1D1662, player); }
void PLAYER::SET_PLAYER_CONTROL(int playerId, int Toggle, int possiblyFlags) { invoke<void*>(0xD17AFCD8, playerId, Toggle, possiblyFlags); }
int PLAYER::GET_PLAYER_WANTED_LEVEL(int player) { return invoke<int>(0xBDCDD163, player); }
void PLAYER::SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<void*>(0x665A06F5, maxWantedLevel); }
void PLAYER::SET_POLICE_RADAR_BLIPS(int Toggle) { invoke<void*>(0x8E114B10, Toggle); }
void PLAYER::SET_POLICE_IGNORE_PLAYER(int player, int Toggle) { invoke<void*>(0xE6DE71B7, player, Toggle); }
int PLAYER::IS_PLAYER_PLAYING(int player) { return invoke<int>(0xE15D777F, player); }
void PLAYER::SET_EVERYONE_IGNORE_PLAYER(int player, int Toggle) { invoke<void*>(0xC915285E, player, Toggle); }
void PLAYER::SET_ALL_RANDOM_PEDS_FLEE(int player, int p1) { invoke<void*>(0x49EAE968, player, p1); }
void PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(int player) { invoke<void*>(0xBF974891, player); }
void PLAYER::_0x274631FE(int player, int Toggle) { invoke<void*>(0x274631FE, player, Toggle); }
void PLAYER::_0x02DF7AF4(int p0) { invoke<void*>(0x02DF7AF4, p0); }
void PLAYER::SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(int playerIndex, int p1) { invoke<void*>(0xA3D675ED, playerIndex, p1); }
void PLAYER::SET_WANTED_LEVEL_MULTIPLIER(float Multiplier) { invoke<void*>(0x1359292F, Multiplier); }
void PLAYER::SET_WANTED_LEVEL_DIFFICULTY(int player, float difficulty) { invoke<void*>(0xB552626C, player, difficulty); }
void PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(int player) { invoke<void*>(0xA64C378D, player); }
void PLAYER::START_FIRING_AMNESTY(int p0) { invoke<void*>(0x5F8A22A6, p0); }
void PLAYER::REPORT_CRIME(int player, int p0, int p1) { invoke<void*>(0xD8EB3A44, player, p0, p1); }
void PLAYER::_0x59B5C2A2(int p0, int p1) { invoke<void*>(0x59B5C2A2, p0, p1); }
void PLAYER::_0x6B34A160(int p0) { invoke<void*>(0x6B34A160, p0); }
void PLAYER::_0xB9FB142F(int p0) { invoke<void*>(0xB9FB142F, p0); }
void PLAYER::_0x85725848(int p0) { invoke<void*>(0x85725848, p0); }
void PLAYER::_0x3A7E5FB6(float* p0f) { invoke<void*>(0x3A7E5FB6, p0f); }
void PLAYER::_0xD15C4B1C(int p0) { invoke<void*>(0xD15C4B1C, p0); }
void PLAYER::_0xBF6993C7(int p0) { invoke<void*>(0xBF6993C7, p0); }
void PLAYER::_0x47CAB814() { invoke<void*>(0x47CAB814); }
int PLAYER::CAN_PLAYER_START_MISSION(int p0) { return invoke<int>(0x39E3CB3F, p0); }
int PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(int p0) { return invoke<int>(0xBB77E9CD, p0); }
int PLAYER::IS_PLAYER_TARGETTING_ENTITY(int player, int entity) { return invoke<int>(0xF3240B77, player, entity); }
int PLAYER::GET_PLAYER_TARGET_ENTITY(int player, int*  entity) { return invoke<int>(0xF6AAA2D7, player, entity); }
int PLAYER::IS_PLAYER_FREE_AIMING(int player) { return invoke<int>(0x1DEC67B7, player); }
int PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(int player, int entity) { return invoke<int>(0x7D80EEAA, player, entity); }
int PLAYER::_GET_AIMED_ENTITY(int player, int*  entity) { return invoke<int>(0x8866D9D0, player, entity); }
void PLAYER::_0x74D42C03(int p0, int p1) { invoke<void*>(0x74D42C03, p0, p1); }
void PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(int p0, int p1) { invoke<void*>(0xF4D99685, p0, p1); }
void PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(int p0, int p1) { invoke<void*>(0x71B305BB, p0, p1); }
void PLAYER::SET_PLAYER_CAN_USE_COVER(int p0, int p1) { invoke<void*>(0x13CAFAFA, p0, p1); }
int PLAYER::GET_MAX_WANTED_LEVEL() { return invoke<int>(0x457F1E44); }
int PLAYER::IS_PLAYER_TARGETTING_ANYTHING(int player) { return invoke<int>(0x456DB50D, player); }
void PLAYER::SET_PLAYER_SPRINT(int p0, int p1) { invoke<void*>(0x7DD7900C, p0, p1); }
void PLAYER::RESET_PLAYER_STAMINA(int player) { invoke<void*>(0xC0445A9C, player); }
void PLAYER::RESTORE_PLAYER_STAMINA(int p0, int p1) { invoke<void*>(0x62A93608, p0, p1); }
int PLAYER::_0x47017C90(int p0) { return invoke<int>(0x47017C90, p0); }
int PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(int p0) { return invoke<int>(0x40E80543, p0); }
int PLAYER::GET_PLAYER_UNDERWATER_TIME_REMAINING(int p0) { return invoke<int>(0x1317125A, p0); }
int PLAYER::GET_PLAYER_GROUP(int player) { return invoke<int>(0xA5EDCDE8, player); }
int PLAYER::GET_PLAYER_MAX_ARMOUR(int player) { return invoke<int>(0x02A50657, player); }
int PLAYER::IS_PLAYER_CONTROL_ON(int player) { return invoke<int>(0x618857F2, player); }
int PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(int p0) { return invoke<int>(0x61B00A84, p0); }
int PLAYER::IS_PLAYER_CLIMBING(int p0) { return invoke<int>(0x4A9E9AE0, p0); }
int PLAYER::IS_PLAYER_BEING_ARRESTED(int p0, int p1) { return invoke<int>(0x7F6A60D3, p0, p1); }
void PLAYER::_0x453C7CAB(int p0) { invoke<void*>(0x453C7CAB, p0); }
int PLAYER::GET_PLAYERS_LAST_VEHICLE() { return invoke<int>(0xE2757AC1); }
int PLAYER::GET_PLAYER_INDEX() { return invoke<int>(0x309BBDC1); }
int PLAYER::INT_TO_PLAYERINDEX(int p0) { return invoke<int>(0x98DD98F1, p0); }
int PLAYER::_0x98F3B274(int p0) { return invoke<int>(0x98F3B274, p0); }
int PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(int p0) { return invoke<int>(0x6E9B8B9E, p0); }
int PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(int p0) { return invoke<int>(0xB6209195, p0); }
int PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(int p0) { return invoke<int>(0x8836E732, p0); }
float PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(float time) { return invoke<float>(0x9F27D00E, time); }
int PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(int p0) { return invoke<int>(0x85C7E232, p0); }
int PLAYER::PLAYER_ID() { return invoke<int>(0x8AEA886C); }
int PLAYER::PLAYER_PED_ID() { return invoke<int>(0xFA92E226); }
int PLAYER::_0x8DD5B838() { return invoke<int>(0x8DD5B838); }
int PLAYER::_0x4B37333C(int p0) { return invoke<int>(0x4B37333C, p0); }
void PLAYER::FORCE_CLEANUP(int p0) { invoke<void*>(0xFDAAEA2B, p0); }
void PLAYER::_0x04256C73(int p0, int p1) { invoke<void*>(0x04256C73, p0, p1); }
void PLAYER::_0x882D3EB3(int p0, int p1) { invoke<void*>(0x882D3EB3, p0, p1); }
int PLAYER::_0x39AA9FC8() { return invoke<int>(0x39AA9FC8); }
void PLAYER::SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(int p0, int p1) { invoke<void*>(0xA454DD29, p0, p1); }
void PLAYER::_0xAF7AFCC4(int p0) { invoke<void*>(0xAF7AFCC4, p0); }
int PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(int achievement) { return invoke<int>(0x822BC992, achievement); }
int PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) { return invoke<int>(0x136A5BE9, achievement); }
int PLAYER::IS_PLAYER_ONLINE() { return invoke<int>(0x9FAB6729); }
int PLAYER::IS_PLAYER_LOGGING_IN_NP() { return invoke<int>(0x8F72FAD0); }
void PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(int p0) { invoke<void*>(0x4264CED2, p0); }
int PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<int>(0xE495B6DA); }
void PLAYER::SET_PLAYER_INVINCIBLE(int player, int toggle) { invoke<void*>(0xDFB9A2A2, player, toggle); }
int PLAYER::GET_PLAYER_INVINCIBLE(int p0) { return invoke<int>(0x680C90EE, p0); }
void PLAYER::_0x00563E0D(int p0, int p1) { invoke<void*>(0x00563E0D, p0, p1); }
void PLAYER::REMOVE_PLAYER_HELMET(int player, int p2) { invoke<void*>(0x6255F3B4, player, p2); }
void PLAYER::GIVE_PLAYER_RAGDOLL_CONTROL(int p0, int p1) { invoke<void*>(0xC7B4D7AC, p0, p1); }
void PLAYER::SET_PLAYER_LOCKON(int p0, int p1) { invoke<void*>(0x0B270E0F, p0, p1); }
void PLAYER::SET_PLAYER_TARGETING_MODE(int player) { invoke<void*>(0x61CAE253, player); }
void PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(int p0) { invoke<void*>(0x1D31CBBD, p0); }
int PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(int p0) { return invoke<int>(0x14F52453, p0); }
void PLAYER::_0x7E3BFBC5(int p0) { invoke<void*>(0x7E3BFBC5, p0); }
int PLAYER::_0xA3707DFC(int p0) { return invoke<int>(0xA3707DFC, p0); }
void PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(int p0, int p1) { invoke<void*>(0xF20F72E5, p0, p1); }
void PLAYER::_0xB986FF47(int p0, int p1) { invoke<void*>(0xB986FF47, p0, p1); }
void PLAYER::_0x825423C2(int p0, int p1) { invoke<void*>(0x825423C2, p0, p1); }
int PLAYER::GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0x62824EF4); }
int PLAYER::GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0x24BC5AC0); }
void PLAYER::ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<void*>(0xF23277F3); }
void PLAYER::ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<void*>(0xD04568B9); }
void PLAYER::SET_PLAYER_FORCED_AIM(int p0, int p1) { invoke<void*>(0x94E42E2E, p0, p1); }
void PLAYER::SET_PLAYER_FORCED_ZOOM(int p0, int p1) { invoke<void*>(0xB0C576CB, p0, p1); }
void PLAYER::_0x374F42F0(int p0, int p1) { invoke<void*>(0x374F42F0, p0, p1); }
void PLAYER::DISABLE_PLAYER_FIRING(int player, int Toggle) { invoke<void*>(0x30CB28CB, player, Toggle); }
void PLAYER::_0xCCD937E7(int p0, int p1) { invoke<void*>(0xCCD937E7, p0, p1); }
void PLAYER::SET_PLAYER_MAX_ARMOUR(int player, int Toggle) { invoke<void*>(0xC6C3C53B, player, Toggle); }
void PLAYER::SPECIAL_ABILITY_DEACTIVATE(int p0) { invoke<void*>(0x80C2AB09, p0); }
void PLAYER::_0x0751908A(int p0) { invoke<void*>(0x0751908A, p0); }
void PLAYER::SPECIAL_ABILITY_RESET(int p0) { invoke<void*>(0xA7D8BCD3, p0); }
void PLAYER::_0x4136829A(int p0) { invoke<void*>(0x4136829A, p0); }
void PLAYER::_0x6F463F56(int p0, int p1, int p2) { invoke<void*>(0x6F463F56, p0, p1, p2); }
void PLAYER::_0xAB55D8F3(int p0, int p1, int p2) { invoke<void*>(0xAB55D8F3, p0, p1, p2); }
void PLAYER::_0xF440C04D(int p0, int p1, int p2) { invoke<void*>(0xF440C04D, p0, p1, p2); }
void PLAYER::_0x5FEE98A2(int p0, int p1) { invoke<void*>(0x5FEE98A2, p0, p1); }
void PLAYER::_0x72429998(int p0, int p1, int p2) { invoke<void*>(0x72429998, p0, p1, p2); }
void PLAYER::RESET_SPECIAL_ABILITY_CONTROLS_CINEMATIC(int p0, int p1, int p2) { invoke<void*>(0x8C7E68C1, p0, p1, p2); }
void PLAYER::_0xB71589DA(int p0, int p1) { invoke<void*>(0xB71589DA, p0, p1); }
void PLAYER::_0x9F80F6DF(int p0, int p1) { invoke<void*>(0x9F80F6DF, p0, p1); }
void PLAYER::SPECIAL_ABILITY_LOCK(int p0) { invoke<void*>(0x1B7BB388, p0); }
void PLAYER::SPECIAL_ABILITY_UNLOCK(int p0) { invoke<void*>(0x1FDB2919, p0); }
int PLAYER::IS_SPECIAL_ABILITY_UNLOCKED(int p0) { return invoke<int>(0xC9C75E82, p0); }
int PLAYER::IS_SPECIAL_ABILITY_ACTIVE(int p0) { return invoke<int>(0x1B17E334, p0); }
int PLAYER::IS_SPECIAL_ABILITY_METER_FULL(int p0) { return invoke<int>(0x2E19D7F6, p0); }
void PLAYER::ENABLE_SPECIAL_ABILITY(int p0, int p1) { invoke<void*>(0xC86C1B4E, p0, p1); }
int PLAYER::IS_SPECIAL_ABILITY_ENABLED(int p0) { return invoke<int>(0xC01238CC, p0); }
void PLAYER::SET_SPECIAL_ABILITY_MULTIPLIER(int p0) { invoke<void*>(0xFF1BC556, p0); }
void PLAYER::_0x5D0FE25B(int p0) { invoke<void*>(0x5D0FE25B, p0); }
int PLAYER::_0x46E7E31D(int p0) { return invoke<int>(0x46E7E31D, p0); }
int PLAYER::_0x1E359CC8(int p0, int p1) { return invoke<int>(0x1E359CC8, p0, p1); }
int PLAYER::_0x8CB53C9F(int p0, int p1) { return invoke<int>(0x8CB53C9F, p0, p1); }
void PLAYER::START_PLAYER_TELEPORT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xC552E06C, p0, p1, p2, p3, p4, p5, p6, p7); }
void PLAYER::STOP_PLAYER_TELEPORT() { invoke<void*>(0x86AB8DBB); }
int PLAYER::IS_PLAYER_TELEPORT_ACTIVE() { return invoke<int>(0x3A11D118); }
float PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(int* p0) { return invoke<float>(0xC3B02362, p0); }
void PLAYER::_0x45514731(int p0, int p1) { invoke<void*>(0x45514731, p0, p1); }
void PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(int player, float DamageAmount) { invoke<void*>(0xB02C2F39, player, DamageAmount); }
void PLAYER::_0xAE446344(int player, float multiplier) { invoke<void*>(0xAE446344, player, multiplier); }
void PLAYER::_0x362E69AD(int p0, int p1) { invoke<void*>(0x362E69AD, p0, p1); }
void PLAYER::_0x9F3D577F(int p0, int p1) { invoke<void*>(0x9F3D577F, p0, p1); }
void PLAYER::SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(int player, float DamageAmount) { invoke<void*>(0x823ECA63, player, DamageAmount); }
void PLAYER::_0xA16626C7(int p0, int p1) { invoke<void*>(0xA16626C7, p0, p1); }
void PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(int p0, int p1) { invoke<void*>(0x8EA12EDB, p0, p1); }
void PLAYER::GET_PLAYER_PARACHUTE_TINT_INDEX(int p0, int p1) { invoke<void*>(0x432B0509, p0, p1); }
void PLAYER::_0x70689638(int p0, int p1) { invoke<void*>(0x70689638, p0, p1); }
void PLAYER::_0x77B8EF01(int p0, int p1) { invoke<void*>(0x77B8EF01, p0, p1); }
void PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(int p0, int p1) { invoke<void*>(0xD79D5D1B, p0, p1); }
void PLAYER::_0x4E418E13(int p0, int p1) { invoke<void*>(0x4E418E13, p0, p1); }
void PLAYER::_0xA3E4798E(int p0) { invoke<void*>(0xA3E4798E, p0); }
int PLAYER::_0x30DA1DA1(int p0) { return invoke<int>(0x30DA1DA1, p0); }
void PLAYER::_0x832DEB7A(int p0, int p1) { invoke<void*>(0x832DEB7A, p0, p1); }
void PLAYER::_0x14FE9264(int p0, int p1, int p2, int p3) { invoke<void*>(0x14FE9264, p0, p1, p2, p3); }
void PLAYER::_0xF66E5CDD(int p0, int p1, int p2, int p3) { invoke<void*>(0xF66E5CDD, p0, p1, p2, p3); }
void PLAYER::_0x725C6174(int p0, int p1) { invoke<void*>(0x725C6174, p0, p1); }
void PLAYER::_0xF8A62EFC(int p0, int p1) { invoke<void*>(0xF8A62EFC, p0, p1); }
void PLAYER::SET_PLAYER_NOISE_MULTIPLIER(int player, float Multipliyer) { invoke<void*>(0x15786DD1, player, Multipliyer); }
void PLAYER::_0x8D2D89C4(int p0, int p1) { invoke<void*>(0x8D2D89C4, p0, p1); }
int PLAYER::_0x1C70B2EB(int p0, int p1) { return invoke<int>(0x1C70B2EB, p0, p1); }
void PLAYER::SIMULATE_PLAYER_INPUT_GAIT(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x0D77CC34, p0, p1, p2, p3, p4, p5); }
void PLAYER::RESET_PLAYER_INPUT_GAIT(int p0) { invoke<void*>(0x4A701EE1, p0); }
void PLAYER::_0xA97C2059(int p0, int p1) { invoke<void*>(0xA97C2059, p0, p1); }
void PLAYER::_0xA25D767E(int p0, int p1) { invoke<void*>(0xA25D767E, p0, p1); }
void PLAYER::_0x3D26105F(int p0, int p1) { invoke<void*>(0x3D26105F, p0, p1); }
int PLAYER::_0x1D371529(int p0) { return invoke<int>(0x1D371529, p0); }
void PLAYER::_0xE30A64DC(int p0) { invoke<void*>(0xE30A64DC, p0); }
void PLAYER::SET_PLAYER_SIMULATE_AIMING(int p0, int p1) { invoke<void*>(0xF1E0CAFC, p0, p1); }
void PLAYER::_0xF7A0F00F(int p0, int p1) { invoke<void*>(0xF7A0F00F, p0, p1); }
void PLAYER::_0xB8209F16(int p0) { invoke<void*>(0xB8209F16, p0); }
void PLAYER::_0x8D9FD4D1(int p0) { invoke<void*>(0x8D9FD4D1, p0); }
void PLAYER::_0xECD12E60(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xECD12E60, p0, p1, p2, p3, p4, p5, p6, p7); }
void PLAYER::_0x96100EA4() { invoke<void*>(0x96100EA4); }
int PLAYER::_0x4A01B76A(int p0) { return invoke<int>(0x4A01B76A, p0); }
int PLAYER::_0x013B4F72(int p0) { return invoke<int>(0x013B4F72, p0); }
int PLAYER::_0x9DF75B2A(int p0, int p1, int p2) { return invoke<int>(0x9DF75B2A, p0, p1, p2); }
void PLAYER::_0x64DDB07D(int p0, int p1, int p2) { invoke<void*>(0x64DDB07D, p0, p1, p2); }
void PLAYER::_0xA97C2F6C() { invoke<void*>(0xA97C2F6C); }
int PLAYER::IS_PLAYER_RIDING_TRAIN(int player) { return invoke<int>(0x9765E71D, player); }
int PLAYER::_0xFEA40B6C(int p0) { return invoke<int>(0xFEA40B6C, p0); }
void PLAYER::_0xAD8383FA(int p0, int p1) { invoke<void*>(0xAD8383FA, p0, p1); }
void PLAYER::_0x9254249D(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x9254249D, p0, p1, p2, p3, p4); }
void PLAYER::_0xFD60F5AB(int p0) { invoke<void*>(0xFD60F5AB, p0); }
void PLAYER::_0x5D382498(int p0, int p1) { invoke<void*>(0x5D382498, p0, p1); }
void PLAYER::_0x6FF034BB(int p0) { invoke<void*>(0x6FF034BB, p0); }
void PLAYER::_0xA877FF5E(int p0, int p1) { invoke<void*>(0xA877FF5E, p0, p1); }
void PLAYER::_0xBB62AAC5(int p0) { invoke<void*>(0xBB62AAC5, p0); }
void PLAYER::_0x8C6E611D(int p0) { invoke<void*>(0x8C6E611D, p0); }
void PLAYER::_0x2849D4B2(int p0) { invoke<void*>(0x2849D4B2, p0); }

int ENTITY::DOES_ENTITY_EXIST(int entity) { return invoke<int>(0x3AC90869, entity); }
int ENTITY::_0xACFEB3F9(int p0, int p1) { return invoke<int>(0xACFEB3F9, p0, p1); }
int ENTITY::DOES_ENTITY_HAVE_DRAWABLE(int entity) { return invoke<int>(0xA5B33300, entity); }
int ENTITY::DOES_ENTITY_HAVE_PHYSICS(int entity) { return invoke<int>(0x9BCD2979, entity); }
int ENTITY::HAS_ENTITY_ANIM_FINISHED(int p0, int p1, int p2, int p3) { return invoke<int>(0x1D9CAB92, p0, p1, p2, p3); }
int ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(int entity) { return invoke<int>(0x6B74582E, entity); }
int ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(int entity) { return invoke<int>(0x53FD4A25, entity); }
int ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(int entity) { return invoke<int>(0x878C2CE0, entity); }
int ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(int p0, int p1, int p2) { return invoke<int>(0x07FC77E0, p0, p1, p2); }
int ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(int p0, int p1, int p2) { return invoke<int>(0x53576FA7, p0, p1, p2); }
int ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(int p0, int p1) { return invoke<int>(0x210D87C8, p0, p1); }
int ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(int entity) { return invoke<int>(0x662A2F41, entity); }
int ENTITY::_0xC0E3AA47(int p0) { return invoke<int>(0xC0E3AA47, p0); }
Vector3 ENTITY::_0xAB415C07(int p0) { return invoke<Vector3>(0xAB415C07, p0); }
void ENTITY::_0x58D9775F(int p0) { invoke<void*>(0x58D9775F, p0); }
int ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(int p0, int p1, int p2) { return invoke<int>(0x83943F41, p0, p1, p2); }
int ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(int p0, int p1, int p2) { return invoke<int>(0x433A9D18, p0, p1, p2); }
int ENTITY::GET_ENTITY_ATTACHED_TO(int entity) { return invoke<int>(0xFE1589F9, entity); }
Vector3 ENTITY::GET_ENTITY_COORDS(int entity) { return invoke<Vector3>(0x1647F1CB, entity); }
Vector3 ENTITY::GET_ENTITY_FORWARD_VECTOR(int entity) { return invoke<Vector3>(0x84DCECBF, entity); }
int ENTITY::GET_ENTITY_FORWARD_X(int entity) { return invoke<int>(0x49FAE914, entity); }
int ENTITY::GET_ENTITY_FORWARD_Y(int entity) { return invoke<int>(0x9E2F917C, entity); }
float ENTITY::GET_ENTITY_HEADING(int entity) { return invoke<float>(0x972CC383, entity); }
int ENTITY::GET_ENTITY_HEALTH(int entity) { return invoke<int>(0x8E3222B7, entity); }
int ENTITY::GET_ENTITY_MAX_HEALTH(int entity) { return invoke<int>(0xC7AE6AA1, entity); }
void ENTITY::SET_ENTITY_MAX_HEALTH(int entity, int Toggle) { invoke<void*>(0x96F84DF8, entity, Toggle); }
int ENTITY::GET_ENTITY_HEIGHT(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xEE443481, p0, p1, p2, p3, p4, p5); }
int ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(int entity) { return invoke<int>(0x57F56A4D, entity); }
void ENTITY::GET_ENTITY_MATRIX(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xEB9EB001, p0, p1, p2, p3, p4); }
int ENTITY::GET_ENTITY_MODEL(int entity) { return invoke<int>(0xDAFCB3EC, entity); }
Vector3 ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(int p0, int p1, int p2, int p3) { return invoke<Vector3>(0x6477EC9E, p0, p1, p2, p3); }
Vector3 ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(int entity, int xCoord, int yCoord, int zCoord) { return invoke<Vector3>(0xABCF043A, entity, xCoord, yCoord, zCoord); }
int ENTITY::GET_ENTITY_PITCH(int entity) { return invoke<int>(0xFCE6ECE5, entity); }
void ENTITY::GET_ENTITY_QUATERNION(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x5154EC90, p0, p1, p2, p3, p4); }
int ENTITY::GET_ENTITY_ROLL(int entity) { return invoke<int>(0x36610842, entity); }
Vector3 ENTITY::GET_ENTITY_ROTATION(int p0, int p1) { return invoke<Vector3>(0x8FF45B04, p0, p1); }
Vector3 ENTITY::GET_ENTITY_ROTATION_VELOCITY(int p0) { return invoke<Vector3>(0x9BF8A73F, p0); }
int ENTITY::GET_ENTITY_SCRIPT(int p0, int p1) { return invoke<int>(0xB7F70784, p0, p1); }
float ENTITY::GET_ENTITY_SPEED(int entity) { return invoke<float>(0x9E1E4798, entity); }
Vector3 ENTITY::GET_ENTITY_SPEED_VECTOR(int p0, int p1) { return invoke<Vector3>(0x3ED2B997, p0, p1); }
int ENTITY::GET_ENTITY_UPRIGHT_VALUE(int p0) { return invoke<int>(0xF4268190, p0); }
Vector3 ENTITY::GET_ENTITY_VELOCITY(int entity) { return invoke<Vector3>(0xC14C9B6B, entity); }
int ENTITY::_0xBC5A9C58(int p0) { return invoke<int>(0xBC5A9C58, p0); }
int ENTITY::_0xC46F74AC(int p0) { return invoke<int>(0xC46F74AC, p0); }
int ENTITY::_0xC69CF43D(int p0) { return invoke<int>(0xC69CF43D, p0); }
Vector3 ENTITY::_0x7C6339DF(int p0, int p1) { return invoke<Vector3>(0x7C6339DF, p0, p1); }
int ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(int entity) { return invoke<int>(0xCE17FDEC, entity); }
int ENTITY::_0xB1808F56(int p0, int p1) { return invoke<int>(0xB1808F56, p0, p1); }
int ENTITY::GET_ENTITY_TYPE(int entity) { return invoke<int>(0x0B1BD08D, entity); }
int ENTITY::IS_AN_ENTITY(int entity) { return invoke<int>(0xD4B9715A, entity); }
int ENTITY::IS_ENTITY_A_PED(int entity) { return invoke<int>(0x55D33EAB, entity); }
int ENTITY::IS_ENTITY_A_MISSION_ENTITY(int entity) { return invoke<int>(0x2632E124, entity); }
int ENTITY::IS_ENTITY_A_VEHICLE(int entity) { return invoke<int>(0xBE800B01, entity); }
int ENTITY::IS_ENTITY_AN_OBJECT(int p0) { return invoke<int>(0x3F52E561, p0); }
int ENTITY::IS_ENTITY_AT_COORD(int entity, float x, float y, float z, float xSize, float ySize, float zSize, int p7, int p8, int p9) { return invoke<int>(0xD749B606, entity, x, y, z, xSize, ySize, zSize, p7, p8, p9); }
int ENTITY::IS_ENTITY_AT_ENTITY(int entity1, int entity2, float xSize, float ySize, float zSize, int p5, int p6, int p7) { return invoke<int>(0xDABDCB52, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); }
int ENTITY::IS_ENTITY_ATTACHED(int p0) { return invoke<int>(0xEC1479D5, p0); }
int ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(int p0) { return invoke<int>(0x0B5DE340, p0); }
int ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(int p0) { return invoke<int>(0x9D7A609C, p0); }
int ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(int p0) { return invoke<int>(0xDE5C995E, p0); }
int ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(int p0, int p1) { return invoke<int>(0xB0ABFEA8, p0, p1); }
int ENTITY::IS_ENTITY_DEAD(int entity) { return invoke<int>(0xB6F7CBAC, entity); }
int ENTITY::IS_ENTITY_IN_AIR(int entity) { return invoke<int>(0xA4157987, entity); }
int ENTITY::IS_ENTITY_IN_ANGLED_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { return invoke<int>(0x883622FA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
int ENTITY::IS_ENTITY_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<int>(0x8C2DFA9D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
int ENTITY::IS_ENTITY_IN_ZONE(int p0, int p1) { return invoke<int>(0x45C82B21, p0, p1); }
int ENTITY::IS_ENTITY_IN_WATER(int entity) { return invoke<int>(0x4C3C2508, entity); }
int ENTITY::_0x0170F68C(int p0) { return invoke<int>(0x0170F68C, p0); }
void ENTITY::_0x40C84A74(int p0, int p1) { invoke<void*>(0x40C84A74, p0, p1); }
int ENTITY::IS_ENTITY_ON_SCREEN(int p0) { return invoke<int>(0xC1FEC5ED, p0); }
int ENTITY::IS_ENTITY_PLAYING_ANIM(int p0, int p1, int p2, int p3) { return invoke<int>(0x0D130D34, p0, p1, p2, p3); }
int ENTITY::IS_ENTITY_STATIC(int p0) { return invoke<int>(0x928E12E9, p0); }
int ENTITY::IS_ENTITY_TOUCHING_ENTITY(int p0, int p1) { return invoke<int>(0x6B931477, p0, p1); }
int ENTITY::_0x307E7611(int p0, int p1) { return invoke<int>(0x307E7611, p0, p1); }
int ENTITY::IS_ENTITY_UPRIGHT(int p0, int p1) { return invoke<int>(0x3BCDF4E1, p0, p1); }
int ENTITY::IS_ENTITY_UPSIDEDOWN(int p0) { return invoke<int>(0x5ACAA48F, p0); }
int ENTITY::IS_ENTITY_VISIBLE(int entity) { return invoke<int>(0x120B4ED5, entity); }
int ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(int p0) { return invoke<int>(0x5D240E9D, p0); }
int ENTITY::IS_ENTITY_OCCLUDED(int p0) { return invoke<int>(0x46BC5B40, p0); }
int ENTITY::_0xEA127CBC(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xEA127CBC, p0, p1, p2, p3, p4); }
int ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(int p0) { return invoke<int>(0x00AB7A4A, p0); }
void ENTITY::_0x28924E98(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x28924E98, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void ENTITY::APPLY_FORCE_TO_ENTITY(int entity, int p1, float Force_X, float Force_Y, float Force_Z, float Rot_X, float Rot_Y, float Rot_Z, int p8, int p9, int p10, int p11, int p12, int p13) { invoke<void*>(0xC1C0855A, entity, p1, Force_X, Force_Y, Force_Z, Rot_X, Rot_Y, Rot_Z, p8, p9, p10, p11, p12, p13); }
void ENTITY::ATTACH_ENTITY_TO_ENTITY(int entity1, int entity2, int boneIndex, float x, float y, float z, float rot_x, float rot_y, float rot_z, int p9, int p10, int p11, int p12, int p13, int p14) { invoke<void*>(0xEC024237, entity1, entity2, boneIndex, x, y, z, rot_x, rot_y, rot_z, p9, p10, p11, p12, p13, p14); }
void ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(int entity1, int entity2, float unknown1, float unknown2, float x1, float y1, float z1, float x2, float y2, float z2, float rot_x, float rot_y, float rot_z, int unknown3, int unknown4, int unknown5, int unknown6, int unknown7, int unknown8) { invoke<void*>(0x0547417F, entity1, entity2, unknown1, unknown2, x1, y1, z1, x2, y2, z2, rot_x, rot_y, rot_z, unknown3, unknown4, unknown5, unknown6, unknown7, unknown8); }
void ENTITY::_0x6909BA59(int p0) { invoke<void*>(0x6909BA59, p0); }
int ENTITY::_0xE4ECAC22(int p0, int p1) { return invoke<int>(0xE4ECAC22, p0, p1); }
void ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(int entity) { invoke<void*>(0x2B83F43B, entity); }
void ENTITY::DELETE_ENTITY(int*  entityHandle) { invoke<void*>(0xFAA3D236, entityHandle); }
void ENTITY::DETACH_ENTITY(int p0, int p1, int p2) { invoke<void*>(0xC8EFCB41, p0, p1, p2); }
void ENTITY::FREEZE_ENTITY_POSITION(int entity, int Toggle) { invoke<void*>(0x65C16D57, entity, Toggle); }
void ENTITY::_0xD3850671(int p0, int p1) { invoke<void*>(0xD3850671, p0, p1); }
int ENTITY::PLAY_ENTITY_ANIM(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x878753D5, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x012760AA, p0, p1, p2, p3, p4, p5, p6, p7); }
int ENTITY::_0xEB4CBA74(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { return invoke<int>(0xEB4CBA74, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
int ENTITY::_0x7253D5B2(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x7253D5B2, p0, p1, p2, p3, p4, p5); }
int ENTITY::STOP_ENTITY_ANIM(int p0, int p1, int p2, int p3) { return invoke<int>(0xC4769830, p0, p1, p2, p3); }
int ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(int p0, int p1, int p2) { return invoke<int>(0xE27D2FC1, p0, p1, p2); }
int ENTITY::_0x66571CA0(int p0, int p1) { return invoke<int>(0x66571CA0, p0, p1); }
int ENTITY::_0xC41DDA62(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xC41DDA62, p0, p1, p2, p3, p4); }
void ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(int p0, int p1, int p2, int p3) { invoke<void*>(0x99D90735, p0, p1, p2, p3); }
void ENTITY::SET_ENTITY_ANIM_SPEED(int p0, int p1, int p2, int p3) { invoke<void*>(0x3990C90A, p0, p1, p2, p3); }
void ENTITY::SET_ENTITY_AS_MISSION_ENTITY(int entityHandle, int value, int p2) { invoke<void*>(0x5D1F9E0F, entityHandle, value, p2); }
void ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(int*  entityHandle) { invoke<void*>(0xADF2267C, entityHandle); }
void ENTITY::SET_PED_AS_NO_LONGER_NEEDED(int* pedHandle) { invoke<void*>(0x9A388380, pedHandle); }
void ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(int* vehicleHandle) { invoke<void*>(0x9B0E10BE, vehicleHandle); }
void ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(int* objectHandle) { invoke<void*>(0x3F6B949F, objectHandle); }
void ENTITY::SET_ENTITY_CAN_BE_DAMAGED(int entity, int Toggle) { invoke<void*>(0x60B6E744, entity, Toggle); }
void ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(int p0, int p1, int p2) { invoke<void*>(0x34165B5D, p0, p1, p2); }
void ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(int p0, int p1) { invoke<void*>(0x3B13797C, p0, p1); }
void ENTITY::SET_ENTITY_COLLISION(int entity, int p1, int p2) { invoke<void*>(0x139FD37D, entity, p1, p2); }
void ENTITY::SET_ENTITY_COORDS(int entity, Vector3 coord) { invoke<void*>(0xDF70B41B, entity, coord); }
void ENTITY::SET_ENTITY_COORDS_NO_OFFSET(int entity, float xCoord, float yCoord, float zCoord, int p4, int p5, int p6) { invoke<void*>(0x4C83DE8D, entity, xCoord, yCoord, zCoord, p4, p5, p6); }
void ENTITY::SET_ENTITY_DYNAMIC(int entity, int ToggleDynamics) { invoke<void*>(0x236F525B, entity, ToggleDynamics); }
void ENTITY::SET_ENTITY_HEADING(int entity, float Heading) { invoke<void*>(0xE0FF064D, entity, Heading); }
void ENTITY::SET_ENTITY_HEALTH(int entity, int Amount) { invoke<void*>(0xFBCD1831, entity, Amount); }
void ENTITY::SET_ENTITY_INVINCIBLE(int entity, int Toggle) { invoke<void*>(0xC1213A21, entity, Toggle); }
void ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(int p0, int p1, int p2) { invoke<void*>(0x9729EE32, p0, p1, p2); }
void ENTITY::SET_ENTITY_LIGHTS(int p0, int p1) { invoke<void*>(0xE8FC85AF, p0, p1); }
void ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(int entity, int Toggle) { invoke<void*>(0xC52F295B, entity, Toggle); }
int ENTITY::_0x851687F9(int p0) { return invoke<int>(0x851687F9, p0); }
void ENTITY::SET_ENTITY_MAX_SPEED(int p0, int p1) { invoke<void*>(0x46AFFED3, p0, p1); }
void ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(int p0, int p1) { invoke<void*>(0x4B707F50, p0, p1); }
void ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(int p0, int p1, int p2) { invoke<void*>(0x202237E2, p0, p1, p2); }
void ENTITY::SET_ENTITY_PROOFS(int entity, int bulletProof, int fireProof, int explosionProof, int collisionProof, int meleeProof, int p6, int p7, int p8) { invoke<void*>(0x7E9EAB66, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, p6, p7, p8); }
void ENTITY::SET_ENTITY_QUATERNION(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x83B6046F, p0, p1, p2, p3, p4); }
void ENTITY::SET_ENTITY_RECORDS_COLLISIONS(int p0, int p1) { invoke<void*>(0x6B189A1A, p0, p1); }
void ENTITY::SET_ENTITY_ROTATION(int entity, float Pitch, float Roll, float Yaw, int p4, int p5) { invoke<void*>(0x0A345EFE, entity, Pitch, Roll, Yaw, p4, p5); }
void ENTITY::SET_ENTITY_VISIBLE(int entity, int Toggle) { invoke<void*>(0xD043E8E1, entity, Toggle); }
void ENTITY::SET_ENTITY_VELOCITY(int entity, float xVel, float yVel, float zVel) { invoke<void*>(0xFF5A1988, entity, xVel, yVel, zVel); }
void ENTITY::SET_ENTITY_HAS_GRAVITY(int p0, int p1) { invoke<void*>(0xE2F262BF, p0, p1); }
void ENTITY::SET_ENTITY_LOD_DIST(int entity, int Distance) { invoke<void*>(0xD7ACC7AD, entity, Distance); }
int ENTITY::_0x4DA3D51F(int p0) { return invoke<int>(0x4DA3D51F, p0); }
void ENTITY::SET_ENTITY_ALPHA(int entity, int AlphaLVL, int p2) { invoke<void*>(0xAE667CB0, entity, AlphaLVL, p2); }
int ENTITY::GET_ENTITY_ALPHA(int entity) { return invoke<int>(0x1560B017, entity); }
void ENTITY::RESET_ENTITY_ALPHA(int entity) { invoke<void*>(0x8A30761C, entity); }
void ENTITY::_0xD8FF798A(int p0, int p1) { invoke<void*>(0xD8FF798A, p0, p1); }
void ENTITY::SET_ENTITY_RENDER_SCORCHED(int p0, int p1) { invoke<void*>(0xAAC9317B, p0, p1); }
void ENTITY::_0xC47F5B91(int p0, int p1) { invoke<void*>(0xC47F5B91, p0, p1); }
void ENTITY::CREATE_MODEL_SWAP(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x0BC12F9E, p0, p1, p2, p3, p4, p5, p6); }
void ENTITY::REMOVE_MODEL_SWAP(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0xCE0AA8BC, p0, p1, p2, p3, p4, p5, p6); }
void ENTITY::CREATE_MODEL_HIDE(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x7BD5CF2F, p0, p1, p2, p3, p4, p5); }
void ENTITY::_0x07AAF22C(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x07AAF22C, p0, p1, p2, p3, p4, p5); }
void ENTITY::REMOVE_MODEL_HIDE(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x993DBC10, p0, p1, p2, p3, p4, p5); }
void ENTITY::CREATE_FORCED_OBJECT(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x335190A2, p0, p1, p2, p3, p4, p5); }
void ENTITY::REMOVE_FORCED_OBJECT(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xAED73ADD, p0, p1, p2, p3, p4); }
void ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(int ent1, int ent2, int toogle) { invoke<void*>(0x1E11BFE9, ent1, ent2, toogle); }
void ENTITY::SET_ENTITY_MOTION_BLUR(int p0, int p1) { invoke<void*>(0xE90005B8, p0, p1); }
void ENTITY::_0x44767B31(int p0, int p1) { invoke<void*>(0x44767B31, p0, p1); }
void ENTITY::_0xE224A6A5(int p0, int p1) { invoke<void*>(0xE224A6A5, p0, p1); }

int PED::CREATE_PED(int type, int pedHash, float x, float y, float z, float heading, int networkHandle, int returnPEDHandle) { return invoke<int>(0x0389EF71, type, pedHash, x, y, z, heading, networkHandle, returnPEDHandle); }
void PED::DELETE_PED(int* ped) { invoke<void*>(0x13EFB9A0, ped); }
int PED::CLONE_PED(int  Priest, float Heading, int networkhandle, int createpedhandle) { return invoke<int>(0x8C8A8D6E, Priest, Heading, networkhandle, createpedhandle); }
void PED::_0xFC70EEC7(int  GamerHandle, int* pedHandle) { invoke<void*>(0xFC70EEC7, GamerHandle, pedHandle); }
int PED::IS_PED_IN_VEHICLE(int  pedHandle, int vehicleHandle, int atGetIn) { return invoke<int>(0x7DA6BC83, pedHandle, vehicleHandle, atGetIn); }
int PED::IS_PED_IN_MODEL(int  ped, int vehicleModel) { return invoke<int>(0xA6438D4B, ped, vehicleModel); }
int PED::IS_PED_IN_ANY_VEHICLE(int  pedHandle, int atGetIn) { return invoke<int>(0x3B0171EE, pedHandle, atGetIn); }
int PED::IS_COP_PED_IN_AREA_3D(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xB98DB96B, p0, p1, p2, p3, p4, p5); }
int PED::IS_PED_INJURED(int  ped) { return invoke<int>(0x2530A087, ped); }
int PED::IS_PED_HURT(int p0) { return invoke<int>(0x69DFA0AF, p0); }
int PED::IS_PED_FATALLY_INJURED(int  ped) { return invoke<int>(0xBADA0093, ped); }
int PED::_IS_PED_DEAD(int  pedHandle, int p1) { return invoke<int>(0xCBDB7739, pedHandle, p1); }
int PED::IS_CONVERSATION_PED_DEAD(int p0) { return invoke<int>(0x1FA39EFE, p0); }
int PED::IS_PED_AIMING_FROM_COVER(int* p0) { return invoke<int>(0xDEBAB2AF, p0); }
int PED::IS_PED_RELOADING(int  ped) { return invoke<int>(0x961E1745, ped); }
int PED::IS_PED_A_PLAYER(int  ped) { return invoke<int>(0x404794CA, ped); }
int PED::CREATE_PED_INSIDE_VEHICLE(int vehicle, int pedType, int modelHash, int seat, int p4, int p5) { return invoke<int>(0x3000F092, vehicle, pedType, modelHash, seat, p4, p5); }
void PED::SET_PED_DESIRED_HEADING(int p0, int p1) { invoke<void*>(0x961458F9, p0, p1); }
void PED::_0x290421BE(int p0) { invoke<void*>(0x290421BE, p0); }
int PED::IS_PED_FACING_PED(int p0, int p1, int p2) { return invoke<int>(0x0B775838, p0, p1, p2); }
int PED::IS_PED_IN_MELEE_COMBAT(int  ped) { return invoke<int>(0xFD7814A5, ped); }
int PED::IS_PED_STOPPED(int  ped) { return invoke<int>(0xA0DC0B87, ped); }
int PED::IS_PED_SHOOTING_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x741BF04F, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int PED::IS_ANY_PED_SHOOTING_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x91833867, p0, p1, p2, p3, p4, p5, p6, p7); }
int PED::IS_PED_SHOOTING(int  ped) { return invoke<int>(0xE7C3405E, ped); }
void PED::SET_PED_ACCURACY(int  ped, int accuracy) { invoke<void*>(0x6C17122E, ped, accuracy); }
int PED::GET_PED_ACCURACY(int p0) { return invoke<int>(0x0A2A0AA0, p0); }
int PED::IS_PED_MODEL(int  pedHandle, int modelHash) { return invoke<int>(0x5F1DDFCB, pedHandle, modelHash); }
void PED::EXPLODE_PED_HEAD(int  ped, int WeaponHash) { invoke<void*>(0x05CC1380, ped, WeaponHash); }
void PED::REMOVE_PED_ELEGANTLY(int Handle) { invoke<void*>(0x4FFB8C6C, Handle); }
void PED::ADD_ARMOUR_TO_PED(int Handle, int Amount) { invoke<void*>(0xF686B26E, Handle, Amount); }
void PED::SET_PED_ARMOUR(int p0, int p1) { invoke<void*>(0x4E3A0CC4, p0, p1); }
void PED::SET_PED_INTO_VEHICLE(int Handle, int VehicleHandle, int SeatIndex) { invoke<void*>(0x07500C79, Handle, VehicleHandle, SeatIndex); }
void PED::_0x58A80BD5(int p0, int p1) { invoke<void*>(0x58A80BD5, p0, p1); }
int PED::CAN_CREATE_RANDOM_PED(int p0) { return invoke<int>(0xF9ABE88F, p0); }
int PED::CREATE_RANDOM_PED(float X, float Y, float Z) { return invoke<int>(0x5A949543, X, Y, Z); }
int PED::CREATE_RANDOM_PED_AS_DRIVER(int vehicleHandle, int p1) { return invoke<int>(0xB927CE9A, vehicleHandle, p1); }
int PED::CAN_CREATE_RANDOM_DRIVER() { return invoke<int>(0x99861609); }
int PED::_0x7018BE31() { return invoke<int>(0x7018BE31); }
void PED::SET_PED_MOVE_ANIMS_BLEND_OUT(int p0) { invoke<void*>(0x20E01957, p0); }
void PED::SET_PED_CAN_BE_DRAGGED_OUT(int p0, int p1) { invoke<void*>(0xAA7F1131, p0, p1); }
void PED::_0x6CD58238(int p0) { invoke<void*>(0x6CD58238, p0); }
int PED::IS_PED_MALE(int p0) { return invoke<int>(0x90950455, p0); }
int PED::IS_PED_HUMAN(int p0) { return invoke<int>(0x194BB7B0, p0); }
int PED::GET_VEHICLE_PED_IS_IN(int  pedHandle, int getLastVehicle) { return invoke<int>(0xAFE92319, pedHandle, getLastVehicle); }
void PED::RESET_PED_LAST_VEHICLE(int p0) { invoke<void*>(0x5E3B5942, p0); }
void PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(int p0) { invoke<void*>(0x039C82BB, p0); }
void PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(int p0, int p1) { invoke<void*>(0x2909ABF0, p0, p1); }
void PED::_0xB48C0C04() { invoke<void*>(0xB48C0C04); }
void PED::_0x25EA2AA5(int p0, int p1, int p2) { invoke<void*>(0x25EA2AA5, p0, p1, p2); }
void PED::SET_PED_NON_CREATION_AREA(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x7A97283F, p0, p1, p2, p3, p4, p5); }
void PED::CLEAR_PED_NON_CREATION_AREA() { invoke<void*>(0x6F7043A3); }
void PED::_0x8C555ADD() { invoke<void*>(0x8C555ADD); }
int PED::IS_PED_ON_MOUNT(int p0) { return invoke<int>(0x43103006, p0); }
int PED::GET_MOUNT(int p0) { return invoke<int>(0xDD31EC4E, p0); }
int PED::IS_PED_ON_VEHICLE(int p0) { return invoke<int>(0xA1AE7CC7, p0); }
int PED::IS_PED_ON_SPECIFIC_VEHICLE(int  ped, int specificVehicle) { return invoke<int>(0x63CB4603, ped, specificVehicle); }
void PED::SET_PED_MONEY(int  pedHandle, int amount) { invoke<void*>(0x40D90BF2, pedHandle, amount); }
int PED::GET_PED_MONEY(int  pedHandle) { return invoke<int>(0xEB3C4C7E, pedHandle); }
void PED::_0xD41C9AED(int p0, int p1) { invoke<void*>(0xD41C9AED, p0, p1); }
void PED::_0x30B98369(int p0) { invoke<void*>(0x30B98369, p0); }
void PED::_0x02A080C8(int p0) { invoke<void*>(0x02A080C8, p0); }
void PED::SET_PED_SUFFERS_CRITICAL_HITS(int p0, int p1) { invoke<void*>(0x6F6FC7E6, p0, p1); }
void PED::_0x1572022A(int p0, int p1) { invoke<void*>(0x1572022A, p0, p1); }
int PED::IS_PED_SITTING_IN_VEHICLE(int p0, int p1) { return invoke<int>(0xDDDE26FA, p0, p1); }
int PED::IS_PED_SITTING_IN_ANY_VEHICLE(int p0) { return invoke<int>(0x0EA9CA03, p0); }
int PED::IS_PED_ON_FOOT(int  p0) { return invoke<int>(0xC60D0785, p0); }
int PED::IS_PED_ON_ANY_BIKE(int p0) { return invoke<int>(0x4D885B2E, p0); }
int PED::IS_PED_PLANTING_BOMB(int p0) { return invoke<int>(0x0EDAC574, p0); }
Vector3 PED::GET_DEAD_PED_PICKUP_COORDS(int p0, int p1, int p2) { return invoke<Vector3>(0x129F9DC1, p0, p1, p2); }
int PED::IS_PED_IN_ANY_BOAT(int p0) { return invoke<int>(0x1118A947, p0); }
int PED::IS_PED_IN_ANY_SUB(int p0) { return invoke<int>(0xE65F8059, p0); }
int PED::IS_PED_IN_ANY_HELI(int p0) { return invoke<int>(0x7AB5523B, p0); }
int PED::IS_PED_IN_ANY_PLANE(int p0) { return invoke<int>(0x51BBCE7E, p0); }
int PED::IS_PED_IN_FLYING_VEHICLE(int p0) { return invoke<int>(0xCA072485, p0); }
void PED::SET_PED_DIES_IN_WATER(int p0, int p1) { invoke<void*>(0x604C872B, p0, p1); }
void PED::SET_PED_DIES_IN_SINKING_VEHICLE(int p0, int p1) { invoke<void*>(0x8D4D9ABB, p0, p1); }
int PED::GET_PED_ARMOUR(int p0) { return invoke<int>(0x2CE311A7, p0); }
void PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(int p0, int p1) { invoke<void*>(0xB014A09C, p0, p1); }
void PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(int p0, int p1) { invoke<void*>(0x5DB7B3A9, p0, p1); }
int PED::GET_PED_LAST_DAMAGE_BONE(int p0, int p1) { return invoke<int>(0xAB933841, p0, p1); }
void PED::CLEAR_PED_LAST_DAMAGE_BONE(int p0) { invoke<void*>(0x56CB715E, p0); }
void PED::SET_AI_WEAPON_DAMAGE_MODIFIER(int p0) { invoke<void*>(0x516E30EE, p0); }
void PED::RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<void*>(0x6E965420); }
void PED::_0x0F9A401F(int p0) { invoke<void*>(0x0F9A401F, p0); }
void PED::_0x97886238() { invoke<void*>(0x97886238); }
void PED::_0xCC9D7F1A(int p0, int p1) { invoke<void*>(0xCC9D7F1A, p0, p1); }
void PED::SET_PED_CAN_BE_TARGETTED(int p0, int p1) { invoke<void*>(0x75C49F74, p0, p1); }
void PED::SET_PED_CAN_BE_TARGETTED_BY_TEAM(int p0, int p1, int p2) { invoke<void*>(0xB103A8E1, p0, p1, p2); }
void PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(int p0, int p1, int p2) { invoke<void*>(0xD050F490, p0, p1, p2); }
void PED::_0x7DA12905(int p0, int p1) { invoke<void*>(0x7DA12905, p0, p1); }
void PED::SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(int p0, int p1) { invoke<void*>(0x7F67671D, p0, p1); }
int PED::IS_PED_IN_ANY_POLICE_VEHICLE(int p0) { return invoke<int>(0x84FA790D, p0); }
void PED::_0xA819680B(int p0) { invoke<void*>(0xA819680B, p0); }
int PED::_0xCD71F11B(int  ped) { return invoke<int>(0xCD71F11B, ped); }
int PED::IS_PED_FALLING(int Handle) { return invoke<int>(0xABF77334, Handle); }
int PED::IS_PED_JUMPING(int p0) { return invoke<int>(0x07E5BC0E, p0); }
int PED::IS_PED_CLIMBING(int p0) { return invoke<int>(0xBCE03D35, p0); }
int PED::_0xC3169BDA(int p0) { return invoke<int>(0xC3169BDA, p0); }
int PED::IS_PED_DIVING(int p0) { return invoke<int>(0x7BC5BF3C, p0); }
int PED::_0xB19215F6(int p0) { return invoke<int>(0xB19215F6, p0); }
int PED::GET_PED_PARACHUTE_STATE(int p0) { return invoke<int>(0x7D4BC475, p0); }
int PED::_0x01F3B035(int p0) { return invoke<int>(0x01F3B035, p0); }
void PED::SET_PED_PARACHUTE_TINT_INDEX(int p0, int p1) { invoke<void*>(0x5AEFEC3A, p0, p1); }
void PED::GET_PED_PARACHUTE_TINT_INDEX(int p0, int p1) { invoke<void*>(0xE9E7FAC5, p0, p1); }
void PED::_0x177EFC79(int p0, int p1) { invoke<void*>(0x177EFC79, p0, p1); }
void PED::SET_PED_DUCKING(int p0, int p1) { invoke<void*>(0xB90353D7, p0, p1); }
int PED::IS_PED_DUCKING(int p0) { return invoke<int>(0x9199C77D, p0); }
int PED::IS_PED_IN_ANY_TAXI(int p0) { return invoke<int>(0x16FD386C, p0); }
void PED::SET_PED_ID_RANGE(int p0, int p1) { invoke<void*>(0xEF3B4ED9, p0, p1); }
void PED::_0x9A2180FF(int p0, int p1) { invoke<void*>(0x9A2180FF, p0, p1); }
void PED::_0xF30658D2(int p0, int p1) { invoke<void*>(0xF30658D2, p0, p1); }
void PED::_0x43709044(int p0) { invoke<void*>(0x43709044, p0); }
void PED::SET_PED_SEEING_RANGE(int p0, int p1) { invoke<void*>(0x4BD72FE8, p0, p1); }
void PED::SET_PED_HEARING_RANGE(int p0, int p1) { invoke<void*>(0xB32087E0, p0, p1); }
void PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(int p0, int p1) { invoke<void*>(0x72E2E18B, p0, p1); }
void PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(int p0, int p1) { invoke<void*>(0x0CEA0F9A, p0, p1); }
void PED::SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(int p0, int p1) { invoke<void*>(0x5CC2F1B8, p0, p1); }
void PED::SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(int p0, int p1) { invoke<void*>(0x39D9102F, p0, p1); }
void PED::_0xFDF2F7C2(int p0, int p1) { invoke<void*>(0xFDF2F7C2, p0, p1); }
void PED::_0xE57202A1(int p0, int p1) { invoke<void*>(0xE57202A1, p0, p1); }
void PED::SET_PED_STEALTH_MOVEMENT(int p0, int p1, int p2) { invoke<void*>(0x67E28E1D, p0, p1, p2); }
int PED::GET_PED_STEALTH_MOVEMENT(int p0) { return invoke<int>(0x40321B83, p0); }
int PED::CREATE_GROUP(int Zombies) { return invoke<int>(0x8DC0368D, Zombies); }
void PED::SET_PED_AS_GROUP_LEADER(int Handle, int Zombies) { invoke<void*>(0x7265BEA2, Handle, Zombies); }
void PED::SET_PED_AS_GROUP_MEMBER(int Handle, int groupId) { invoke<void*>(0x0EE13F92, Handle, groupId); }
void PED::_0xD0D8BDBC(int p0, int p1, int p2) { invoke<void*>(0xD0D8BDBC, p0, p1, p2); }
void PED::REMOVE_GROUP(int Group) { invoke<void*>(0x48D72B88, Group); }
void PED::REMOVE_PED_FROM_GROUP(int Handle) { invoke<void*>(0x82697713, Handle); }
int PED::IS_PED_GROUP_MEMBER(int Handle, int Group) { return invoke<int>(0x876D5363, Handle, Group); }
int PED::_0x9678D4FF(int p0) { return invoke<int>(0x9678D4FF, p0); }
void PED::SET_GROUP_SEPARATION_RANGE(int p0, int p1) { invoke<void*>(0x7B820CD5, p0, p1); }
void PED::_0x2F0D0973(int p0, int p1) { invoke<void*>(0x2F0D0973, p0, p1); }
int PED::IS_PED_PRONE(int p0) { return invoke<int>(0x02C2A6C3, p0); }
int PED::IS_PED_IN_COMBAT(int p0, int p1) { return invoke<int>(0xFE027CB5, p0, p1); }
int PED::_0xCCD525E1(int p0, int p1) { return invoke<int>(0xCCD525E1, p0, p1); }
int PED::IS_PED_DOING_DRIVEBY(int p0) { return invoke<int>(0xAC3CEB9C, p0); }
int PED::IS_PED_JACKING(int p0) { return invoke<int>(0x3B321816, p0); }
int PED::IS_PED_BEING_JACKED(int p0) { return invoke<int>(0xD45D605C, p0); }
int PED::IS_PED_BEING_STUNNED(int p0, int p1) { return invoke<int>(0x0A66CE30, p0, p1); }
int PED::GET_PEDS_JACKER(int p0) { return invoke<int>(0xDE1DBB59, p0); }
int PED::GET_JACK_TARGET(int p0) { return invoke<int>(0x1D196361, p0); }
int PED::IS_PED_FLEEING(int p0) { return invoke<int>(0x85D813C6, p0); }
int PED::IS_PED_IN_COVER(int p0, int p1) { return invoke<int>(0x972C5A8B, p0, p1); }
int PED::IS_PED_IN_COVER_FACING_LEFT(int p0) { return invoke<int>(0xB89DBB80, p0); }
int PED::IS_PED_GOING_INTO_COVER(int p0) { return invoke<int>(0xA3589628, p0); }
int PED::SET_PED_PINNED_DOWN(int p0, int p1, int p2) { return invoke<int>(0xCC78999D, p0, p1, p2); }
int PED::_0xACF162E0(int p0) { return invoke<int>(0xACF162E0, p0); }
int PED::_0x99968B37(int p0) { return invoke<int>(0x99968B37, p0); }
int PED::_0x84ADF9EB(int p0) { return invoke<int>(0x84ADF9EB, p0); }
int PED::GET_PED_CAUSE_OF_DEATH(int p0) { return invoke<int>(0x63458C27, p0); }
int PED::GET_PED_TIME_OF_DEATH(int p0) { return invoke<int>(0xDF6D5D54, p0); }
int PED::_0xEF0B78E6(int p0) { return invoke<int>(0xEF0B78E6, p0); }
int PED::_0xFB18CB19(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xFB18CB19, p0, p1, p2, p3, p4); }
void PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(int p0, int p1) { invoke<void*>(0x423B7BA2, p0, p1); }
void PED::SET_PED_RELATIONSHIP_GROUP_HASH(int  pedHandle, int groupHandle) { invoke<void*>(0x79F8C18C, pedHandle, groupHandle); }
void PED::SET_RELATIONSHIP_BETWEEN_GROUPS(int RelationStatus, int Group1, int Group2) { invoke<void*>(0xD4A215BA, RelationStatus, Group1, Group2); }
void PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int RelationStatus, int Group1, int Group2) { invoke<void*>(0x994B8C2D, RelationStatus, Group1, Group2); }
int PED::ADD_RELATIONSHIP_GROUP(char* crewName, int p1) { return invoke<int>(0x8B635546, crewName, p1); }
void PED::REMOVE_RELATIONSHIP_GROUP(int p0) { invoke<void*>(0x4A1DC59A, p0); }
int PED::GET_RELATIONSHIP_BETWEEN_PEDS(int  ped1, int ped2) { return invoke<int>(0xE254C39C, ped1, ped2); }
int PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(int p0) { return invoke<int>(0x714BD6E4, p0); }
int PED::GET_PED_RELATIONSHIP_GROUP_HASH(int playerId) { return invoke<int>(0x354F283C, playerId); }
int PED::GET_RELATIONSHIP_BETWEEN_GROUPS(int p0, int p1) { return invoke<int>(0x4E372FE2, p0, p1); }
void PED::SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(int p0, int p1) { invoke<void*>(0x7FDDC0A6, p0, p1); }
void PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(int p0, int p1, int p2) { invoke<void*>(0xD78AC46C, p0, p1, p2); }
int PED::IS_PED_RESPONDING_TO_EVENT(int p0, int p1) { return invoke<int>(0x7A877554, p0, p1); }
void PED::SET_PED_FIRING_PATTERN(int  ped, int patternHash) { invoke<void*>(0xB4629D66, ped, patternHash); }
void PED::SET_PED_SHOOT_RATE(int  ped, int shootRate) { invoke<void*>(0xFB301746, ped, shootRate); }
void PED::SET_COMBAT_FLOAT(int p0, int p1, int p2) { invoke<void*>(0xD8B7637C, p0, p1, p2); }
int PED::GET_COMBAT_FLOAT(int p0, int p1) { return invoke<int>(0x511D7EF8, p0, p1); }
void PED::GET_GROUP_SIZE(int p0, int p1, int p2) { invoke<void*>(0xF7E1A691, p0, p1, p2); }
int PED::DOES_GROUP_EXIST(int Group) { return invoke<int>(0x935C978D, Group); }
int PED::GET_PED_GROUP_INDEX(int  pedHandle) { return invoke<int>(0x134E0785, pedHandle); }
int PED::IS_PED_IN_GROUP(int  pedHandle) { return invoke<int>(0x836D9795, pedHandle); }
int PED::_0xDE7442EE(int p0) { return invoke<int>(0xDE7442EE, p0); }
void PED::SET_GROUP_FORMATION(int group, int formationType) { invoke<void*>(0x08FAC739, group, formationType); }
void PED::SET_GROUP_FORMATION_SPACING(int p0, int p1, int p2, int p3) { invoke<void*>(0xB1E086FF, p0, p1, p2, p3); }
void PED::_0x267FCEAD(int p0) { invoke<void*>(0x267FCEAD, p0); }
int PED::GET_VEHICLE_PED_IS_USING(int Handle) { return invoke<int>(0x6DE3AADA, Handle); }
int PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(int p0) { return invoke<int>(0x56E0C163, p0); }
void PED::SET_PED_GRAVITY(int p0, int p1) { invoke<void*>(0x3CA16652, p0, p1); }
void PED::APPLY_DAMAGE_TO_PED(int  pedHandle, int damageAmount, int p2) { invoke<void*>(0x4DC27FCF, pedHandle, damageAmount, p2); }
void PED::SET_PED_ALLOWED_TO_DUCK(int p0, int p1) { invoke<void*>(0xC4D122F8, p0, p1); }
void PED::SET_PED_NEVER_LEAVES_GROUP(int Handle, int Group) { invoke<void*>(0x0E038813, Handle, Group); }
int PED::GET_PED_TYPE(int Handle) { return invoke<int>(0xB1460D43, Handle); }
void PED::SET_PED_AS_COP(int Handle, int Toggle) { invoke<void*>(0x84E7DE9F, Handle, Toggle); }
void PED::SET_PED_MAX_HEALTH(int p0, int p1) { invoke<void*>(0x5533F60B, p0, p1); }
int PED::GET_PED_MAX_HEALTH(int p0) { return invoke<int>(0xA45B6C8D, p0); }
void PED::SET_PED_MAX_TIME_IN_WATER(int p0, int p1) { invoke<void*>(0xFE0A106B, p0, p1); }
void PED::SET_PED_MAX_TIME_UNDERWATER(int p0, int p1) { invoke<void*>(0x082EF240, p0, p1); }
void PED::_0x373CC405(int p0, int p1) { invoke<void*>(0x373CC405, p0, p1); }
void PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(int Handle, int p1) { invoke<void*>(0x8A251612, Handle, p1); }
int PED::_0xC9D098B3(int p0) { return invoke<int>(0xC9D098B3, p0); }
void PED::KNOCK_PED_OFF_VEHICLE(int Handle) { invoke<void*>(0xACDD0674, Handle); }
void PED::SET_PED_COORDS_NO_GANG(int  ped, float XCoord, float YCoord, float ZCoord) { invoke<void*>(0x9561AD98, ped, XCoord, YCoord, ZCoord); }
int PED::GET_PED_AS_GROUP_MEMBER(int p0, int p1) { return invoke<int>(0x9AA3CC8C, p0, p1); }
void PED::SET_PED_KEEP_TASK(int  ped, int Toggle) { invoke<void*>(0xA7EC79CE, ped, Toggle); }
void PED::_0x397F06E3(int p0, int p1) { invoke<void*>(0x397F06E3, p0, p1); }
int PED::IS_PED_SWIMMING(int p0) { return invoke<int>(0x7AB43DB8, p0); }
int PED::IS_PED_SWIMMING_UNDER_WATER(int p0) { return invoke<int>(0x0E8D524F, p0); }
void PED::SET_PED_COORDS_KEEP_VEHICLE(int  ped, Vector3 vec) { invoke<void*>(0xD66AE1D3, ped, vec.x, vec.y, vec.z); }
void PED::SET_PED_DIES_IN_VEHICLE(int p0, int p1) { invoke<void*>(0x6FE1E440, p0, p1); }
void PED::SET_CREATE_RANDOM_COPS(int p0) { invoke<void*>(0x23441648, p0); }
void PED::_0x82E548CC(int p0) { invoke<void*>(0x82E548CC, p0); }
void PED::_0xEDC31475(int p0) { invoke<void*>(0xEDC31475, p0); }
int PED::CAN_CREATE_RANDOM_COPS() { return invoke<int>(0xAA73DAD9); }
void PED::SET_PED_AS_ENEMY(int  pedHandle, int p1) { invoke<void*>(0xAE620A1B, pedHandle, p1); }
void PED::SET_PED_CAN_SMASH_GLASS(int p0, int p1, int p2) { invoke<void*>(0x149C60A8, p0, p1, p2); }
int PED::IS_PED_IN_ANY_TRAIN(int p0) { return invoke<int>(0x759EF63A, p0); }
int PED::IS_PED_GETTING_INTO_A_VEHICLE(int playerID) { return invoke<int>(0x90E805AC, playerID); }
int PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(int p0) { return invoke<int>(0x46828B4E, p0); }
void PED::SET_ENABLE_HANDCUFFS(int Handle, int Toggle) { invoke<void*>(0xAC9BBA23, Handle, Toggle); }
void PED::SET_ENABLE_BOUND_ANKLES(int p0, int p1) { invoke<void*>(0x9208D689, p0, p1); }
void PED::_0x7BF61471(int p0, int p1) { invoke<void*>(0x7BF61471, p0, p1); }
void PED::SET_CAN_ATTACK_FRIENDLY(int p0, int p1, int p2) { invoke<void*>(0x47C60963, p0, p1, p2); }
int PED::GET_PED_ALERTNESS(int p0) { return invoke<int>(0xF83E4DAF, p0); }
void PED::SET_PED_ALERTNESS(int p0, int p1) { invoke<void*>(0x2C32D9AE, p0, p1); }
void PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(int p0, int p1) { invoke<void*>(0x89AD49FF, p0, p1); }
void PED::SET_PED_MOVEMENT_CLIPSET(int p0, int p1, int p2) { invoke<void*>(0xA817CDEB, p0, p1, p2); }
void PED::RESET_PED_MOVEMENT_CLIPSET(int p0, int p1) { invoke<void*>(0xB83CEE93, p0, p1); }
void PED::SET_PED_STRAFE_CLIPSET(int p0, int p1) { invoke<void*>(0x0BACF010, p0, p1); }
void PED::RESET_PED_STRAFE_CLIPSET(int p0) { invoke<void*>(0xF1967A12, p0); }
void PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(int p0, int p1) { invoke<void*>(0xF8BE54DC, p0, p1); }
void PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(int p0) { invoke<void*>(0xC60C9ACD, p0); }
void PED::_0xD4C73595(int p0, int p1) { invoke<void*>(0xD4C73595, p0, p1); }
void PED::_0xAEC9163B(int p0) { invoke<void*>(0xAEC9163B, p0); }
void PED::SET_PED_IN_VEHICLE_CONTEXT(int p0, int p1) { invoke<void*>(0x27F25C0E, p0, p1); }
void PED::RESET_PED_IN_VEHICLE_CONTEXT(int p0) { invoke<void*>(0x3C94D88A, p0); }
int PED::_0x3C30B447(int p0, int p1, int p2) { return invoke<int>(0x3C30B447, p0, p1, p2); }
void PED::_0x895E1D67(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x895E1D67, p0, p1, p2, p3, p4); }
void PED::_0x5736FB23(int p0, int p1) { invoke<void*>(0x5736FB23, p0, p1); }
void PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xBA84FD8C, p0, p1, p2, p3, p4, p5); }
void PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(int p0, int p1, int p2) { invoke<void*>(0x7A7F5BC3, p0, p1, p2); }
void PED::SET_PED_GESTURE_GROUP(int p0, int p1) { invoke<void*>(0x170DA109, p0, p1); }
Vector3 PED::_0xC59D4268(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<Vector3>(0xC59D4268, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
Vector3 PED::_0x5F7789E6(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<Vector3>(0x5F7789E6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
int PED::GET_PED_DRAWABLE_VARIATION(int  pedID, int componentID) { return invoke<int>(0x29850FE2, pedID, componentID); }
int PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(int  pedID, int componentID) { return invoke<int>(0x9754C27D, pedID, componentID); }
int PED::GET_PED_TEXTURE_VARIATION(int  pedID, int componentID) { return invoke<int>(0xC0A8590A, pedID, componentID); }
int PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(int  pedID, int componentID, int drawableID) { return invoke<int>(0x83D9FBE7, pedID, componentID, drawableID); }
int PED::_0xC9780B95(int p0, int p1) { return invoke<int>(0xC9780B95, p0, p1); }
int PED::REMOVE_NIGHTVISION_MELEE(int p0, int p1, int p2) { return invoke<int>(0x4892B882, p0, p1, p2); }
int PED::GET_PED_PALETTE_VARIATION(int p0, int p1) { return invoke<int>(0xEF1BC082, p0, p1); }
int PED::IS_PED_COMPONENT_VARIATION_VALID(int p0, int p1, int p2, int p3) { return invoke<int>(0x952ABD9A, p0, p1, p2, p3); }
void PED::SET_PED_COMPONENT_VARIATION(int Handle, int componentID, int drawableID, int textureID, int paletteID) { invoke<void*>(0xD4F7B05C, Handle, componentID, drawableID, textureID, paletteID); }
void PED::SET_PED_RANDOM_COMPONENT_VARIATION(int  pedHandle, int p1) { invoke<void*>(0x4111BA46, pedHandle, p1); }
void PED::SET_PED_RANDOM_PROPS(int Handle) { invoke<void*>(0xE3318E0E, Handle); }
void PED::SET_PED_DEFAULT_COMPONENT_VARIATION(int Handle) { invoke<void*>(0xC866A984, Handle); }
void PED::SET_PED_BLEND_FROM_PARENTS(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x837BD370, p0, p1, p2, p3, p4); }
void PED::_0xC21C8A56(int p0) { invoke<void*>(0xC21C8A56, p0); }
void PED::_0x5D2FC042(int p0, int p1, int p2) { invoke<void*>(0x5D2FC042, p0, p1, p2); }
void PED::SET_PED_HEAD_BLEND_DATA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { invoke<void*>(0x60746B88, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
void PED::UPDATE_PED_HEAD_BLEND_DATA(int p0, int p1, int p2, int p3) { invoke<void*>(0x5CB76219, p0, p1, p2, p3); }
void PED::SET_PED_HEAD_OVERLAY(int p0, int p1, int p2, int p3) { invoke<void*>(0xD28DBA90, p0, p1, p2, p3); }
int PED::_0xFF43C18D(int p0) { return invoke<int>(0xFF43C18D, p0); }
int PED::HAS_PED_HEAD_BLEND_FINISHED(int p0) { return invoke<int>(0x2B1BD9C5, p0); }
void PED::_0x894314A4(int p0) { invoke<void*>(0x894314A4, p0); }
void PED::_0x57E5B3F9(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x57E5B3F9, p0, p1, p2, p3, p4); }
void PED::_0xC6F36292(int p0) { invoke<void*>(0xC6F36292, p0); }
int PED::_0x211DEFEC(int p0) { return invoke<int>(0x211DEFEC, p0); }
int PED::_0x095D3BD8(int p0) { return invoke<int>(0x095D3BD8, p0); }
void PED::_0x45F3BDFB(int p0, int p1, int p2, int p3) { invoke<void*>(0x45F3BDFB, p0, p1, p2, p3); }
int PED::_0xC6517D52(int p0) { return invoke<int>(0xC6517D52, p0); }
void PED::_0x6435F67F(int p0) { invoke<void*>(0x6435F67F, p0); }
void PED::_0xC0E23671(int p0, int p1, int p2, int p3) { invoke<void*>(0xC0E23671, p0, p1, p2, p3); }
int PED::_0x3B0CA391(int p0) { return invoke<int>(0x3B0CA391, p0); }
void PED::_0xFD103BA7(int p0) { invoke<void*>(0xFD103BA7, p0); }
int PED::GET_PED_PROP_INDEX(int Handle, int ComponentID) { return invoke<int>(0x746DDAC0, Handle, ComponentID); }
void PED::SET_PED_PROP_INDEX(int Handle, int ComponentID, int drawableID, int TextureID, int PaletteID) { invoke<void*>(0x0829F2E2, Handle, ComponentID, drawableID, TextureID, PaletteID); }
void PED::KNOCK_OFF_PED_PROP(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x08D8B180, p0, p1, p2, p3, p4); }
void PED::CLEAR_PED_PROP(int Handle, int PropID) { invoke<void*>(0x2D23D743, Handle, PropID); }
void PED::CLEAR_ALL_PED_PROPS(int Handle) { invoke<void*>(0x81DF8B43, Handle); }
int PED::GET_PED_PROP_TEXTURE_INDEX(int p0, int p1) { return invoke<int>(0x922A6653, p0, p1); }
void PED::_0x7BCD8991(int p0) { invoke<void*>(0x7BCD8991, p0); }
void PED::_0x080275EE(int p0) { invoke<void*>(0x080275EE, p0); }
void PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(int p0, int p1) { invoke<void*>(0xDFE34E4A, p0, p1); }
void PED::SET_PED_BOUNDS_ORIENTATION(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xCFA20D68, p0, p1, p2, p3, p4, p5); }
void PED::REGISTER_TARGET(int p0, int p1) { invoke<void*>(0x50A95442, p0, p1); }
void PED::REGISTER_HATED_TARGETS_AROUND_PED(int Handle, float AreaToAttack) { invoke<void*>(0x7F87559E, Handle, AreaToAttack); }
int PED::GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int p6) { return invoke<int>(0xDC8239EB, x, y, z, xRadius, yRadius, zRadius, p6); }
int PED::GET_CLOSEST_PED(float x, float y, float z, float Radius, int p4, int p5, int handle, int p7, int p8, int p9) { return invoke<int>(0x8F6C1F55, x, y, z, Radius, p4, p5, handle, p7, p8, p9); }
void PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(int p0) { invoke<void*>(0x85615FD0, p0); }
int PED::_0x18DD76A1(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x18DD76A1, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void PED::_0x6D55B3B3(int p0, int p1) { invoke<void*>(0x6D55B3B3, p0, p1); }
void PED::SET_DRIVER_ABILITY(int p0, int p1) { invoke<void*>(0xAAD4012C, p0, p1); }
void PED::SET_DRIVER_AGGRESSIVENESS(int p0, int p1) { invoke<void*>(0x8B02A8FB, p0, p1); }
int PED::CAN_PED_RAGDOLL(int p0) { return invoke<int>(0xC0EFB7A3, p0); }
int PED::SET_PED_TO_RAGDOLL(int  ped, int Xforce, int Yforce, int Zforce, int p4, int p5, int p6) { return invoke<int>(0x83CB5052, ped, Xforce, Yforce, Zforce, p4, p5, p6); }
int PED::SET_PED_TO_RAGDOLL_WITH_FALL(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13) { return invoke<int>(0xFA12E286, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
void PED::SET_PED_RAGDOLL_ON_COLLISION(int Handle, int Toggle) { invoke<void*>(0x2654A0F4, Handle, Toggle); }
int PED::IS_PED_RAGDOLL(int p0) { return invoke<int>(0xC833BBE1, p0); }
int PED::IS_PED_RUNNING_RAGDOLL_TASK(int p0) { return invoke<int>(0x44A153F2, p0); }
void PED::SET_PED_RAGDOLL_FORCE_FALL(int  ped) { invoke<void*>(0x20A5BDE0, ped); }
void PED::RESET_PED_RAGDOLL_TIMER(int p0) { invoke<void*>(0xF2865370, p0); }
void PED::SET_PED_CAN_RAGDOLL(int Handle, int Toggle) { invoke<void*>(0xCF1384C4, Handle, Toggle); }
int PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(int p0) { return invoke<int>(0xFB2AFED1, p0); }
int PED::_0x97353375(int p0) { return invoke<int>(0x97353375, p0); }
void PED::_0x9C8F830D(int p0, int p1) { invoke<void*>(0x9C8F830D, p0, p1); }
void PED::_0x77CBA290(int p0, int p1) { invoke<void*>(0x77CBA290, p0, p1); }
void PED::SET_PED_ANGLED_DEFENSIVE_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x3EFBDD9B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void PED::SET_PED_SPHERE_DEFENSIVE_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0xBD96D8E8, p0, p1, p2, p3, p4, p5, p6); }
void PED::_0x40638BDC(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x40638BDC, p0, p1, p2, p3, p4, p5, p6); }
void PED::_0x4763B2C6(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x4763B2C6, p0, p1, p2, p3, p4, p5, p6); }
void PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { invoke<void*>(0x74BDA7CE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
void PED::_0xB66B0C9A(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xB66B0C9A, p0, p1, p2, p3, p4); }
void PED::REMOVE_PED_DEFENSIVE_AREA(int p0, int p1) { invoke<void*>(0x34AAAFA5, p0, p1); }
Vector3 PED::GET_PED_DEFENSIVE_AREA_POSITION(int p0, int p1) { return invoke<Vector3>(0xCB65198D, p0, p1); }
void PED::_0xF3B7EFBF(int p0, int p1) { invoke<void*>(0xF3B7EFBF, p0, p1); }
void PED::_0xA0134498(int p0) { invoke<void*>(0xA0134498, p0); }
void PED::REVIVE_INJURED_PED(int p0) { invoke<void*>(0x14D3E6E3, p0); }
void PED::RESURRECT_PED(int p0) { invoke<void*>(0xA4B82097, p0); }
void PED::SET_PED_NAME_DEBUG(int p0, int p1) { invoke<void*>(0x20D6273E, p0, p1); }
Vector3 PED::GET_PED_EXTRACTED_DISPLACEMENT(int p0, int p1) { return invoke<Vector3>(0x5231F901, p0, p1); }
void PED::SET_PED_DIES_WHEN_INJURED(int  ped, int toggle) { invoke<void*>(0xE94E24D4, ped, toggle); }
void PED::SET_PED_ENABLE_WEAPON_BLOCKING(int  ped, int toggle) { invoke<void*>(0x4CAD1A4A, ped, toggle); }
void PED::_0x141CC936(int p0, int p1) { invoke<void*>(0x141CC936, p0, p1); }
void PED::RESET_PED_VISIBLE_DAMAGE(int  ped) { invoke<void*>(0xC4BC4841, ped); }
void PED::_0x1E54DB12(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x1E54DB12, p0, p1, p2, p3, p4); }
void PED::APPLY_PED_BLOOD(int  ped, int i1, float f1, float f2, float f3, char* s1) { invoke<void*>(0x376CE3C0, ped, i1, f1, f2, f3, s1); }
void PED::_0x8F3F3A9C(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x8F3F3A9C, p0, p1, p2, p3, p4); }
void PED::_0xFC13CE80(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xFC13CE80, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void PED::APPLY_PED_DAMAGE_DECAL(int p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8, char* p9) { invoke<void*>(0x8A13A41F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void PED::APPLY_PED_DAMAGE_PACK(int p0, int p1, int p2, int p3) { invoke<void*>(0x208D0CB8, p0, p1, p2, p3); }
void PED::CLEAR_PED_BLOOD_DAMAGE(int Handle) { invoke<void*>(0xF7ADC960, Handle); }
void PED::_0xF210BE69(int p0, int p1) { invoke<void*>(0xF210BE69, p0, p1); }
void PED::_0x0CB6C4ED(int p0, int p1, int p2) { invoke<void*>(0x0CB6C4ED, p0, p1, p2); }
void PED::_0x70AA5B7D(int p0, int p1, int p2) { invoke<void*>(0x70AA5B7D, p0, p1, p2); }
int PED::_0x47187F7F(int p0) { return invoke<int>(0x47187F7F, p0); }
void PED::CLEAR_PED_WETNESS(int  ped) { invoke<void*>(0x629F15BD, ped); }
void PED::SET_PED_WETNESS_HEIGHT(int  ped, float height) { invoke<void*>(0x7B33289A, ped, height); }
void PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(int p0) { invoke<void*>(0xBDE749F7, p0); }
void PED::_0xA993915F(int  ped) { invoke<void*>(0xA993915F, ped); }
void PED::SET_PED_SWEAT(int  ped, float sweat) { invoke<void*>(0x76A1DB9F, ped, sweat); }
void PED::_0x70559AC7(int  ped, int ShirtType, int ShirtDecal) { invoke<void*>(0x70559AC7, ped, ShirtType, ShirtDecal); }
int PED::_0x3543019E(int p0, int p1) { return invoke<int>(0x3543019E, p0, p1); }
void PED::CLEAR_PED_DECORATIONS(int Handle) { invoke<void*>(0xD4496BF3, Handle); }
void PED::_0xEFD58EB9(int p0) { invoke<void*>(0xEFD58EB9, p0); }
int PED::WAS_PED_SKELETON_UPDATED(int p0) { return invoke<int>(0xF7E2FBAD, p0); }
Vector3 PED::GET_PED_BONE_COORDS(int  ped, int i1, float f1, float f2, float f3) { return invoke<Vector3>(0x4579CAB1, ped, i1, f1, f2, f3); }
void PED::CREATE_NM_MESSAGE(int p0, int p1) { invoke<void*>(0x1CFBFD4B, p0, p1); }
void PED::GIVE_PED_NM_MESSAGE(int p0) { invoke<void*>(0x737C3689, p0); }
int PED::ADD_SCENARIO_BLOCKING_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<int>(0xA38C0234, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void PED::REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<void*>(0x4DDF845F); }
void PED::REMOVE_SCENARIO_BLOCKING_AREA(int p0, int p1) { invoke<void*>(0x4483EF06, p0, p1); }
void PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x80EAD297, p0, p1, p2, p3, p4); }
int PED::IS_PED_USING_SCENARIO(int p0, int p1) { return invoke<int>(0x0F65B0D4, p0, p1); }
int PED::IS_PED_USING_ANY_SCENARIO(int p0) { return invoke<int>(0x195EF5B7, p0); }
int PED::_0x59DE73AC(int p0, int p1, int p2, int p3) { return invoke<int>(0x59DE73AC, p0, p1, p2, p3); }
void PED::_0xC08FE5F6(int p0, int p1) { invoke<void*>(0xC08FE5F6, p0, p1); }
int PED::_0x58C0F6CF(int p0, int p1, int p2, int p3) { return invoke<int>(0x58C0F6CF, p0, p1, p2, p3); }
int PED::_0x761F8F48(int p0, int p1) { return invoke<int>(0x761F8F48, p0, p1); }
void PED::_0x033F43FA(int p0) { invoke<void*>(0x033F43FA, p0); }
void PED::_0x4C684C81(int p0) { invoke<void*>(0x4C684C81, p0); }
int PED::_0x7B4C3E6F(int p0, int p1, int p2, int p3) { return invoke<int>(0x7B4C3E6F, p0, p1, p2, p3); }
void PED::_0x5BC276AE(int p0, int p1) { invoke<void*>(0x5BC276AE, p0, p1); }
void PED::PLAY_FACIAL_ANIM(int p0, int p1, int p2) { invoke<void*>(0x1F6CCDDE, p0, p1, p2); }
void PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(int p0, int p1, int p2) { invoke<void*>(0x9BA19C13, p0, p1, p2); }
void PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(int p0) { invoke<void*>(0x5244F4E2, p0); }
void PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(int p0, int p1) { invoke<void*>(0xE131E3B3, p0, p1); }
void PED::SET_PED_CAN_PLAY_VISEME_ANIMS(int p0, int p1, int p2) { invoke<void*>(0xA2FDAF27, p0, p1, p2); }
void PED::_0xADB2511A(int p0, int p1) { invoke<void*>(0xADB2511A, p0, p1); }
void PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(int p0, int p1) { invoke<void*>(0xF8053081, p0, p1); }
void PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(int p0, int p1) { invoke<void*>(0x5720A5DD, p0, p1); }
void PED::_0xB7CD0A49(int p0) { invoke<void*>(0xB7CD0A49, p0); }
void PED::_0x343B4DE0(int p0, int p1) { invoke<void*>(0x343B4DE0, p0, p1); }
void PED::SET_PED_CAN_HEAD_IK(int p0, int p1) { invoke<void*>(0xD3B04476, p0, p1); }
void PED::SET_PED_CAN_LEG_IK(int p0, int p1) { invoke<void*>(0x9955BC6F, p0, p1); }
void PED::_0x8E5D4EAB(int p0, int p1) { invoke<void*>(0x8E5D4EAB, p0, p1); }
void PED::_0x7B0040A8(int p0, int p1) { invoke<void*>(0x7B0040A8, p0, p1); }
void PED::_0x0FDA62DE(int p0, int p1) { invoke<void*>(0x0FDA62DE, p0, p1); }
void PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(int p0, int p1) { invoke<void*>(0x584C5178, p0, p1); }
int PED::IS_PED_HEADTRACKING_PED(int p0, int p1) { return invoke<int>(0x2A5DF721, p0, p1); }
int PED::IS_PED_HEADTRACKING_ENTITY(int p0, int p1) { return invoke<int>(0x233C9ACF, p0, p1); }
void PED::SET_PED_PRIMARY_LOOKAT(int p0, int p1) { invoke<void*>(0x6DEF6F1C, p0, p1); }
void PED::_0xFC942D7C(int p0, int p1) { invoke<void*>(0xFC942D7C, p0, p1); }
void PED::_0x89EEE07B(int p0, int p1) { invoke<void*>(0x89EEE07B, p0, p1); }
void PED::SET_PED_CONFIG_FLAG(int p0, int p1, int p2) { invoke<void*>(0x9CFBE10D, p0, p1, p2); }
void PED::SET_PED_RESET_FLAG(int p0, int p1, int p2) { invoke<void*>(0xCFF6FF66, p0, p1, p2); }
int PED::GET_PED_CONFIG_FLAG(int p0, int p1, int p2) { return invoke<int>(0xABE98267, p0, p1, p2); }
int PED::GET_PED_RESET_FLAG(int p0, int p1) { return invoke<int>(0x2FC10D11, p0, p1); }
void PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(int p0, int p1) { invoke<void*>(0x2AB3670B, p0, p1); }
void PED::SET_PED_CAN_EVASIVE_DIVE(int p0, int p1) { invoke<void*>(0x542FEB4D, p0, p1); }
int PED::IS_PED_EVASIVE_DIVING(int p0, int p1) { return invoke<int>(0xD82829DC, p0, p1); }
void PED::SET_PED_SHOOTS_AT_COORD(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xFD64EAE5, p0, p1, p2, p3, p4); }
void PED::SET_PED_MODEL_IS_SUPPRESSED(int p0, int p1) { invoke<void*>(0x7820CA43, p0, p1); }
void PED::STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<void*>(0x5AD7DC55); }
void PED::SET_PED_CAN_BE_TARGETED_WHEN_INJURED(int p0, int p1) { invoke<void*>(0x6FD9A7CD, p0, p1); }
void PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(int  ped, int Toggle) { invoke<void*>(0xE9B97A2B, ped, Toggle); }
void PED::_0xFF1F6AEB(int p0, int p1) { invoke<void*>(0xFF1F6AEB, p0, p1); }
void PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(int p0, int p1) { invoke<void*>(0xE9BD733A, p0, p1); }
void PED::GIVE_PED_HELMET(int p0, int p1, int p2, int p3) { invoke<void*>(0x1862A461, p0, p1, p2, p3); }
void PED::REMOVE_PED_HELMET(int p0, int p1) { invoke<void*>(0x2086B1F0, p0, p1); }
void PED::SET_PED_HELMET(int p0, int p1) { invoke<void*>(0xED366E53, p0, p1); }
void PED::SET_PED_HELMET_FLAG(int p0, int p1) { invoke<void*>(0x12677780, p0, p1); }
void PED::SET_PED_HELMET_PROP_INDEX(int p0, int p1) { invoke<void*>(0xA316D13F, p0, p1); }
void PED::SET_PED_HELMET_TEXTURE_INDEX(int p0, int p1) { invoke<void*>(0x5F6C3328, p0, p1); }
int PED::IS_PED_WEARING_HELMET(int Handle) { return invoke<int>(0x0D680D49, Handle); }
void PED::_0x24A1284E(int p0) { invoke<void*>(0x24A1284E, p0); }
int PED::_0x8A3A3116(int p0) { return invoke<int>(0x8A3A3116, p0); }
int PED::_0x74EB662D(int p0) { return invoke<int>(0x74EB662D, p0); }
int PED::_0xFFF149FE(int p0) { return invoke<int>(0xFFF149FE, p0); }
void PED::SET_PED_TO_LOAD_COVER(int p0, int p1) { invoke<void*>(0xCF94BA97, p0, p1); }
void PED::SET_PED_CAN_COWER_IN_COVER(int p0, int p1) { invoke<void*>(0x5194658B, p0, p1); }
void PED::SET_PED_CAN_PEEK_IN_COVER(int Handle, int Toggle) { invoke<void*>(0xC1DAE216, Handle, Toggle); }
void PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(int p0, int p1) { invoke<void*>(0x7C563CD2, p0, p1); }
void PED::SET_PED_LEG_IK_MODE(int p0, int p1) { invoke<void*>(0xFDDB042E, p0, p1); }
void PED::SET_PED_MOTION_BLUR(int p0, int p1) { invoke<void*>(0xA211A128, p0, p1); }
void PED::SET_PED_CAN_SWITCH_WEAPON(int ID, int CAN_SWITCH) { invoke<void*>(0xB5F8BA28, ID, CAN_SWITCH); }
void PED::SET_PED_DIES_INSTANTLY_IN_WATER(int Handle, int Toggle) { invoke<void*>(0xFE2554FC, Handle, Toggle); }
void PED::_0x77BB7CB8(int p0, int p1) { invoke<void*>(0x77BB7CB8, p0, p1); }
void PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(int p0) { invoke<void*>(0x4AC3421E, p0); }
void PED::SET_SCRIPTED_ANIM_SEAT_OFFSET(int p0, int p1) { invoke<void*>(0x7CEFFA45, p0, p1); }
void PED::SET_PED_COMBAT_MOVEMENT(int p0, int p1) { invoke<void*>(0x12E62F9E, p0, p1); }
int PED::GET_PED_COMBAT_MOVEMENT(int p0) { return invoke<int>(0xF3E7730E, p0); }
void PED::SET_PED_COMBAT_ABILITY(int  ped, int p1) { invoke<void*>(0x6C23D329, ped, p1); }
void PED::SET_PED_COMBAT_RANGE(int  ped, float range) { invoke<void*>(0x8818A959, ped, range); }
int PED::GET_PED_COMBAT_RANGE(int p0) { return invoke<int>(0x9B9B7163, p0); }
void PED::SET_PED_COMBAT_ATTRIBUTES(int p0, int p1, int p2) { invoke<void*>(0x81D64248, p0, p1, p2); }
void PED::SET_PED_TARGET_LOSS_RESPONSE(int p0, int p1) { invoke<void*>(0xCFA613FF, p0, p1); }
int PED::_0x139C0875(int p0) { return invoke<int>(0x139C0875, p0); }
int PED::IS_PED_PERFORMING_STEALTH_KILL(int p0) { return invoke<int>(0x9ADD7B21, p0); }
int PED::_0x9BE7C860(int Handle) { return invoke<int>(0x9BE7C860, Handle); }
int PED::IS_PED_BEING_STEALTH_KILLED(int p0) { return invoke<int>(0xD044C8AF, p0); }
int PED::_0xAFEC26A4(int p0) { return invoke<int>(0xAFEC26A4, p0); }
int PED::WAS_PED_KILLED_BY_STEALTH(int p0) { return invoke<int>(0x2EA4B54E, p0); }
int PED::WAS_PED_KILLED_BY_TAKEDOWN(int p0) { return invoke<int>(0xBDD3CE69, p0); }
int PED::_0x3993092B(int p0) { return invoke<int>(0x3993092B, p0); }
void PED::SET_PED_FLEE_ATTRIBUTES(int p0, int p1, int p2) { invoke<void*>(0xA717A875, p0, p1, p2); }
void PED::SET_PED_COWER_HASH(int p0, int p1) { invoke<void*>(0x16F30DF4, p0, p1); }
void PED::_0xA6F2C057(int p0, int p1) { invoke<void*>(0xA6F2C057, p0, p1); }
void PED::SET_PED_STEERS_AROUND_PEDS(int  ped, int DoesSteer) { invoke<void*>(0x797CAE4F, ped, DoesSteer); }
void PED::SET_PED_STEERS_AROUND_OBJECTS(int  ped, int DoesSteer) { invoke<void*>(0x3BD9B0A6, ped, DoesSteer); }
void PED::SET_PED_STEERS_AROUND_VEHICLES(int  ped, int DoesSteer) { invoke<void*>(0x533C0651, ped, DoesSteer); }
void PED::_0x2276DE0D(int p0, int p1) { invoke<void*>(0x2276DE0D, p0, p1); }
void PED::_0x59C52BE6(int p0) { invoke<void*>(0x59C52BE6, p0); }
void PED::_0x1D87DDC1(int p0, int p1) { invoke<void*>(0x1D87DDC1, p0, p1); }
void PED::_0xB52BA5F5(int p0) { invoke<void*>(0xB52BA5F5, p0); }
int PED::IS_ANY_PED_NEAR_POINT(int p0, int p1, int p2, int p3) { return invoke<int>(0xFBD9B050, p0, p1, p2, p3); }
void PED::_0x187B9070(int p0, int p1, int p2) { invoke<void*>(0x187B9070, p0, p1, p2); }
int PED::_0x45037B9B(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x45037B9B, p0, p1, p2, p3, p4); }
void PED::_0x840D24D3(int p0) { invoke<void*>(0x840D24D3, p0); }
void PED::GET_PED_FLOOD_INVINCIBILITY(int p0, int p1) { invoke<void*>(0x31C31DAA, p0, p1); }
void PED::_0x9194DB71(int p0, int p1) { invoke<void*>(0x9194DB71, p0, p1); }
int PED::IS_TRACKED_PED_VISIBLE(int p0) { return invoke<int>(0x33248CC1, p0); }
int PED::_0x5B1B70AA(int p0) { return invoke<int>(0x5B1B70AA, p0); }
int PED::IS_PED_TRACKED(int p0) { return invoke<int>(0x7EB613D9, p0); }
int PED::HAS_PED_RECEIVED_EVENT(int p0, int p1) { return invoke<int>(0xECD73DB0, p0, p1); }
int PED::_0x74A0F291(int p0, int p1) { return invoke<int>(0x74A0F291, p0, p1); }
int PED::GET_PED_BONE_INDEX(int Handle, int BoneIndex) { return invoke<int>(0x259C6BA2, Handle, BoneIndex); }
int PED::GET_PED_RAGDOLL_BONE_INDEX(int p0, int p1) { return invoke<int>(0x849F0716, p0, p1); }
void PED::SET_PED_ENVEFF_SCALE(int p0, int p1) { invoke<void*>(0xFC1CFC27, p0, p1); }
int PED::GET_PED_ENVEFF_SCALE(int p0) { return invoke<int>(0xA3421E39, p0); }
void PED::SET_ENABLE_PED_ENVEFF_SCALE(int p0, int p1) { invoke<void*>(0xC70F4A84, p0, p1); }
void PED::_0x3B882533(int p0, int p1) { invoke<void*>(0x3B882533, p0, p1); }
void PED::_0x87A0C174(int p0, int p1, int p2, int p3) { invoke<void*>(0x87A0C174, p0, p1, p2, p3); }
void PED::_0x7BD26837(int p0, int p1) { invoke<void*>(0x7BD26837, p0, p1); }
void PED::_0x98E29ED0(int p0, int p1) { invoke<void*>(0x98E29ED0, p0, p1); }
int PED::_0xD315978E(int p0) { return invoke<int>(0xD315978E, p0); }
int PED::CREATE_SYNCHRONIZED_SCENE(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xFFDDF8FA, p0, p1, p2, p3, p4, p5, p6); }
int PED::_0xF3876894(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xF3876894, p0, p1, p2, p3, p4); }
int PED::IS_SYNCHRONIZED_SCENE_RUNNING(int p0) { return invoke<int>(0x57A282F1, p0); }
void PED::SET_SYNCHRONIZED_SCENE_ORIGIN(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x2EC2A0B2, p0, p1, p2, p3, p4, p5, p6, p7); }
void PED::SET_SYNCHRONIZED_SCENE_PHASE(int p0, int p1) { invoke<void*>(0xF5AB0D98, p0, p1); }
int PED::GET_SYNCHRONIZED_SCENE_PHASE(int p0) { return invoke<int>(0xB0B2C852, p0); }
void PED::SET_SYNCHRONIZED_SCENE_RATE(int p0, int p1) { invoke<void*>(0xF10112FD, p0, p1); }
int PED::GET_SYNCHRONIZED_SCENE_RATE(int p0) { return invoke<int>(0x89365F0D, p0); }
void PED::SET_SYNCHRONIZED_SCENE_LOOPED(int p0, int p1) { invoke<void*>(0x32ED9F82, p0, p1); }
int PED::IS_SYNCHRONIZED_SCENE_LOOPED(int p0) { return invoke<int>(0x47D87A84, p0); }
void PED::_0x2DE48DA1(int p0, int p1) { invoke<void*>(0x2DE48DA1, p0, p1); }
int PED::_0x72CF2514(int p0) { return invoke<int>(0x72CF2514, p0); }
void PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int p0, int p1, int p2) { invoke<void*>(0xE9BA6189, p0, p1, p2); }
void PED::DETACH_SYNCHRONIZED_SCENE(int p0) { invoke<void*>(0x52A1CAB2, p0); }
void PED::_0xBF7F9035(int p0) { invoke<void*>(0xBF7F9035, p0); }
int PED::FORCE_PED_MOTION_STATE(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x164DDEFF, p0, p1, p2, p3, p4); }
void PED::SET_PED_MAX_MOVE_BLEND_RATIO(int p0, int p1) { invoke<void*>(0xEAD0269A, p0, p1); }
void PED::SET_PED_MIN_MOVE_BLEND_RATIO(int p0, int p1) { invoke<void*>(0x383EC364, p0, p1); }
void PED::SET_PED_MOVE_RATE_OVERRIDE(int p0, int p1) { invoke<void*>(0x900008C6, p0, p1); }
int PED::_0x79543043(int p0, int p1) { return invoke<int>(0x79543043, p0, p1); }
int PED::GET_PED_NEARBY_VEHICLES(int Handle, int* sizeAndVehs) { return invoke<int>(0xCB716F68, Handle, sizeAndVehs); }
int PED::GET_PED_NEARBY_PEDS(int Handle, int* PToArray, int p2) { return invoke<int>(0x4D3325F4, Handle, PToArray, p2); }
int PED::_0xF9FB4B71(int p0) { return invoke<int>(0xF9FB4B71, p0); }
int PED::IS_PED_USING_ACTION_MODE(int p0) { return invoke<int>(0x5AE7EDA2, p0); }
void PED::SET_PED_USING_ACTION_MODE(int p0, int p1, int p2, int p3) { invoke<void*>(0x8802F696, p0, p1, p2, p3); }
void PED::SET_PED_CAPSULE(int p0, int p1) { invoke<void*>(0xB153E1B9, p0, p1); }
int PED::REGISTER_PEDHEADSHOT(int p0) { return invoke<int>(0xFFE2667B, p0); }
int PED::_0x4DD03628(int p0) { return invoke<int>(0x4DD03628, p0); }
void PED::UNREGISTER_PEDHEADSHOT(int p0) { invoke<void*>(0x0879AE45, p0); }
int PED::IS_PEDHEADSHOT_VALID(int p0) { return invoke<int>(0x0B1080C4, p0); }
int PED::IS_PEDHEADSHOT_READY(int p0) { return invoke<int>(0x761CD02E, p0); }
int PED::GET_PEDHEADSHOT_TXD_STRING(int p0) { return invoke<int>(0x76D28E96, p0); }
void PED::SET_PEDHEADSHOT_CUSTOM_LIGHTING(int p0) { invoke<void*>(0xAB688DAB, p0); }
void PED::SET_PEDHEADSHOT_CUSTOM_LIGHT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xF48A9155, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int PED::_0x10F2C023(int p0) { return invoke<int>(0x10F2C023, p0); }
void PED::_0x0DBB2FA7(int p0) { invoke<void*>(0x0DBB2FA7, p0); }
int PED::_0x810158F8() { return invoke<int>(0x810158F8); }
int PED::_0x05023F8F() { return invoke<int>(0x05023F8F); }
int PED::_0xAA39FD6C() { return invoke<int>(0xAA39FD6C); }
void PED::_0xEF9142DB(int p0, int p1) { invoke<void*>(0xEF9142DB, p0, p1); }
void PED::_0x0688DE64(int p0) { invoke<void*>(0x0688DE64, p0); }
void PED::_0x909A1D76(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x909A1D76, p0, p1, p2, p3, p4, p5, p6, p7); }
void PED::_0x4AAD0ECB(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x4AAD0ECB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void PED::_0x492C9E46() { invoke<void*>(0x492C9E46); }
int PED::_0x814A28F4() { return invoke<int>(0x814A28F4); }
int PED::_0x0B60D2BA() { return invoke<int>(0x0B60D2BA); }
int PED::_0x6B83ABDF() { return invoke<int>(0x6B83ABDF); }
int PED::_0xF46B4DC8() { return invoke<int>(0xF46B4DC8); }
void PED::_0x36A4AC65(int p0, int p1, int p2, int p3) { invoke<void*>(0x36A4AC65, p0, p1, p2, p3); }
void PED::_0xBA699DDF(int p0, int p1) { invoke<void*>(0xBA699DDF, p0, p1); }
void PED::SET_IK_TARGET(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x6FE5218C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void PED::_0xFB4000DC(int p0) { invoke<void*>(0xFB4000DC, p0); }
void PED::REQUEST_ACTION_MODE_ASSET(int p0) { invoke<void*>(0x572BA553, p0); }
int PED::HAS_ACTION_MODE_ASSET_LOADED(int p0) { return invoke<int>(0xF7EB2BF1, p0); }
void PED::REMOVE_ACTION_MODE_ASSET(int p0) { invoke<void*>(0x3F480F92, p0); }
void PED::REQUEST_STEALTH_MODE_ASSET(int p0) { invoke<void*>(0x280A004A, p0); }
int PED::HAS_STEALTH_MODE_ASSET_LOADED(int p0) { return invoke<int>(0x39245667, p0); }
void PED::REMOVE_STEALTH_MODE_ASSET(int p0) { invoke<void*>(0x8C0B243A, p0); }
void PED::SET_PED_LOD_MULTIPLIER(int p0, int p1) { invoke<void*>(0x1D2B5C70, p0, p1); }
void PED::_0x2F9550C2(int p0, int p1, int p2) { invoke<void*>(0x2F9550C2, p0, p1, p2); }
void PED::_0x37DBC2AD(int p0, int p1) { invoke<void*>(0x37DBC2AD, p0, p1); }
void PED::_0xC0F1BC91(int p0, int p1, int p2, int p3) { invoke<void*>(0xC0F1BC91, p0, p1, p2, p3); }
int PED::_0x1A464167(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x1A464167, p0, p1, p2, p3, p4); }
int PED::_0xD0567D41(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xD0567D41, p0, p1, p2, p3, p4, p5); }
void PED::_0x4BBE5E2C(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x4BBE5E2C, p0, p1, p2, p3, p4); }
void PED::_0xA89A53F2(int p0) { invoke<void*>(0xA89A53F2, p0); }

int VEHICLE::CREATE_VEHICLE(int VehicleHash, Vector3 coords, float Heading, int networkHandle, int vehiclehandle) { return invoke<int>(0xDD75460A, VehicleHash, coords.x, coords.y, coords.z, Heading, networkHandle, vehiclehandle); }
void VEHICLE::DELETE_VEHICLE(int* vehicle) { invoke<void*>(0x9803AF60, vehicle); }
void VEHICLE::_0xBB54ECCA(int p0, int p1) { invoke<void*>(0xBB54ECCA, p0, p1); }
void VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(int p0, int p1) { invoke<void*>(0x8BAAC437, p0, p1); }
int VEHICLE::_0xFBDE9FD8(int p0) { return invoke<int>(0xFBDE9FD8, p0); }
int VEHICLE::IS_VEHICLE_MODEL(int hash, int toggle) { return invoke<int>(0x013B10B6, hash, toggle); }
int VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int p0) { return invoke<int>(0xF6BDDA30, p0); }
int VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16) { return invoke<int>(0x25A9A261, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
void VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(int p0) { invoke<void*>(0xE4328E3F, p0); }
void VEHICLE::SET_SCRIPT_VEHICLE_GENERATOR(int p0, int p1) { invoke<void*>(0x40D73747, p0, p1); }
void VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xB4E0E69A, p0, p1, p2, p3, p4, p5, p6, p7); }
void VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<void*>(0xAB1FDD76); }
void VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(int p0) { invoke<void*>(0x87F767F2, p0); }
void VEHICLE::_0x935A95DA(int p0, int p1, int p2, int p3) { invoke<void*>(0x935A95DA, p0, p1, p2, p3); }
void VEHICLE::_0x6C73E45A() { invoke<void*>(0x6C73E45A); }
int VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(int vehicle) { return invoke<int>(0xE14FDBA6, vehicle); }
int VEHICLE::SET_ALL_VEHICLES_SPAWN(int p0, int p1, int p2, int p3) { return invoke<int>(0xA0909ADB, p0, p1, p2, p3); }
int VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(int Hash) { return invoke<int>(0x18D07C6C, Hash); }
void VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(int p0) { invoke<void*>(0x3A13D384, p0); }
void VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(int p0) { invoke<void*>(0xF390BA1B, p0); }
int VEHICLE::IS_VEHICLE_STOPPED(int p0) { return invoke<int>(0x655F072C, p0); }
int VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(int Vehicle) { return invoke<int>(0x1EF20849, Vehicle); }
int VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(int Vehicle) { return invoke<int>(0x0A2FC08C, Vehicle); }
int VEHICLE::_GET_VEHICLE_MODEL_MAX_NUMBER_OF_PASSENGERS(int VehicleModel) { return invoke<int>(0x838F7BF7, VehicleModel); }
int VEHICLE::_769E5CF2(int Vehicle, int i1) { return invoke<int>(0x769E5CF2, Vehicle, i1); }
void VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(int p0) { invoke<void*>(0xF4187E51, p0); }
void VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(int p0) { invoke<void*>(0x543F712B, p0); }
void VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(int p0) { invoke<void*>(0xDD46CEBE, p0); }
void VEHICLE::_0x09462665(int p0) { invoke<void*>(0x09462665, p0); }
void VEHICLE::_0xDAE2A2BE(int p0) { invoke<void*>(0xDAE2A2BE, p0); }
void VEHICLE::SET_FAR_DRAW_VEHICLES(int p0) { invoke<void*>(0x9F019C49, p0); }
void VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<void*>(0x206A58E8, value); }
void VEHICLE::SET_VEHICLE_DOORS_LOCKED(int hash, int door) { invoke<void*>(0x4CDD35D0, hash, door); }
void VEHICLE::SET_PED_TARGETTABLE_VEHICLE_DESTROY(int p0, int p1, int p2) { invoke<void*>(0xD61D182D, p0, p1, p2); }
void VEHICLE::DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(int p0, int p1) { invoke<void*>(0xC54156A9, p0, p1); }
void VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(int p0, int p1, int p2) { invoke<void*>(0x49829236, p0, p1, p2); }
int VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(int p0, int p1) { return invoke<int>(0x1DC50247, p0, p1); }
void VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(int p0, int p1) { invoke<void*>(0x891BA8A4, p0, p1); }
void VEHICLE::_0xE4EF6514(int p0, int p1) { invoke<void*>(0xE4EF6514, p0, p1); }
void VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(int p0, int p1, int p2) { invoke<void*>(0x4F85E783, p0, p1, p2); }
void VEHICLE::EXPLODE_VEHICLE(int vehicle, int b1, int b2) { invoke<void*>(0xBEDEACEB, vehicle, b1, b2); }
void VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(int p0, int p1, int p2) { invoke<void*>(0x3764D734, p0, p1, p2); }
void VEHICLE::SET_VEHICLE_TIMED_EXPLOSION(int p0, int p1, int p2) { invoke<void*>(0xDB8CB8E2, p0, p1, p2); }
void VEHICLE::_0x811373DE(int p0) { invoke<void*>(0x811373DE, p0); }
int VEHICLE::_0xA4E69134() { return invoke<int>(0xA4E69134); }
void VEHICLE::_0x65255524() { invoke<void*>(0x65255524); }
int VEHICLE::_0xE39DAF36(int p0) { return invoke<int>(0xE39DAF36, p0); }
void VEHICLE::SET_TAXI_LIGHTS(int vehicle, int state) { invoke<void*>(0x68639D85, vehicle, state); }
int VEHICLE::IS_TAXI_LIGHT_ON(int vehicle) { return invoke<int>(0x6FC4924A, vehicle); }
int VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(int p0, int p1) { return invoke<int>(0xA90EC257, p0, p1); }
void VEHICLE::SET_VEHICLE_COLOURS(int p0, int p1, int p2) { invoke<void*>(0x57F24253, p0, p1, p2); }
void VEHICLE::SET_VEHICLE_FULLBEAM(int vehicle, int state) { invoke<void*>(0x9C49CC15, vehicle, state); }
void VEHICLE::STEER_UNLOCK_BIAS(int p0, int p1) { invoke<void*>(0xA59E3DCD, p0, p1); }
void VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(int vehicle, int r, int g, int b) { invoke<void*>(0x8DF9F9BC, vehicle, r, g, b); }
void VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(int vehicle, int r, int g, int b) { invoke<void*>(0x1C2B9FEF, vehicle, r, g, b); }
void VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(int vehicle) { invoke<void*>(0x51E1E33D, vehicle); }
int VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(int vehicle) { return invoke<int>(0xD7EC8760, vehicle); }
void VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(int vehicle, int r, int g, int b) { invoke<void*>(0x9D77259E, vehicle, r, g, b); }
void VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(int p0, int p1, int p2, int p3) { invoke<void*>(0x3FF247A2, p0, p1, p2, p3); }
void VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(int vehicle) { invoke<void*>(0x7CE00B29, vehicle); }
int VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(int vehicle) { return invoke<int>(0x288AD228, vehicle); }
void VEHICLE::_0x8332730C(int p0, int p1) { invoke<void*>(0x8332730C, p0, p1); }
int VEHICLE::_0xD5F1EEE1(int p0) { return invoke<int>(0xD5F1EEE1, p0); }
void VEHICLE::SET_CAN_RESPRAY_VEHICLE(int vehicle, int state) { invoke<void*>(0x37677590, vehicle, state); }
void VEHICLE::_0x54E9EE75(int p0, int p1) { invoke<void*>(0x54E9EE75, p0, p1); }
void VEHICLE::_0x4A46E814(int vehicle, int p1, float X, float Y, float z) { invoke<void*>(0x4A46E814, vehicle, p1, X, Y, z); }
void VEHICLE::SET_BOAT_ANCHOR(int vehicle, int p1) { invoke<void*>(0xA3906284, vehicle, p1); }
void VEHICLE::_0x0ED84792(int p0, int p1) { invoke<void*>(0x0ED84792, p0, p1); }
void VEHICLE::_0xA739012A(int p0, int p1) { invoke<void*>(0xA739012A, p0, p1); }
void VEHICLE::_0x66FA450C(int p0, int p1) { invoke<void*>(0x66FA450C, p0, p1); }
void VEHICLE::_0x35614622(int p0, int p1) { invoke<void*>(0x35614622, p0, p1); }
void VEHICLE::SET_VEHICLE_SIREN(int vehicle, int siren) { invoke<void*>(0x4AC1EFC7, vehicle, siren); }
int VEHICLE::IS_VEHICLE_SIREN_ON(int vehicle) { return invoke<int>(0x25EB5873, vehicle); }
void VEHICLE::SET_VEHICLE_STRONG(int vehicle, int p0) { invoke<void*>(0xC758D19F, vehicle, p0); }
void VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(int p0) { invoke<void*>(0x81594917, p0); }
void VEHICLE::GET_VEHICLE_COLOURS(int vehicle, int* col1, int* col2) { invoke<void*>(0x40D82D88, vehicle, col1, col2); }
int VEHICLE::IS_VEHICLE_SEAT_FREE(int vehicle, int seatIndex) { return invoke<int>(0xDAF42B02, vehicle, seatIndex); }
int VEHICLE::GET_PED_IN_VEHICLE_SEAT(int vehicle, int index) { return invoke<int>(0x388FDE9A, vehicle, index); }
int VEHICLE::_0xF7C6792D(int p0, int p1) { return invoke<int>(0xF7C6792D, p0, p1); }
int VEHICLE::GET_VEHICLE_LIGHTS_STATE(int p0, int p1, int p2) { return invoke<int>(0x7C278621, p0, p1, p2); }
int VEHICLE::IS_VEHICLE_TYRE_BURST(int vehicle, int wheelID, int p2) { return invoke<int>(0x48C80210, vehicle, wheelID, p2); }
void VEHICLE::SET_VEHICLE_FORWARD_SPEED(int vehicle, float speed) { invoke<void*>(0x69880D14, vehicle, speed); }
void VEHICLE::_0xCBC7D3C8(int p0, int p1, int p2, int p3) { invoke<void*>(0xCBC7D3C8, p0, p1, p2, p3); }
void VEHICLE::_0x943A6CFC(int p0, int p1) { invoke<void*>(0x943A6CFC, p0, p1); }
int VEHICLE::SET_PED_ENABLED_BIKE_RINGTONE(int p0, int p1) { return invoke<int>(0x7FB25568, p0, p1); }
int VEHICLE::_0x593143B9(int p0) { return invoke<int>(0x593143B9, p0); }
int VEHICLE::_0x70DD5E25(int p0) { return invoke<int>(0x70DD5E25, p0); }
int VEHICLE::_0xFBF5536A(int p0, int p1) { return invoke<int>(0xFBF5536A, p0, p1); }
void VEHICLE::_0x20AB5783(int p0, int p1) { invoke<void*>(0x20AB5783, p0, p1); }
void VEHICLE::_0x0F11D01F(int p0) { invoke<void*>(0x0F11D01F, p0); }
void VEHICLE::_0xAE040377(int p0, int p1) { invoke<void*>(0xAE040377, p0, p1); }
void VEHICLE::_0x4C0E4031(int p0, int p1) { invoke<void*>(0x4C0E4031, p0, p1); }
int VEHICLE::_0x6346B7CC(int p0) { return invoke<int>(0x6346B7CC, p0); }
void VEHICLE::_0xCCB41A55(int p0, int p1) { invoke<void*>(0xCCB41A55, p0, p1); }
void VEHICLE::SET_VEHICLE_TYRE_BURST(int p0, int p1, int p2, int p3) { invoke<void*>(0x89D28068, p0, p1, p2, p3); }
void VEHICLE::SET_VEHICLE_DOORS_SHUT(int vehicle, int index) { invoke<void*>(0xBB1FF6E7, vehicle, index); }
void VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(int vehicle, int value) { invoke<void*>(0xA198DB54, vehicle, value); }
int VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(int vehicle) { return invoke<int>(0x4D76CD2F, vehicle); }
void VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(int vehicle, int enabled) { invoke<void*>(0x829ED654, vehicle, enabled); }
void VEHICLE::SET_VEHICLE_DOOR_OPEN(int vehicle, int doorIndex, int loose, int openInstantly) { invoke<void*>(0xBB75D38B, vehicle, doorIndex, loose, openInstantly); }
void VEHICLE::REMOVE_VEHICLE_WINDOW(int vehicle, int windowIndex) { invoke<void*>(0xBB8104A3, vehicle, windowIndex); }
void VEHICLE::ROLL_DOWN_WINDOWS(int vehicle) { invoke<void*>(0x51A16DC6, vehicle); }
void VEHICLE::ROLL_DOWN_WINDOW(int vehicle, int windowIndex) { invoke<void*>(0xF840134C, vehicle, windowIndex); }
void VEHICLE::ROLL_UP_WINDOW(int vehicle, int windowIndex) { invoke<void*>(0x83B7E06A, vehicle, windowIndex); }
void VEHICLE::SMASH_VEHICLE_WINDOW(int vehicle, int index) { invoke<void*>(0xDDD9A8C2, vehicle, index); }
void VEHICLE::FIX_VEHICLE_WINDOW(int vehicle, int index) { invoke<void*>(0x6B8E990D, vehicle, index); }
void VEHICLE::_DETACH_VEHICLE_WINDSCREEN(int vehicleHandle) { invoke<void*>(0xCC95C96B, vehicleHandle); }
void VEHICLE::_0xFDA7B6CA(int p0, int p1, int p2, int p3) { invoke<void*>(0xFDA7B6CA, p0, p1, p2, p3); }
void VEHICLE::SET_VEHICLE_LIGHTS(int p0, int p1) { invoke<void*>(0xE8930226, p0, p1); }
void VEHICLE::_0x4221E435(int p0, int p1) { invoke<void*>(0x4221E435, p0, p1); }
void VEHICLE::SET_VEHICLE_ALARM(int vehicle, int state) { invoke<void*>(0x24877D84, vehicle, state); }
void VEHICLE::START_VEHICLE_ALARM(int vehicle) { invoke<void*>(0x5B451FF7, vehicle); }
int VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(int vehicle) { return invoke<int>(0xF2630A4C, vehicle); }
void VEHICLE::SET_VEHICLE_INTERIORLIGHT(int vehicle, int Toggle) { invoke<void*>(0x9AD1FE1E, vehicle, Toggle); }
void VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(int vehicle, float multiplier) { invoke<void*>(0x48039D6A, vehicle, multiplier); }
void VEHICLE::ATTACH_VEHICLE_TO_TRAILER(int p0, int p1, int p2) { invoke<void*>(0x2133977F, p0, p1, p2); }
void VEHICLE::_0x12AC1A16(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0x12AC1A16, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void VEHICLE::_0x40C4763F(int p0, int p1, int p2) { invoke<void*>(0x40C4763F, p0, p1, p2); }
void VEHICLE::DETACH_VEHICLE_FROM_TRAILER(int p0) { invoke<void*>(0xB5DBF91D, p0); }
int VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(int vehicle) { return invoke<int>(0xE142BBCC, vehicle); }
void VEHICLE::_0xE74E85CE(int p0, int p1) { invoke<void*>(0xE74E85CE, p0, p1); }
void VEHICLE::_0x06C47A6F(int p0) { invoke<void*>(0x06C47A6F, p0); }
void VEHICLE::SET_VEHICLE_TYRE_FIXED(int vehicle, int tyreIndex) { invoke<void*>(0xA42EFA6B, vehicle, tyreIndex); }
void VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(int vehicle, char* plateText) { invoke<void*>(0x400F9556, vehicle, plateText); }
char* VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(int vehicle) { return invoke<char*>(0xE8522D58, vehicle); }
int VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0xD24BC1AE); }
void VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(int vehicle, int PlateType) { invoke<void*>(0xA1A1890E, vehicle, PlateType); }
int VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(int vehicle) { return invoke<int>(0x499747B6, vehicle); }
void VEHICLE::SET_RANDOM_TRAINS(int p0) { invoke<void*>(0xD461CA7F, p0); }
int VEHICLE::CREATE_MISSION_TRAIN(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xD4C2EAFD, p0, p1, p2, p3, p4); }
void VEHICLE::SWITCH_TRAIN_TRACK(int p0, int p1) { invoke<void*>(0x68BFDD61, p0, p1); }
void VEHICLE::_0xD5774FB7(int p0, int p1) { invoke<void*>(0xD5774FB7, p0, p1); }
void VEHICLE::DELETE_ALL_TRAINS() { invoke<void*>(0x83DE7ABF); }
void VEHICLE::SET_TRAIN_SPEED(int p0, int p1) { invoke<void*>(0xDFC35E4D, p0, p1); }
void VEHICLE::SET_TRAIN_CRUISE_SPEED(int p0, int p1) { invoke<void*>(0xB507F51D, p0, p1); }
void VEHICLE::SET_RANDOM_BOATS(int p0) { invoke<void*>(0xB505BD89, p0); }
void VEHICLE::SET_GARBAGE_TRUCKS(int p0) { invoke<void*>(0xD9ABB0FF, p0); }
int VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(int p0) { return invoke<int>(0x5D91D9AC, p0); }
int VEHICLE::GET_VEHICLE_RECORDING_ID(int p0, int p1) { return invoke<int>(0x328D601D, p0, p1); }
void VEHICLE::REQUEST_VEHICLE_RECORDING(int p0, int p1) { invoke<void*>(0x91AFEFD9, p0, p1); }
int VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(int p0, int p1) { return invoke<int>(0xF52CD7F5, p0, p1); }
void VEHICLE::REMOVE_VEHICLE_RECORDING(int p0, int p1) { invoke<void*>(0xD3C05B00, p0, p1); }
Vector3 VEHICLE::_0xF31973BB(int p0, int p1) { return invoke<Vector3>(0xF31973BB, p0, p1); }
Vector3 VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int p0, int p1, int p2) { return invoke<Vector3>(0x7178558D, p0, p1, p2); }
Vector3 VEHICLE::_0x4D1C15C2(int p0, int p1) { return invoke<Vector3>(0x4D1C15C2, p0, p1); }
Vector3 VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int p0, int p1, int p2) { return invoke<Vector3>(0xD96DEC68, p0, p1, p2); }
int VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(int p0) { return invoke<int>(0x7116785E, p0); }
int VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(int p0, int p1) { return invoke<int>(0x5B35EEB7, p0, p1); }
int VEHICLE::GET_POSITION_IN_RECORDING(int p0) { return invoke<int>(0x7DCD644C, p0); }
int VEHICLE::GET_TIME_POSITION_IN_RECORDING(int p0) { return invoke<int>(0xF8C3E4A2, p0); }
void VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(int p0, int p1, int p2, int p3) { invoke<void*>(0xCF614CA8, p0, p1, p2, p3); }
void VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x4E721AD2, p0, p1, p2, p3, p4, p5); }
void VEHICLE::_0x01B91CD0(int p0, int p1) { invoke<void*>(0x01B91CD0, p0, p1); }
void VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(int p0) { invoke<void*>(0xAE99C57C, p0); }
void VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(int p0) { invoke<void*>(0xCCF54912, p0); }
void VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(int p0) { invoke<void*>(0x59060F75, p0); }
int VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(int p0) { return invoke<int>(0x61F7650D, p0); }
int VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(int p0) { return invoke<int>(0x63022C58, p0); }
int VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(int p0) { return invoke<int>(0xA3F44390, p0); }
void VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(int p0) { invoke<void*>(0x8DEA18C8, p0); }
void VEHICLE::SET_PLAYBACK_SPEED(int p0, float speed) { invoke<void*>(0x684E26E4, p0, speed); }
void VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x8DE8E24E, p0, p1, p2, p3, p4); }
void VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(int p0, int p1) { invoke<void*>(0xCF3EFA4B, p0, p1); }
void VEHICLE::SET_PLAYBACK_TO_USE_AI(int p0, int p1) { invoke<void*>(0xB536CCD7, p0, p1); }
void VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(int p0, int p1, int p2, int p3) { invoke<void*>(0x0C8ABAA4, p0, p1, p2, p3); }
void VEHICLE::_0x943A58EB(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x943A58EB, p0, p1, p2, p3, p4); }
void VEHICLE::_0x5C9F477C(int p0, int p1, int p2, int p3) { invoke<void*>(0x5C9F477C, p0, p1, p2, p3); }
void VEHICLE::_0xCD83C393(int p0, int p1, int p2, int p3) { invoke<void*>(0xCD83C393, p0, p1, p2, p3); }
void VEHICLE::_0x2EF8435C(int p0, int p1) { invoke<void*>(0x2EF8435C, p0, p1); }
void VEHICLE::EXPLODE_VEHICLE_IN_CUTSCENE(int p0, int p1) { invoke<void*>(0xA85207B5, p0, p1); }
void VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0xC8B789AD, p0, p1, p2, p3, p4, p5, p6); }
void VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(int p0, int p1) { invoke<void*>(0x42A08C9B, p0, p1); }
int VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5) { return invoke<int>(0x57216D03, p0, p1, p2, p3, p4, p5); }
int VEHICLE::GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<int>(0xDCADEB66, p0, p1, p2, p3, p4, p5, p6); }
int VEHICLE::GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<int>(0xD6343F6B, p0, p1, p2, p3, p4, p5, p6); }
int VEHICLE::GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, int hash, int unk1) { return invoke<int>(0xD7E26B2C, x, y, z, radius, hash, unk1); }
int VEHICLE::GET_TRAIN_CARRIAGE(int p0, int p1) { return invoke<int>(0x2544E7A6, p0, p1); }
void VEHICLE::DELETE_MISSION_TRAIN(int p0) { invoke<void*>(0x86C9497D, p0); }
void VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(int p0, int p1) { invoke<void*>(0x19808560, p0, p1); }
void VEHICLE::SET_MISSION_TRAIN_COORDS(int p0, int p1, int p2, int p3) { invoke<void*>(0xD6D70803, p0, p1, p2, p3); }
int VEHICLE::IS_THIS_MODEL_A_BOAT(int model) { return invoke<int>(0x10F6085C, model); }
int VEHICLE::IS_THIS_MODEL_A_PLANE(int model) { return invoke<int>(0x3B3907BB, model); }
int VEHICLE::IS_THIS_MODEL_A_HELI(int model) { return invoke<int>(0x8AF7F568, model); }
int VEHICLE::IS_THIS_MODEL_A_CAR(int model) { return invoke<int>(0x60E4C22F, model); }
int VEHICLE::IS_THIS_MODEL_A_TRAIN(int model) { return invoke<int>(0xF87DCFFD, model); }
int VEHICLE::IS_THIS_MODEL_A_BIKE(int model) { return invoke<int>(0x7E702CDD, model); }
int VEHICLE::IS_THIS_MODEL_A_BICYCLE(int model) { return invoke<int>(0x328E6FF5, model); }
int VEHICLE::IS_THIS_MODEL_A_QUADBIKE(int model) { return invoke<int>(0xC1625277, model); }
void VEHICLE::SET_HELI_BLADES_FULL_SPEED(int p0) { invoke<void*>(0x033A9408, p0); }
void VEHICLE::SET_HELI_BLADES_SPEED(int vehicle, float speed) { invoke<void*>(0x5C7D4EA9, vehicle, speed); }
void VEHICLE::_0x1128A45B(int p0, int p1, int p2) { invoke<void*>(0x1128A45B, p0, p1, p2); }
void VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(int vehicle, int state) { invoke<void*>(0x64B70B1D, vehicle, state); }
void VEHICLE::_0x486C1280(int p0, int p1) { invoke<void*>(0x486C1280, p0, p1); }
void VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(int vehicle, int state) { invoke<void*>(0xC5D94017, vehicle, state); }
void VEHICLE::_0x009AB49E(int p0, int p1) { invoke<void*>(0x009AB49E, p0, p1); }
void VEHICLE::_0x758C5E2E(int p0, int p1) { invoke<void*>(0x758C5E2E, p0, p1); }
float VEHICLE::GET_VEHICLE_DIRT_LEVEL(int vehicle) { return invoke<float>(0xFD15C065, vehicle); }
void VEHICLE::SET_VEHICLE_DIRT_LEVEL(int Vehicle, float DirtLVL) { invoke<void*>(0x2B39128B, Vehicle, DirtLVL); }
int VEHICLE::_0xDAC523BC(int p0) { return invoke<int>(0xDAC523BC, p0); }
int VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(int vehicle, int doorIndex) { return invoke<int>(0xC2385B6F, vehicle, doorIndex); }
void VEHICLE::SET_VEHICLE_ENGINE_ON(int veh, int engineState, int p3) { invoke<void*>(0x7FBC86F1, veh, engineState, p3); }
void VEHICLE::SET_VEHICLE_UNDRIVEABLE(int vehicle, int state) { invoke<void*>(0x48D02A4E, vehicle, state); }
void VEHICLE::SET_VEHICLE_PROVIDES_COVER(int p0, int p1) { invoke<void*>(0xEFC01CA9, p0, p1); }
void VEHICLE::SET_VEHICLE_DOOR_CONTROL(int p0, int p1, int p2, int p3) { invoke<void*>(0x572DD360, p0, p1, p2, p3); }
void VEHICLE::SET_VEHICLE_DOOR_LATCHED(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x4EB7BBFC, p0, p1, p2, p3, p4); }
int VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(int p0, int p1) { return invoke<int>(0x0E399C26, p0, p1); }
void VEHICLE::SET_VEHICLE_DOOR_SHUT(int vehicle, int doorIndex, int closeInstantly) { invoke<void*>(0x142606BD, vehicle, doorIndex, closeInstantly); }
void VEHICLE::SET_VEHICLE_DOOR_BROKEN(int veh, int doorIndex, int unk) { invoke<void*>(0x8147FEA7, veh, doorIndex, unk); }
void VEHICLE::SET_VEHICLE_CAN_BREAK(int vehicle, int Toggle) { invoke<void*>(0x90A810D1, vehicle, Toggle); }
int VEHICLE::DOES_VEHICLE_HAVE_ROOF(int vehicle) { return invoke<int>(0xDB817403, vehicle); }
int VEHICLE::IS_BIG_VEHICLE(int vehicle) { return invoke<int>(0x9CDBA8DE, vehicle); }
int VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(int p0) { return invoke<int>(0xF2442EE2, p0); }
void VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(int p0, int p1) { invoke<void*>(0xA557AEAD, p0, p1); }
int VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(int p0) { return invoke<int>(0x77AC1B4C, p0); }
void VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(int p0, int p1) { invoke<void*>(0x14413319, p0, p1); }
void VEHICLE::_0xA6D8D7A5(int p0, int p1) { invoke<void*>(0xA6D8D7A5, p0, p1); }
void VEHICLE::_0xACAB8FF3(int p0, int p1) { invoke<void*>(0xACAB8FF3, p0, p1); }
void VEHICLE::_0xF0E5C41D(int p0, int p1) { invoke<void*>(0xF0E5C41D, p0, p1); }
void VEHICLE::_0x2F98B4B7(int p0, int p1) { invoke<void*>(0x2F98B4B7, p0, p1); }
void VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(int b0, int* p1, int* p2) { invoke<void*>(0xE2C45631, b0, p1, p2); }
int VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(int p0) { return invoke<int>(0x0D72CEF2, p0); }
int VEHICLE::IS_VEHICLE_DOOR_DAMAGED(int veh, int doorID) { return invoke<int>(0x4999E3C3, veh, doorID); }
void VEHICLE::_0x065B92B3(int p0, int p1, int p2) { invoke<void*>(0x065B92B3, p0, p1, p2); }
int VEHICLE::_0xB3A2CC4F(int p0, int p1) { return invoke<int>(0xB3A2CC4F, p0, p1); }
int VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(int p0, int p1) { return invoke<int>(0xAF25C027, p0, p1); }
int VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(int x1, int x2, int y1, int y2, int z1, int z2) { return invoke<int>(0xFB16C6D1, x1, x2, y1, y2, z1, z2); }
int VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(int vehicle) { return invoke<int>(0x10089F8E, vehicle); }
int VEHICLE::GET_VEHICLE_LAYOUT_HASH(int p0) { return invoke<int>(0xE0B35187, p0); }
void VEHICLE::SET_RENDER_TRAIN_AS_DERAILED(int p0, int p1) { invoke<void*>(0x899D9092, p0, p1); }
void VEHICLE::SET_VEHICLE_EXTRA_COLOURS(int p0, int p1, int p2) { invoke<void*>(0x515DB2A0, p0, p1, p2); }
void VEHICLE::GET_VEHICLE_EXTRA_COLOURS(int p0, int p1, int p2) { invoke<void*>(0x80E4659B, p0, p1, p2); }
void VEHICLE::STOP_ALL_GARAGE_ACTIVITY() { invoke<void*>(0x17A0BCE5); }
void VEHICLE::SET_VEHICLE_FIXED(int Vehicle) { invoke<void*>(0x17469AA1, Vehicle); }
void VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(int Vehicle) { invoke<void*>(0xDD2920C8, Vehicle); }
void VEHICLE::_0x88F0F7E7(int p0, int p1) { invoke<void*>(0x88F0F7E7, p0, p1); }
void VEHICLE::_0x90D6EE57(int p0, int p1) { invoke<void*>(0x90D6EE57, p0, p1); }
void VEHICLE::_0xC40192B5(int p0, int p1) { invoke<void*>(0xC40192B5, p0, p1); }
void VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(int p0, int p1) { invoke<void*>(0xAD3E05F2, p0, p1); }
void VEHICLE::_0x1784BA1A(int p0, int p1) { invoke<void*>(0x1784BA1A, p0, p1); }
void VEHICLE::_0x40C323AE(int p0, int p1) { invoke<void*>(0x40C323AE, p0, p1); }
void VEHICLE::_0x847F1304(int p0, int p1) { invoke<void*>(0x847F1304, p0, p1); }
void VEHICLE::_0xCBD98BA1(int p0, int p1) { invoke<void*>(0xCBD98BA1, p0, p1); }
void VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(int x1, int x2, int y1, int y2, int z1, int z2) { invoke<void*>(0x42CC15E0, x1, x2, y1, y2, z1, z2); }
void VEHICLE::SET_VEHICLE_STEER_BIAS(int p0, int p1) { invoke<void*>(0x7357C1EB, p0, p1); }
int VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(int p0, int p1) { return invoke<int>(0x042098B5, p0, p1); }
void VEHICLE::SET_VEHICLE_EXTRA(int vehicle, int ExtraID, int Toggle) { invoke<void*>(0x642D065C, vehicle, ExtraID, Toggle); }
int VEHICLE::DOES_EXTRA_EXIST(int p0, int p1) { return invoke<int>(0x409411CC, p0, p1); }
void VEHICLE::SET_CONVERTIBLE_ROOF(int p0, int p1) { invoke<void*>(0xC87B6A51, p0, p1); }
void VEHICLE::LOWER_CONVERTIBLE_ROOF(int p0, int p1) { invoke<void*>(0xC5F72EAE, p0, p1); }
void VEHICLE::RAISE_CONVERTIBLE_ROOF(int p0, int p1) { invoke<void*>(0xA4E4CBA3, p0, p1); }
int VEHICLE::GET_CONVERTIBLE_ROOF_STATE(int p0) { return invoke<int>(0x1B09714D, p0); }
int VEHICLE::IS_VEHICLE_A_CONVERTIBLE(int p0, int p1) { return invoke<int>(0x6EF54490, p0, p1); }
int VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(int p0) { return invoke<int>(0x69200FA4, p0); }
void VEHICLE::SET_VEHICLE_DAMAGE(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x21B458B2, p0, p1, p2, p3, p4, p5, p6); }
float VEHICLE::GET_VEHICLE_ENGINE_HEALTH(int vehicle) { return invoke<float>(0x8880038A, vehicle); }
void VEHICLE::SET_VEHICLE_ENGINE_HEALTH(int vehicle, float health) { invoke<void*>(0x1B760FB5, vehicle, health); }
float VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(int vehicle) { return invoke<float>(0xE41595CE, vehicle); }
void VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(int vehicle, float health) { invoke<void*>(0x660A3692, vehicle, health); }
int VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(int p0, int p1, int p2) { return invoke<int>(0x2FCF58C1, p0, p1, p2); }
void VEHICLE::RESET_VEHICLE_STUCK_TIMER(int p0, int p1) { invoke<void*>(0xEF2A6016, p0, p1); }
int VEHICLE::IS_VEHICLE_DRIVEABLE(int p0, int p1) { return invoke<int>(0x41A7267A, p0, p1); }
void VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(int p0, int p1) { invoke<void*>(0xB4D3DBFB, p0, p1); }
void VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(int p0, int p1) { invoke<void*>(0xD8260751, p0, p1); }
void VEHICLE::START_VEHICLE_HORN(int p0, int p1, int p2, int p3) { invoke<void*>(0x0DF5ADB3, p0, p1, p2, p3); }
void VEHICLE::_0x968E5770(int p0, int p1) { invoke<void*>(0x968E5770, p0, p1); }
void VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(int p0, int p1) { invoke<void*>(0x0D1CBC65, p0, p1); }
int VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(int p0) { return invoke<int>(0xEC86DF39, p0); }
Vector3 VEHICLE::GET_VEHICLE_DEFORMATION_AT_POS(int p0, int p1, int p2, int p3) { return invoke<Vector3>(0xABF02075, p0, p1, p2, p3); }
void VEHICLE::SET_VEHICLE_LIVERY(int vehicle, int LiveryIndex) { invoke<void*>(0x7AD87059, vehicle, LiveryIndex); }
int VEHICLE::GET_VEHICLE_LIVERY(int p0) { return invoke<int>(0xEC82A51D, p0); }
int VEHICLE::GET_VEHICLE_LIVERY_COUNT(int p0) { return invoke<int>(0xFB0CA947, p0); }
int VEHICLE::IS_VEHICLE_WINDOW_INTACT(int p0, int p1) { return invoke<int>(0xAC4EF23D, p0, p1); }
int VEHICLE::_0xBB619744(int p0) { return invoke<int>(0xBB619744, p0); }
int VEHICLE::_0x648E685A(int p0) { return invoke<int>(0x648E685A, p0); }
void VEHICLE::RESET_VEHICLE_WHEELS(int p0, int p1) { invoke<void*>(0xD5FFE779, p0, p1); }
int VEHICLE::IS_HELI_PART_BROKEN(int p0, int p1, int p2, int p3) { return invoke<int>(0xF4E4C439, p0, p1, p2, p3); }
int VEHICLE::_0xF01E2AAB(int p0) { return invoke<int>(0xF01E2AAB, p0); }
int VEHICLE::_0xA41BC13D(int p0) { return invoke<int>(0xA41BC13D, p0); }
int VEHICLE::_0x8A68388F(int p0) { return invoke<int>(0x8A68388F, p0); }
int VEHICLE::WAS_COUNTER_ACTIVATED(int p0, int p1) { return invoke<int>(0x2916D69B, p0, p1); }
void VEHICLE::SET_VEHICLE_NAME_DEBUG(int p0, int p1) { invoke<void*>(0xA712FF5C, p0, p1); }
void VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(int p0, int p1) { invoke<void*>(0x38CC692B, p0, p1); }
void VEHICLE::_0xC306A9A3(int p0, int p1) { invoke<void*>(0xC306A9A3, p0, p1); }
void VEHICLE::_0x95A9ACCB(int vehicle, int p1) { invoke<void*>(0x95A9ACCB, vehicle, p1); }
void VEHICLE::_0x24F873FB(int p0, int p1) { invoke<void*>(0x24F873FB, p0, p1); }
int VEHICLE::_0xA6F02670(int p0) { return invoke<int>(0xA6F02670, p0); }
int VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(int p0, int x, int y, int z) { return invoke<int>(0x2867A834, p0, x, y, z); }
void VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(int p0) { invoke<void*>(0x9DA21956, p0); }
void VEHICLE::REMOVE_VEHICLE_HIGH_DETAIL_MODEL(int p0) { invoke<void*>(0x382BE070, p0); }
int VEHICLE::IS_VEHICLE_HIGH_DETAIL(int p0) { return invoke<int>(0x55D41928, p0); }
void VEHICLE::REQUEST_VEHICLE_ASSET(int VehicleHash, int p1) { invoke<void*>(0x902B4F06, VehicleHash, p1); }
int VEHICLE::HAS_VEHICLE_ASSET_LOADED(int p0) { return invoke<int>(0x8DAAC3CB, p0); }
void VEHICLE::REMOVE_VEHICLE_ASSET(int p0) { invoke<void*>(0x9620E9C6, p0); }
void VEHICLE::_0x88236E22(int p0, int p1) { invoke<void*>(0x88236E22, p0, p1); }
void VEHICLE::ATTACH_VEHICLE_TO_TOW_TRUCK(int entity, int entity2, int instant, float x, float y, float z) { invoke<void*>(0x8151571A, entity, entity2, instant, x, y, z); }
void VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(int p0, int p1) { invoke<void*>(0xC666CF33, p0, p1); }
int VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(int p0) { return invoke<int>(0x3BF93651, p0); }
int VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(int p0, int p1) { return invoke<int>(0x9699CFDC, p0, p1); }
int VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(int p0) { return invoke<int>(0x11EC7844, p0); }
int VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(int p0, int p1, int p2) { return invoke<int>(0x4273A8D3, p0, p1, p2); }
void VEHICLE::_0xED23C8A3(int p0, int p1, int p2) { invoke<void*>(0xED23C8A3, p0, p1, p2); }
void VEHICLE::_0xB1A52EF7(int p0, int p1, int p2) { invoke<void*>(0xB1A52EF7, p0, p1, p2); }
void VEHICLE::_0xF30C566F(int p0, int p1) { invoke<void*>(0xF30C566F, p0, p1); }
void VEHICLE::_0xA7DF64D7(int p0, int p1) { invoke<void*>(0xA7DF64D7, p0, p1); }
void VEHICLE::_0xDD7936F5(int p0, int p1) { invoke<void*>(0xDD7936F5, p0, p1); }
int VEHICLE::_0x34E02FCD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x34E02FCD, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void VEHICLE::SET_VEHICLE_BURNOUT(int p0, int p1) { invoke<void*>(0x9B6EF0EA, p0, p1); }
int VEHICLE::IS_VEHICLE_IN_BURNOUT(int vehicle) { return invoke<int>(0x6632BC12, vehicle); }
void VEHICLE::SET_VEHICLE_REDUCE_GRIP(int Vehicle, int Toggle) { invoke<void*>(0x90D3A0D9, Vehicle, Toggle); }
void VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(int vehicle, int turnSignal, int Toggle) { invoke<void*>(0xA6073B5D, vehicle, turnSignal, Toggle); }
void VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(int vehicle, int Toggle) { invoke<void*>(0x6D9BA11E, vehicle, Toggle); }
void VEHICLE::SET_VEHICLE_HANDBRAKE(int vehicle, int Toggle) { invoke<void*>(0xBA729A25, vehicle, Toggle); }
void VEHICLE::_0x37BC6ACB() { invoke<void*>(0x37BC6ACB); }
int VEHICLE::_0x71D898EF() { return invoke<int>(0x71D898EF); }
void VEHICLE::_0x0B0523B0(int p0) { invoke<void*>(0x0B0523B0, p0); }
int VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(int p0, int p1) { return invoke<int>(0xAE84D758, p0, p1); }
void VEHICLE::_0x0B200CE2(int p0, int p1) { invoke<void*>(0x0B200CE2, p0, p1); }
void VEHICLE::SET_VEHICLE_RUDDER_BROKEN(int p0, int p1) { invoke<void*>(0x3FAC3CD4, p0, p1); }
void VEHICLE::_0x0858678C(int p0, int p1) { invoke<void*>(0x0858678C, p0, p1); }
int VEHICLE::_0x7D1A0616(int p0) { return invoke<int>(0x7D1A0616, p0); }
int VEHICLE::GET_VEHICLE_MAX_BRAKING(int p0) { return invoke<int>(0x03B926F6, p0); }
int VEHICLE::GET_VEHICLE_MAX_TRACTION(int p0) { return invoke<int>(0x7E5A1587, p0); }
int VEHICLE::GET_VEHICLE_ACCELERATION(int p0) { return invoke<int>(0x00478321, p0); }
int VEHICLE::_0x8F291C4A(int p0) { return invoke<int>(0x8F291C4A, p0); }
int VEHICLE::GET_VEHICLE_MODEL_MAX_BRAKING(int p0) { return invoke<int>(0x7EF02883, p0); }
int VEHICLE::_0xF3A7293F(int p0) { return invoke<int>(0xF3A7293F, p0); }
int VEHICLE::GET_VEHICLE_MODEL_MAX_TRACTION(int p0) { return invoke<int>(0x7F985597, p0); }
int VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(int p0) { return invoke<int>(0x29CB3537, p0); }
int VEHICLE::_0x37FBA7BC(int p0) { return invoke<int>(0x37FBA7BC, p0); }
int VEHICLE::_0x95BB67EB(int p0) { return invoke<int>(0x95BB67EB, p0); }
int VEHICLE::_0x87C5D271(int p0) { return invoke<int>(0x87C5D271, p0); }
int VEHICLE::_0xCE67162C(int p0) { return invoke<int>(0xCE67162C, p0); }
int VEHICLE::GET_VEHICLE_CLASS_MAX_TRACTION(int p0) { return invoke<int>(0x5B4FDC16, p0); }
int VEHICLE::GET_VEHICLE_CLASS_MAX_AGILITY(int p0) { return invoke<int>(0x45F2BD83, p0); }
int VEHICLE::GET_VEHICLE_CLASS_MAX_ACCELERATION(int p0) { return invoke<int>(0x3E220A9B, p0); }
int VEHICLE::GET_VEHICLE_CLASS_MAX_BRAKING(int p0) { return invoke<int>(0xD08CC1A5, p0); }
int VEHICLE::_0xD6685803(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xD6685803, p0, p1, p2, p3, p4, p5); }
int VEHICLE::_0x0C0332A6(int p0) { return invoke<int>(0x0C0332A6, p0); }
void VEHICLE::_0x6574041D(int p0) { invoke<void*>(0x6574041D, p0); }
void VEHICLE::_0xF8EC5751(int p0) { invoke<void*>(0xF8EC5751, p0); }
int VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(int vehicle) { return invoke<int>(0xADAF3513, vehicle); }
void VEHICLE::SET_VEHICLE_SEARCHLIGHT(int p0, int p1, int p2) { invoke<void*>(0xE2C0DD8A, p0, p1, p2); }
int VEHICLE::_0xAB0E79EB(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xAB0E79EB, p0, p1, p2, p3, p4); }
int VEHICLE::CAN_SHUFFLE_SEAT(int p0, int p1) { return invoke<int>(0xB3EB01ED, p0, p1); }
int VEHICLE::GET_NUM_MOD_KITS(int p0) { return invoke<int>(0xE4903AA0, p0); }
void VEHICLE::SET_VEHICLE_MOD_KIT(int vehicle, int unknown) { invoke<void*>(0xB8132158, vehicle, unknown); }
int VEHICLE::GET_VEHICLE_MOD_KIT(int p0) { return invoke<int>(0x9FE60927, p0); }
int VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(int p0) { return invoke<int>(0xE5F76765, p0); }
int VEHICLE::GET_VEHICLE_WHEEL_TYPE(int vehicle) { return invoke<int>(0xDA58D7AE, vehicle); }
void VEHICLE::SET_VEHICLE_WHEEL_TYPE(int vehicle, int WheelType) { invoke<void*>(0x64BDAAAD, vehicle, WheelType); }
int VEHICLE::GET_NUM_MOD_COLORS(int p0, int p1) { return invoke<int>(0x73722CD9, p0, p1); }
void VEHICLE::SET_VEHICLE_MOD_COLOR_1(int vehicle, int r, int g, int b) { invoke<void*>(0xCBE9A54D, vehicle, r, g, b); }
void VEHICLE::SET_VEHICLE_MOD_COLOR_2(int p0, int p1, int p2) { invoke<void*>(0xC32613C2, p0, p1, p2); }
void VEHICLE::GET_VEHICLE_MOD_COLOR_1(int p0, int p1, int p2, int p3) { invoke<void*>(0xE625510A, p0, p1, p2, p3); }
void VEHICLE::GET_VEHICLE_MOD_COLOR_2(int p0, int p1, int p2) { invoke<void*>(0x9B76BB8E, p0, p1, p2); }
int VEHICLE::_0x9A0840FD(int p0, int p1) { return invoke<int>(0x9A0840FD, p0, p1); }
int VEHICLE::_0x9BDC0B49(int p0) { return invoke<int>(0x9BDC0B49, p0); }
int VEHICLE::_0x112D637A(int p0) { return invoke<int>(0x112D637A, p0); }
void VEHICLE::SET_VEHICLE_MOD(int vehicle, int ModType, int ModIndex, int Variation) { invoke<void*>(0xB52E5ED5, vehicle, ModType, ModIndex, Variation); }
int VEHICLE::GET_VEHICLE_MOD(int vehicle, int Modtype) { return invoke<int>(0xDC520069, vehicle, Modtype); }
int VEHICLE::GET_VEHICLE_MOD_VARIATION(int vehicle, int ModType) { return invoke<int>(0xC1B92003, vehicle, ModType); }
int VEHICLE::GET_NUM_VEHICLE_MODS(int vehicle, int ModType) { return invoke<int>(0x8A814FF9, vehicle, ModType); }
void VEHICLE::REMOVE_VEHICLE_MOD(int p0, int p1) { invoke<void*>(0x9CC80A43, p0, p1); }
void VEHICLE::TOGGLE_VEHICLE_MOD(int vehicle, int Mod, int Toggle) { invoke<void*>(0xD095F811, vehicle, Mod, Toggle); }
int VEHICLE::IS_TOGGLE_MOD_ON(int p0, int p1) { return invoke<int>(0xF0E1689F, p0, p1); }
char* VEHICLE::GET_MOD_TEXT_LABEL(int vehicle, int ModType, int ModValue) { return invoke<char*>(0x0BA39CA7, vehicle, ModType, ModValue); }
char* VEHICLE::GET_MOD_SLOT_NAME(int vehicle, int ModType) { return invoke<char*>(0x5E113483, vehicle, ModType); }
int VEHICLE::GET_LIVERY_NAME(int p0, int p1) { return invoke<int>(0xED80B5BE, p0, p1); }
int VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(int p0, int p1, int p2) { return invoke<int>(0x73AE5505, p0, p1, p2); }
int VEHICLE::_0x94850968(int p0, int p1, int p2) { return invoke<int>(0x94850968, p0, p1, p2); }
void VEHICLE::PRELOAD_VEHICLE_MOD(int p0, int p1, int p2) { invoke<void*>(0x6EA5F4A8, p0, p1, p2); }
int VEHICLE::HAS_PRELOAD_MODS_FINISHED(int p0) { return invoke<int>(0xA8A0D246, p0); }
void VEHICLE::RELEASE_PRELOAD_MODS(int p0) { invoke<void*>(0xD442521F, p0); }
void VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(int vehicle, int r, int g, int b) { invoke<void*>(0x3EDEC0DB, vehicle, r, g, b); }
void VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(int vehicle, int R, int G, int B) { invoke<void*>(0x75280015, vehicle, R, G, B); }
void VEHICLE::SET_VEHICLE_WINDOW_TINT(int vehicle, int Tint) { invoke<void*>(0x497C8787, vehicle, Tint); }
int VEHICLE::GET_VEHICLE_WINDOW_TINT(int vehicle) { return invoke<int>(0x13D53892, vehicle); }
int VEHICLE::GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0x625C7B66); }
void VEHICLE::GET_VEHICLE_COLOR(int p0, int p1, int p2, int p3) { invoke<void*>(0x03BC8F1B, p0, p1, p2, p3); }
int VEHICLE::_0x749DEEA2(int p0) { return invoke<int>(0x749DEEA2, p0); }
int VEHICLE::GET_VEHICLE_CAUSE_OF_DESTRUCTION(int p0) { return invoke<int>(0x7F8C20DD, p0); }
int VEHICLE::_0xA0777943(int p0) { return invoke<int>(0xA0777943, p0); }
int VEHICLE::_0xF178390B(int p0) { return invoke<int>(0xF178390B, p0); }
void VEHICLE::_0xE943B09C(int vehicle, int multiplier) { invoke<void*>(0xE943B09C, vehicle, multiplier); }
void VEHICLE::_0xDF594D8D(int p0, int p1) { invoke<void*>(0xDF594D8D, p0, p1); }
void VEHICLE::_0x4D840FC4(int p0, int p1) { invoke<void*>(0x4D840FC4, p0, p1); }
int VEHICLE::_0x5AB26C2B(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0x5AB26C2B, p0, p1, p2, p3, p4, p5, p6); }
void VEHICLE::_0xEF05F807(int p0) { invoke<void*>(0xEF05F807, p0); }
int VEHICLE::_0xD656E7E5(int p0) { return invoke<int>(0xD656E7E5, p0); }
void VEHICLE::_0x642DA5AA(int vehicle, float p1) { invoke<void*>(0x642DA5AA, vehicle, p1); }
void VEHICLE::_0x04F5546C(int p0, int p1) { invoke<void*>(0x04F5546C, p0, p1); }
void VEHICLE::SET_VEHICLE_IS_WANTED(int p0, int p1) { invoke<void*>(0xDAA388E8, p0, p1); }
void VEHICLE::_0xA25CCB8C(int p0, int p1) { invoke<void*>(0xA25CCB8C, p0, p1); }
void VEHICLE::_0x00966934(int p0, int p1) { invoke<void*>(0x00966934, p0, p1); }
void VEHICLE::_0x113DF5FD(int p0, int p1) { invoke<void*>(0x113DF5FD, p0, p1); }
int VEHICLE::_0x7C8D6464(int p0) { return invoke<int>(0x7C8D6464, p0); }
void VEHICLE::DISABLE_PLANE_AILERON(int p0, int p1, int p2) { invoke<void*>(0x7E84C45C, p0, p1, p2); }
int VEHICLE::_0x7DC6D022(int p0) { return invoke<int>(0x7DC6D022, p0); }
void VEHICLE::_0xA03E42DF(int p0, int p1) { invoke<void*>(0xA03E42DF, p0, p1); }
void VEHICLE::_0x15D40761(int p0, int p1, int p2) { invoke<void*>(0x15D40761, p0, p1, p2); }
void VEHICLE::_0x1984F88D(int p0, int p1) { invoke<void*>(0x1984F88D, p0, p1); }
void VEHICLE::_0x3FBE904F(int p0) { invoke<void*>(0x3FBE904F, p0); }
void VEHICLE::_0xD1B71A25(int p0) { invoke<void*>(0xD1B71A25, p0); }
int VEHICLE::_0xFEB0C0C8() { return invoke<int>(0xFEB0C0C8); }
void VEHICLE::_0x08CD58F9(int p0, int p1) { invoke<void*>(0x08CD58F9, p0, p1); }
void VEHICLE::_0x8C4B63E2(int p0, int p1) { invoke<void*>(0x8C4B63E2, p0, p1); }
void VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(int p0, int p1) { invoke<void*>(0x569E5AE3, p0, p1); }
void VEHICLE::_0x1604C2F5(int p0, int p1) { invoke<void*>(0x1604C2F5, p0, p1); }
int VEHICLE::_0x8CDB0C09(int p0) { return invoke<int>(0x8CDB0C09, p0); }
int VEHICLE::_0xABC99E21(int p0) { return invoke<int>(0xABC99E21, p0); }
void VEHICLE::_0x900C878C(int p0, int p1) { invoke<void*>(0x900C878C, p0, p1); }
void VEHICLE::_0xB3200F72(int p0, int p1) { invoke<void*>(0xB3200F72, p0, p1); }
void VEHICLE::_0xBAE491C7(int p0, int p1) { invoke<void*>(0xBAE491C7, p0, p1); }
void VEHICLE::_0xF0E59BC1() { invoke<void*>(0xF0E59BC1); }
void VEHICLE::_0x929801C6(int p0) { invoke<void*>(0x929801C6, p0); }
void VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x2343FFDF, p0, p1, p2, p3, p4); }
int VEHICLE::_0x4A557117(int p0, int p1) { return invoke<int>(0x4A557117, p0, p1); }
void VEHICLE::_0xE0FC6A32(int p0, int p1) { invoke<void*>(0xE0FC6A32, p0, p1); }
void VEHICLE::_0x7D0DE7EA(int p0, int p1) { invoke<void*>(0x7D0DE7EA, p0, p1); }
int VEHICLE::GET_VEHICLE_PLATE_TYPE(int vehicle) { return invoke<int>(0x65CA9286, vehicle); }
void VEHICLE::TRACK_VEHICLE_VISIBILITY(int p0) { invoke<void*>(0x78122DC1, p0); }
int VEHICLE::IS_VEHICLE_VISIBLE(int p0) { return invoke<int>(0x7E0D6056, p0); }
void VEHICLE::SET_VEHICLE_GRAVITY(int Vehicle, int Toggle) { invoke<void*>(0x07B2A6DC, Vehicle, Toggle); }
void VEHICLE::_0xD2B8ACBD(int p0) { invoke<void*>(0xD2B8ACBD, p0); }
int VEHICLE::_0xA4A75FCF(int p0) { return invoke<int>(0xA4A75FCF, p0); }
void VEHICLE::_0x50F89338(int p0, int p1) { invoke<void*>(0x50F89338, p0, p1); }
void VEHICLE::_0xEB7D7C27(int p0, int p1) { invoke<void*>(0xEB7D7C27, p0, p1); }
int VEHICLE::_0x5EB00A6A(int p0) { return invoke<int>(0x5EB00A6A, p0); }
void VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(int p0, int p1) { invoke<void*>(0x081DAC12, p0, p1); }
void VEHICLE::_0x5BD8D82D(int p0, int p1, int p2) { invoke<void*>(0x5BD8D82D, p0, p1, p2); }
void VEHICLE::_0x450AD03A(int p0) { invoke<void*>(0x450AD03A, p0); }
int VEHICLE::_0xBD085DCA(int p0) { return invoke<int>(0xBD085DCA, p0); }
int VEHICLE::_0xABBDD5C6(int p0) { return invoke<int>(0xABBDD5C6, p0); }
void VEHICLE::_0x9B581DE7(int p0, int p1) { invoke<void*>(0x9B581DE7, p0, p1); }
int VEHICLE::IS_VEHICLE_STOLEN(int p0) { return invoke<int>(0x20B61DDE, p0); }
void VEHICLE::SET_VEHICLE_IS_STOLEN(int vehicle, int isStolen) { invoke<void*>(0x70912E42, vehicle, isStolen); }
void VEHICLE::_0xED159AE6(int p0, int p1) { invoke<void*>(0xED159AE6, p0, p1); }
int VEHICLE::_0xAF8CB3DF(int p0) { return invoke<int>(0xAF8CB3DF, p0); }
void VEHICLE::_0x45F72495(int p0) { invoke<void*>(0x45F72495, p0); }
void VEHICLE::DETACH_VEHICLE_FROM_CARGOBOB(int p0, int p1) { invoke<void*>(0x83D3D331, p0, p1); }
int VEHICLE::DETACH_VEHICLE_FROM_ANY_CARGOBOB(int p0) { return invoke<int>(0x50E0EABE, p0); }
int VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(int p0, int p1) { return invoke<int>(0x5DEEC76C, p0, p1); }
int VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(int p0) { return invoke<int>(0x301A1D24, p0); }
void VEHICLE::ATTACH_VEHICLE_TO_CARGOBOB(int entity, int entity2, int instant, float X, float y, float z) { invoke<void*>(0x607DC9D5, entity, entity2, instant, X, y, z); }
int VEHICLE::_0xAF769B81(int p0) { return invoke<int>(0xAF769B81, p0); }
void VEHICLE::_0x4D3C9A99(int p0) { invoke<void*>(0x4D3C9A99, p0); }
void VEHICLE::GET_CLOSEST_VEHICLE_TURNING_BLOODSPRAY(int p0) { invoke<void*>(0xA8211EE9, p0); }
void VEHICLE::GET_VEHICLE_HAS_BACK_RECURSIVE(int p0, int p1, int p2, int p3) { invoke<void*>(0x3A8AB081, p0, p1, p2, p3); }
int VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(int vehicle) { return invoke<int>(0xB2E1E1FB, vehicle); }
void VEHICLE::_0x2EC19A8B(int p0, int p1) { invoke<void*>(0x2EC19A8B, p0, p1); }
void VEHICLE::DISABLE_VEHICLE_WEAPON(int p0, int p1, int p2, int p3) { invoke<void*>(0xA688B7D1, p0, p1, p2, p3); }
void VEHICLE::_0x123E5B90(int p0, int p1) { invoke<void*>(0x123E5B90, p0, p1); }
void VEHICLE::_0xEBC225C1(int p0, int p1) { invoke<void*>(0xEBC225C1, p0, p1); }
int VEHICLE::GET_VEHICLE_CLASS(int vehicle) { return invoke<int>(0xC025338E, vehicle); }
int VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(int p0) { return invoke<int>(0xEA469980, p0); }
void VEHICLE::SET_PLAYERS_LAST_VEHICLE(int vehicle) { invoke<void*>(0xDE86447D, vehicle); }
void VEHICLE::_0x5130DB1E(int p0, int p1) { invoke<void*>(0x5130DB1E, p0, p1); }
void VEHICLE::_0xB6BE07E0(int p0, int p1) { invoke<void*>(0xB6BE07E0, p0, p1); }
void VEHICLE::_0x4BB5605D(int p0, int p1) { invoke<void*>(0x4BB5605D, p0, p1); }
void VEHICLE::_0x51E0064F(int p0, int p1) { invoke<void*>(0x51E0064F, p0, p1); }
void VEHICLE::_0xAEF9611C(int p0, int p1) { invoke<void*>(0xAEF9611C, p0, p1); }
void VEHICLE::_0x585E49B6(int p0, int p1) { invoke<void*>(0x585E49B6, p0, p1); }
void VEHICLE::_0x6E67FD35(int p0, int p1) { invoke<void*>(0x6E67FD35, p0, p1); }
void VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(int p0, int p1) { invoke<void*>(0x32AFD42E, p0, p1); }
void VEHICLE::SET_VEHICLE_MAX_STR_TRAP(int p0, int p1) { invoke<void*>(0x670913A4, p0, p1); }
void VEHICLE::GET_VEHICLE_DEFORMATION_GET_TREE(int p0, int p1) { invoke<void*>(0x98A10A86, p0, p1); }
void VEHICLE::_0xBC649C49(int p0, int p1) { invoke<void*>(0xBC649C49, p0, p1); }
void VEHICLE::_0x8DD9AA0C(int p0) { invoke<void*>(0x8DD9AA0C, p0); }
int VEHICLE::DOES_VEHICLE_EXIST_WITH_DECORATOR(int p0) { return invoke<int>(0x39E68EDD, p0); }
void VEHICLE::_0xAA8BD440(int p0, int p1) { invoke<void*>(0xAA8BD440, p0, p1); }
void VEHICLE::_0x004926A3(int p0, int p1) { invoke<void*>(0x004926A3, p0, p1); }
void VEHICLE::_0xC195803B(int p0, int p1) { invoke<void*>(0xC195803B, p0, p1); }
void VEHICLE::_0xB5CC548B(int p0) { invoke<void*>(0xB5CC548B, p0); }
int VEHICLE::_0x2B2FCC28(int p0) { return invoke<int>(0x2B2FCC28, p0); }
void VEHICLE::_0x920C2517(int p0, int p1) { invoke<void*>(0x920C2517, p0, p1); }
int VEHICLE::_0xB73A1486(int p0) { return invoke<int>(0xB73A1486, p0); }


int OBJECT::CREATE_OBJECT(int objectHash, float XCoord, float YCoord, float ZCoord, int p4, int p5, int dynamic) { return invoke<int>(0x2F7AA05C, objectHash, XCoord, YCoord, ZCoord, p4, p5, dynamic); }
int OBJECT::CREATE_OBJECT_NO_OFFSET(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0x58040420, p0, p1, p2, p3, p4, p5, p6); }
void OBJECT::DELETE_OBJECT(int* object) { invoke<void*>(0xD6EF9DA7, object); }
int OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(int object) { return invoke<int>(0x8F95A20B, object); }
int OBJECT::SLIDE_OBJECT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x63BFA7A0, p0, p1, p2, p3, p4, p5, p6, p7); }
void OBJECT::SET_OBJECT_TARGETTABLE(int object, int targettable) { invoke<void*>(0x3F88CD86, object, targettable); }
void OBJECT::_0x483C5C88(int p0, int p1) { invoke<void*>(0x483C5C88, p0, p1); }
int OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float p3, int type, int p5) { return invoke<int>(0x45619B33, x, y, z, p3, type, p5); }
int OBJECT::HAS_OBJECT_BEEN_BROKEN(int p0) { return invoke<int>(0xFE21F891, p0); }
int OBJECT::HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x6FC0353D, p0, p1, p2, p3, p4, p5); }
int OBJECT::_0x7DB578DD(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x7DB578DD, p0, p1, p2, p3, p4, p5); }
Vector3 OBJECT::_0x87A42A12(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<Vector3>(0x87A42A12, p0, p1, p2, p3, p4, p5, p6); }
int OBJECT::_0x65213FC3(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x65213FC3, p0, p1, p2, p3, p4, p5, p6, p7); }
void OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(int type, float x, float y, float z, int locked, float heading, int p6) { invoke<void*>(0x38C951A4, type, x, y, z, locked, heading, p6); }
void OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(int type, float x, float y, float z, int locked, float* heading) { invoke<void*>(0x4B44A83D, type, x, y, z, locked, heading); }
void OBJECT::_0x4E0A260B(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x4E0A260B, p0, p1, p2, p3, p4, p5, p6, p7); }
void OBJECT::ADD_DOOR_TO_SYSTEM(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x9D2D778D, p0, p1, p2, p3, p4, p5, p6, p7); }
void OBJECT::REMOVE_DOOR_FROM_SYSTEM(int door) { invoke<void*>(0x00253286, door); }
void OBJECT::_0xDF83DB47(int p0, float p1, int p2, int p3) { invoke<void*>(0xDF83DB47, p0, p1, p2, p3); }
int OBJECT::_0xD42A41C2(int p0) { return invoke<int>(0xD42A41C2, p0); }
int OBJECT::_0xD649B7E1(int p0) { return invoke<int>(0xD649B7E1, p0); }
void OBJECT::_0x4F44AF21(int p0, int p1, int p2, int p3) { invoke<void*>(0x4F44AF21, p0, p1, p2, p3); }
void OBJECT::_0x47531446(int p0, int p1, int p2, int p3) { invoke<void*>(0x47531446, p0, p1, p2, p3); }
void OBJECT::_0x34883DE3(int p0, int p1, int p2, int p3) { invoke<void*>(0x34883DE3, p0, p1, p2, p3); }
int OBJECT::_0xB74C3BD7(int p0) { return invoke<int>(0xB74C3BD7, p0); }
void OBJECT::_0xB4A9A558(int p0, int p1, int p2, int p3) { invoke<void*>(0xB4A9A558, p0, p1, p2, p3); }
void OBJECT::_0xECE58AE0(int p0, int p1) { invoke<void*>(0xECE58AE0, p0, p1); }
void OBJECT::_0xF736227C(int p0, int p1) { invoke<void*>(0xF736227C, p0, p1); }
int OBJECT::_0x5AFCD8A1(int p0) { return invoke<int>(0x5AFCD8A1, p0); }
int OBJECT::IS_DOOR_CLOSED(int door) { return invoke<int>(0x48659CD7, door); }
void OBJECT::_0x9BF33E41(int p0) { invoke<void*>(0x9BF33E41, p0); }
void OBJECT::_0xF592AD10() { invoke<void*>(0xF592AD10); }
int OBJECT::_0x17FF9393(int p0) { return invoke<int>(0x17FF9393, p0); }
int OBJECT::_0xE9AE494F(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xE9AE494F, p0, p1, p2, p3, p4); }
int OBJECT::IS_GARAGE_EMPTY(int p0, int p1, int p2) { return invoke<int>(0xA8B37DEA, p0, p1, p2); }
int OBJECT::_0xC33ED360(int p0, int p1, int p2, int p3) { return invoke<int>(0xC33ED360, p0, p1, p2, p3); }
int OBJECT::_0x41924877(int p0, int p1, int p2) { return invoke<int>(0x41924877, p0, p1, p2); }
int OBJECT::_0x4BD59750(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x4BD59750, p0, p1, p2, p3, p4); }
int OBJECT::_0x7B44D659(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x7B44D659, p0, p1, p2, p3, p4); }
int OBJECT::_0x142C8F76(int p0, int p1, int p2, int p3) { return invoke<int>(0x142C8F76, p0, p1, p2, p3); }
int OBJECT::_0x95A9AB2B(int p0, int p1, int p2) { return invoke<int>(0x95A9AB2B, p0, p1, p2); }
void OBJECT::_0xA565E27E(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xA565E27E, p0, p1, p2, p3, p4); }
void OBJECT::_0x43BB7E48(int p0, int p1) { invoke<void*>(0x43BB7E48, p0, p1); }
void OBJECT::_0x6158959E() { invoke<void*>(0x6158959E); }
int OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x23FF2BA4, p0, p1, p2, p3, p4, p5); }
int OBJECT::IS_POINT_IN_ANGLED_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { return invoke<int>(0x73BCFFDC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void OBJECT::_0x19B17769(int p0, int p1) { invoke<void*>(0x19B17769, p0, p1); }
void OBJECT::SET_OBJECT_PHYSICS_PARAMS(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0xE8D11C58, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
int OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(int p0, int p1) { return invoke<int>(0xF0B330AD, p0, p1); }
void OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(int p0, int p1) { invoke<void*>(0x3E263AE1, p0, p1); }
int OBJECT::IS_ANY_OBJECT_NEAR_POINT(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xE9E46941, p0, p1, p2, p3, p4); }
int OBJECT::IS_OBJECT_NEAR_POINT(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x50A62C43, p0, p1, p2, p3, p4); }
void OBJECT::_0xE3261B35(int p0) { invoke<void*>(0xE3261B35, p0); }
void OBJECT::_0x1E82C2AE(int p0, int p1, int p2) { invoke<void*>(0x1E82C2AE, p0, p1, p2); }
void OBJECT::TRACK_OBJECT_VISIBILITY(int p0) { invoke<void*>(0x46D06B9A, p0); }
int OBJECT::IS_OBJECT_VISIBLE(int p0) { return invoke<int>(0xF4FD8AE4, p0); }
void OBJECT::_0xF4A1A14A(int p0, int p1) { invoke<void*>(0xF4A1A14A, p0, p1); }
void OBJECT::_0xAF016CC1(int p0, int p1) { invoke<void*>(0xAF016CC1, p0, p1); }
void OBJECT::_0x3A68AA46(int p0, int p1) { invoke<void*>(0x3A68AA46, p0, p1); }
int OBJECT::_0xA286DE96(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xA286DE96, p0, p1, p2, p3, p4); }
void OBJECT::_0x21F51560(int p0, int p1) { invoke<void*>(0x21F51560, p0, p1); }
int OBJECT::_0xF1B8817A(int p0) { return invoke<int>(0xF1B8817A, p0); }
int OBJECT::_0xE08C834D(int p0) { return invoke<int>(0xE08C834D, p0); }
int OBJECT::_0x020497DE(int p0) { return invoke<int>(0x020497DE, p0); }
int OBJECT::CREATE_PICKUP(int typeHash, float posX, float posY, float posZ, int p4, int amount, int p6, int customModelHash) { return invoke<int>(0x5E14DF68, typeHash, posX, posY, posZ, p4, amount, p6, customModelHash); }
int OBJECT::CREATE_PICKUP_ROTATE(int typeHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int p7, int amount, int p9, int p10, int customModelHash) { return invoke<int>(0xF015BFE2, typeHash, posX, posY, posZ, rotX, rotY, rotZ, p7, amount, p9, p10, customModelHash); }
int OBJECT::CREATE_AMBIENT_PICKUP(int AmbientHash, Vector3 pos, int p4, int amount, int modelHash, int p7, int p8) { return invoke<int>(0x17B99CE7, AmbientHash, pos, p4, amount, modelHash, p7, p8); }
int OBJECT::CREATE_PORTABLE_PICKUP(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x8C886BE5, p0, p1, p2, p3, p4, p5); }
int OBJECT::_0x56A02502(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x56A02502, p0, p1, p2, p3, p4, p5); }
void OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(int p0, int p1) { invoke<void*>(0x184F6AB3, p0, p1); }
void OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(int p0) { invoke<void*>(0x1D094562, p0); }
void OBJECT::_0x7EFBA039(int p0, int p1) { invoke<void*>(0x7EFBA039, p0, p1); }
void OBJECT::_0xA3CDF152(int p0) { invoke<void*>(0xA3CDF152, p0); }
Vector3 OBJECT::GET_SAFE_PICKUP_COORDS(int X, int Y, int Z, int p3, int p4) { return invoke<Vector3>(0x618B5F67, X, Y, Z, p3, p4); }
Vector3 OBJECT::GET_PICKUP_COORDS(int p0) { return invoke<Vector3>(0xC2E1E2C5, p0); }
void OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(int p0) { invoke<void*>(0x40062C53, p0); }
int OBJECT::HAS_PICKUP_BEEN_COLLECTED(int p0) { return invoke<int>(0x0BE5CCED, p0); }
void OBJECT::REMOVE_PICKUP(int p0) { invoke<void*>(0x64A7A0E0, p0); }
void OBJECT::CREATE_MONEY_PICKUPS(float* XCoord, float* YCoord, float* ZCoord, int Vaule, int p4, int p5) { invoke<void*>(0x36C9A5EA, XCoord, YCoord, ZCoord, Vaule, p4, p5); }
int OBJECT::DOES_PICKUP_EXIST(int p0) { return invoke<int>(0x9C6DA0B3, p0); }
int OBJECT::DOES_PICKUP_OBJECT_EXIST(int p0) { return invoke<int>(0xE0B32108, p0); }
int OBJECT::_0x6052E62E(int p0) { return invoke<int>(0x6052E62E, p0); }
int OBJECT::_0xF139681B(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xF139681B, p0, p1, p2, p3, p4); }
void OBJECT::SET_PICKUP_REGENERATION_TIME(int p0, int p1) { invoke<void*>(0xAB11267D, p0, p1); }
void OBJECT::_0x7FADB4B9(int p0, int p1, int p2) { invoke<void*>(0x7FADB4B9, p0, p1, p2); }
void OBJECT::_0x3A8F1BF7(int p0, int p1) { invoke<void*>(0x3A8F1BF7, p0, p1); }
void OBJECT::SET_TEAM_PICKUP_OBJECT(int p0, int p1, int p2) { invoke<void*>(0x77687DC5, p0, p1, p2); }
void OBJECT::_0xCBB5F9B6(int p0, int p1, int p2) { invoke<void*>(0xCBB5F9B6, p0, p1, p2); }
void OBJECT::_0x276A7807(int p0, int p1, int p2) { invoke<void*>(0x276A7807, p0, p1, p2); }
int OBJECT::_0x000E92DC(int p0) { return invoke<int>(0x000E92DC, p0); }
void OBJECT::_0x9879AC51(int p0) { invoke<void*>(0x9879AC51, p0); }
void OBJECT::_0xDB18FA01(int p0) { invoke<void*>(0xDB18FA01, p0); }
void OBJECT::_0xA7E936FD(int p0, int p1) { invoke<void*>(0xA7E936FD, p0, p1); }
void OBJECT::_0xB241806C() { invoke<void*>(0xB241806C); }
void OBJECT::_0xD1BAAFB7(int p0) { invoke<void*>(0xD1BAAFB7, p0); }
void OBJECT::_0x63B02FAD(int p0, int p1, int p2, int p3) { invoke<void*>(0x63B02FAD, p0, p1, p2, p3); }
void OBJECT::_0x132B6D92(int p0, int p1) { invoke<void*>(0x132B6D92, p0, p1); }
int OBJECT::_0xEDD01937(int p0) { return invoke<int>(0xEDD01937, p0); }
int OBJECT::_0x6AE36192(int p0) { return invoke<int>(0x6AE36192, p0); }
void OBJECT::SET_FORCE_OBJECT_THIS_FRAME(int p0, int p1, int p2, int p3) { invoke<void*>(0x3DA41C1A, p0, p1, p2, p3); }
void OBJECT::_0x2048A7DD(int p0) { invoke<void*>(0x2048A7DD, p0); }

void AI::TASK_PAUSE(int p0, int p1) { invoke<void*>(0x17A64668, p0, p1); }
void AI::TASK_STAND_STILL(int p0, int p1) { invoke<void*>(0x6F80965D, p0, p1); }
void AI::TASK_JUMP(int  pedHandle, int p1) { invoke<void*>(0x0356E3CE, pedHandle, p1); }
void AI::TASK_COWER(int  pedHandle, int time) { invoke<void*>(0x9CF1C19B, pedHandle, time); }
void AI::TASK_HANDS_UP(int  pedHandle, int time, int p2, int p3, int p4) { invoke<void*>(0x8DCC19C5, pedHandle, time, p2, p3, p4); }
void AI::_0x3AA39BE9(int p0, int p1) { invoke<void*>(0x3AA39BE9, p0, p1); }
void AI::TASK_OPEN_VEHICLE_DOOR(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x8EE06BF4, p0, p1, p2, p3, p4); }
void AI::TASK_ENTER_VEHICLE(int  pedHandle, int vehicleHandle, int timeout, int seat, float p4, int p5, int p6) { invoke<void*>(0xB8689B4E, pedHandle, vehicleHandle, timeout, seat, p4, p5, p6); }
void AI::TASK_LEAVE_VEHICLE(int  pedHandle, int vehicleHandle, int flags) { invoke<void*>(0x7B1141C6, pedHandle, vehicleHandle, flags); }
void AI::TASK_SKY_DIVE(int p0) { invoke<void*>(0xD3874AFA, p0); }
void AI::TASK_PARACHUTE(int p0, int p1) { invoke<void*>(0xEC3060A2, p0, p1); }
void AI::TASK_PARACHUTE_TO_TARGET(int p0, int p1, int p2, int p3) { invoke<void*>(0xE0104D6C, p0, p1, p2, p3); }
void AI::SET_PARACHUTE_TASK_TARGET(int p0, int p1, int p2, int p3) { invoke<void*>(0x6ED3AD81, p0, p1, p2, p3); }
void AI::SET_PARACHUTE_TASK_THRUST(int p0, int p1) { invoke<void*>(0xD07C8AAA, p0, p1); }
void AI::TASK_RAPPEL_FROM_HELI(int p0, int p1) { invoke<void*>(0x2C7ADB93, p0, p1); }
void AI::TASK_VEHICLE_DRIVE_TO_COORD(int  pedHandle, int vehicleHandle, float x, float y, float z, float speed, int p6, int vehicleModel, int drivingMode, int p9, int p10) { invoke<void*>(0xE4AC0387, pedHandle, vehicleHandle, x, y, z, speed, p6, vehicleModel, drivingMode, p9, p10); }
void AI::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(int  driver, int vehicle, float x, float y, float z, float speed, int driving_mode, int stop_range) { invoke<void*>(0x1490182A, driver, vehicle, x, y, z, speed, driving_mode, stop_range); }
void AI::TASK_VEHICLE_DRIVE_WANDER(int  driver, int vehicle, float unk1, int unk2) { invoke<void*>(0x36EC0EB0, driver, vehicle, unk1, unk2); }
void AI::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x2DF5A6AC, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void AI::TASK_GO_STRAIGHT_TO_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x80A9E7A7, p0, p1, p2, p3, p4, p5, p6, p7); }
void AI::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0xD26CAC68, p0, p1, p2, p3, p4, p5, p6); }
void AI::TASK_ACHIEVE_HEADING(int p0, int p1, int p2) { invoke<void*>(0x0A0E9B42, p0, p1, p2); }
void AI::TASK_FLUSH_ROUTE() { invoke<void*>(0x34219154); }
void AI::TASK_EXTEND_ROUTE(int p0, int p1, int p2) { invoke<void*>(0x43271F69, p0, p1, p2); }
void AI::TASK_FOLLOW_POINT_ROUTE(int p0, int p1, int p2) { invoke<void*>(0xB837C816, p0, p1, p2); }
void AI::TASK_GO_TO_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x374827C2, p0, p1, p2, p3, p4, p5, p6); }
void AI::TASK_SMART_FLEE_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xB2E686FC, p0, p1, p2, p3, p4, p5, p6, p7); }
void AI::TASK_SMART_FLEE_PED(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xE52EB560, p0, p1, p2, p3, p4, p5); }
void AI::TASK_REACT_AND_FLEE_PED(int p0, int p1) { invoke<void*>(0x8A632BD8, p0, p1); }
void AI::TASK_SHOCKING_EVENT_REACT(int p0, int p1) { invoke<void*>(0x9BD00ACF, p0, p1); }
void AI::TASK_WANDER_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0xC6981FB9, p0, p1, p2, p3, p4, p5, p6); }
void AI::TASK_WANDER_STANDARD(int  pedHandle, int p1, int p2) { invoke<void*>(0xAF59151A, pedHandle, p1, p2); }
void AI::TASK_VEHICLE_PARK(int  pedHandle, int vehicleHandle, float x, float y, float z, float heading, int p6, int p7, int p8) { invoke<void*>(0x5C85FF90, pedHandle, vehicleHandle, x, y, z, heading, p6, p7, p8); }
void AI::TASK_STEALTH_KILL(int  killer, int  target, int killType, float p3, int p4) { invoke<void*>(0x0D64C2FA, killer, target, killType, p3, p4); }
void AI::TASK_PLANT_BOMB(int p0, float x, float y, float z, float degreeAngle) { invoke<void*>(0x33457535, p0, x, y, z, degreeAngle); }
void AI::TASK_FOLLOW_NAV_MESH_TO_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xFE4A10D9, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void AI::SET_PED_PATH_CAN_USE_CLIMBOVERS(int  ped, int Toggle) { invoke<void*>(0xB7B7D442, ped, Toggle); }
void AI::SET_PED_PATH_CAN_USE_LADDERS(int  ped, int Toggle) { invoke<void*>(0x53A879EE, ped, Toggle); }
void AI::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(int ped, int Toggle) { invoke<void*>(0x394B7AC9, ped, Toggle); }
void AI::_0x55E06443(int p0, float p1) { invoke<void*>(0x55E06443, p0, p1); }
void AI::SET_PED_PATHS_WIDTH_PLANT(int p0, int p1) { invoke<void*>(0x9C606EE3, p0, p1); }
void AI::SET_PED_PATH_PREFER_TO_AVOID_WATER(int p0, int p1) { invoke<void*>(0x0EA39A29, p0, p1); }
void AI::SET_PED_PATH_AVOID_FIRE(int p0, int p1) { invoke<void*>(0xDCC5B934, p0, p1); }
void AI::_0x2AFB14B8(int p0) { invoke<void*>(0x2AFB14B8, p0); }
int AI::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(int p0, int p1, int p2) { return invoke<int>(0xD9281778, p0, p1, p2); }
int AI::GET_NAVMESH_ROUTE_RESULT(int p0) { return invoke<int>(0x96491602, p0); }
void AI::TASK_GO_TO_COORD_ANY_MEANS(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xF91DF93B, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void AI::_0x094B75EF(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0x094B75EF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void AI::_0x86DC03F9(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { invoke<void*>(0x86DC03F9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
void AI::TASK_PLAY_ANIM(int Handle, char* AnimSet, char* AnimationName, float Speed, float unk, int Loop, int LastAnimation, float PlaybackRate, int xLock, int yLock, int zLock) { invoke<void*>(0x5AB552C6, Handle, AnimSet, AnimationName, Speed, unk, Loop, LastAnimation, PlaybackRate, xLock, yLock, zLock); }
void AI::_0x3DDEB0E6(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15) { invoke<void*>(0x3DDEB0E6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); }
void AI::STOP_ANIM_TASK(int p0, int p1, int p2, int p3) { invoke<void*>(0x2B520A57, p0, p1, p2, p3); }
void AI::TASK_SCRIPTED_ANIMATION(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xFC2DCF47, p0, p1, p2, p3, p4, p5); }
void AI::PLAY_ENTITY_SCRIPTED_ANIM(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x02F72AE5, p0, p1, p2, p3, p4, p5); }
void AI::STOP_ANIM_PLAYBACK(int p0, int p1, int p2) { invoke<void*>(0xE5F16398, p0, p1, p2); }
void AI::SET_ANIM_WEIGHT(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x17229D98, p0, p1, p2, p3, p4); }
void AI::SET_ANIM_RATE(int p0, int p1, int p2, int p3) { invoke<void*>(0x6DB46584, p0, p1, p2, p3); }
void AI::SET_ANIM_LOOPED(int p0, int p1, int p2, int p3) { invoke<void*>(0x095D61A4, p0, p1, p2, p3); }
void AI::_0x1582162C(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x1582162C, p0, p1, p2, p3, p4, p5, p6, p7); }
int AI::_0x500B6805(int p0) { return invoke<int>(0x500B6805, p0); }
int AI::_0x7B72AFD1(int p0) { return invoke<int>(0x7B72AFD1, p0); }
int AI::_0xEF8C3959(int p0) { return invoke<int>(0xEF8C3959, p0); }
void AI::TASK_VEHICLE_PLAY_ANIM(int p0, int p1, int p2) { invoke<void*>(0x2B28F598, p0, p1, p2); }
void AI::TASK_LOOK_AT_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x7B784DD8, p0, p1, p2, p3, p4, p5, p6); }
void AI::TASK_LOOK_AT_ENTITY(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x991D6619, p0, p1, p2, p3, p4); }
void AI::TASK_CLEAR_LOOK_AT(int p0) { invoke<void*>(0x60EB4054, p0); }
void AI::OPEN_SEQUENCE_TASK(int* taskSequence) { invoke<void*>(0xABA6923E, taskSequence); }
void AI::CLOSE_SEQUENCE_TASK(int taskSequence) { invoke<void*>(0x1A7CEBD0, taskSequence); }
void AI::TASK_PERFORM_SEQUENCE(int  ped, int taskSequence) { invoke<void*>(0x4D9FBD11, ped, taskSequence); }
void AI::CLEAR_SEQUENCE_TASK(int* taskSequence) { invoke<void*>(0x47ED03CE, taskSequence); }
void AI::SET_SEQUENCE_TO_REPEAT(int p0, int p1) { invoke<void*>(0xCDDF1508, p0, p1); }
int AI::GET_SEQUENCE_PROGRESS(int p0) { return invoke<int>(0xA3419909, p0); }
int AI::GET_IS_TASK_ACTIVE(int p0, int p1) { return invoke<int>(0x86FDDF55, p0, p1); }
int AI::GET_SCRIPT_TASK_STATUS(int p0, int p1) { return invoke<int>(0xB2477B23, p0, p1); }
int AI::_0xAFA914EF(int p0) { return invoke<int>(0xAFA914EF, p0); }
void AI::TASK_LEAVE_ANY_VEHICLE(int p0, int p1, int p2) { invoke<void*>(0xDBDD79FA, p0, p1, p2); }
void AI::TASK_AIM_GUN_SCRIPTED(int p0, int p1, int p2, int p3) { invoke<void*>(0x9D296BCD, p0, p1, p2, p3); }
void AI::TASK_AIM_GUN_SCRIPTED_WITH_TARGET(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xFD517CE3, p0, p1, p2, p3, p4, p5, p6, p7); }
void AI::_0x67E73525(int p0, int p1, float p2, float p3, float p4, int p5) { invoke<void*>(0x67E73525, p0, p1, p2, p3, p4, p5); }
int AI::_0x249EB4EB(int p0) { return invoke<int>(0x249EB4EB, p0); }
void AI::TASK_AIM_GUN_AT_ENTITY(int  pedHandle, int entityHandle, int duration, int unknown) { invoke<void*>(0xBE32B3B6, pedHandle, entityHandle, duration, unknown); }
void AI::TASK_TURN_PED_TO_FACE_ENTITY(int  pedHandle, int entityHandle, int duration) { invoke<void*>(0x3C37C767, pedHandle, entityHandle, duration); }
void AI::TASK_AIM_GUN_AT_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0xFBF44AD3, p0, p1, p2, p3, p4, p5, p6); }
void AI::TASK_SHOOT_AT_COORD(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x601C22E3, p0, p1, p2, p3, p4, p5); }
void AI::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(int p0, int p1) { invoke<void*>(0xBEAF8F67, p0, p1); }
void AI::CLEAR_PED_TASKS(int  pedHandle) { invoke<void*>(0xDE3316AB, pedHandle); }
void AI::CLEAR_PED_SECONDARY_TASK(int  pedHandle) { invoke<void*>(0xA635F451, pedHandle); }
void AI::TASK_EVERYONE_LEAVE_VEHICLE(int p0) { invoke<void*>(0xC1971F30, p0); }
void AI::TASK_GOTO_ENTITY_OFFSET(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x1A17A85E, p0, p1, p2, p3, p4, p5, p6); }
void AI::TASK_GOTO_ENTITY_OFFSET_XY(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xBC1E3D0A, p0, p1, p2, p3, p4, p5, p6, p7); }
void AI::TASK_TURN_PED_TO_FACE_COORD(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x30463D73, p0, p1, p2, p3, p4); }
void AI::TASK_VEHICLE_TEMP_ACTION(int p0, int p1, int p2, int p3) { invoke<void*>(0x0679DFB8, p0, p1, p2, p3); }
void AI::TASK_VEHICLE_MISSION(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x20609E56, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void AI::TASK_VEHICLE_MISSION_PED_TARGET(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xC81C4677, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void AI::TASK_VEHICLE_MISSION_COORS_TARGET(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { invoke<void*>(0x6719C109, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
void AI::TASK_VEHICLE_ESCORT(int  pedHandle, int vehicle, int targetVehicle, int p3, float speed, int p5, float minDistance, int p7, float p8) { invoke<void*>(0x9FDCB250, pedHandle, vehicle, targetVehicle, p3, speed, p5, minDistance, p7, p8); }
void AI::TASK_VEHICLE_CHASE(int  pedHandle, int  targetEntHandle) { invoke<void*>(0x55634798, pedHandle, targetEntHandle); }
void AI::TASK_VEHICLE_HELI_PROTECT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x0CB415EE, p0, p1, p2, p3, p4, p5, p6, p7); }
void AI::_0x2A83083F(int p0, int p1, int p2) { invoke<void*>(0x2A83083F, p0, p1, p2); }
void AI::_0x04FD3EE7(int p0, int p1) { invoke<void*>(0x04FD3EE7, p0, p1); }
void AI::TASK_HELI_CHASE(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xAC290A21, p0, p1, p2, p3, p4); }
void AI::TASK_PLANE_CHASE(int p0, int p1, float p2, float p3, float p4) { invoke<void*>(0x12FA1C28, p0, p1, p2, p3, p4); }
void AI::TASK_PLANE_LAND(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x5F7E23EA, p0, p1, p2, p3, p4, p5, p6, p7); }
void AI::TASK_HELI_MISSION(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14) { invoke<void*>(0x0C143E97, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
void AI::TASK_PLANE_MISSION(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { invoke<void*>(0x1D007E65, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
void AI::TASK_BOAT_MISSION(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0x5865B031, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void AI::TASK_DRIVE_BY(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x2B84D1C4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void AI::SET_DRIVEBY_TASK_TARGET(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xDA6A6FC1, p0, p1, p2, p3, p4, p5); }
void AI::_0x9B76F7E6(int  ped) { invoke<void*>(0x9B76F7E6, ped); }
int AI::_0xB23F46E6(int  ped) { return invoke<int>(0xB23F46E6, ped); }
int AI::_0x500D9244(int p0) { return invoke<int>(0x500D9244, p0); }
void AI::_0x98713C68(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x98713C68, p0, p1, p2, p3, p4, p5); }
int AI::_0x291E938C(int p0) { return invoke<int>(0x291E938C, p0); }
void AI::TASK_USE_MOBILE_PHONE(int p0, int p1) { invoke<void*>(0x225A38C8, p0, p1); }
void AI::TASK_USE_MOBILE_PHONE_TIMED(int p0, int p1) { invoke<void*>(0xC99C19F5, p0, p1); }
void AI::TASK_CHAT_TO_PED(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xA2BE1821, p0, p1, p2, p3, p4, p5, p6, p7); }
void AI::ADD_FOLLOW_NAVMESH_TO_PHONE_TASK(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x00D7303F, p0, p1, p2, p3, p4); }
void AI::TASK_WARP_PED_INTO_VEHICLE(int p0, int p1, int p2) { invoke<void*>(0x65D4A35D, p0, p1, p2); }
void AI::TASK_SHOOT_AT_ENTITY(int p0, int entity, int p2, int p3) { invoke<void*>(0xAC0631C9, p0, entity, p2, p3); }
void AI::TASK_CLIMB(int p0, int p1) { invoke<void*>(0x90847790, p0, p1); }
void AI::TASK_CLIMB_LADDER(int p0, int p1) { invoke<void*>(0x35BB4EE0, p0, p1); }
void AI::CLEAR_PED_TASKS_IMMEDIATELY(int Handle) { invoke<void*>(0xBC045625, Handle); }
void AI::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(int p0, int p1, int p2, int p3) { invoke<void*>(0xFA60601B, p0, p1, p2, p3); }
void AI::SET_NEXT_DESIRED_MOVE_STATE(int p0) { invoke<void*>(0x4E937D57, p0); }
void AI::SET_PED_DESIRED_MOVE_BLEND_RATIO(int p0, int p1) { invoke<void*>(0xC65FC712, p0, p1); }
int AI::GET_PED_DESIRED_MOVE_BLEND_RATIO(int p0) { return invoke<int>(0x5FEFAB72, p0); }
void AI::TASK_GOTO_ENTITY_AIMING(int p0, int p1, int p2, int p3) { invoke<void*>(0xF1C493CF, p0, p1, p2, p3); }
void AI::TASK_SET_DECISION_MAKER(int p0, int p1) { invoke<void*>(0x830AD50C, p0, p1); }
void AI::TASK_SET_SPHERE_DEFENSIVE_AREA(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x9F3C5D6A, p0, p1, p2, p3, p4); }
void AI::TASK_CLEAR_DEFENSIVE_AREA(int p0) { invoke<void*>(0x7A05BF0D, p0); }
void AI::TASK_PED_SLIDE_TO_COORD(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x225380EF, p0, p1, p2, p3, p4, p5); }
void AI::TASK_PED_SLIDE_TO_COORD_HDG_RATE(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x38A995C1, p0, p1, p2, p3, p4, p5, p6); }
int AI::ADD_COVER_POINT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0xA0AF0B98, p0, p1, p2, p3, p4, p5, p6, p7); }
void AI::REMOVE_COVER_POINT(int p0) { invoke<void*>(0x0776888B, p0); }
int AI::_IS_COVER_POINT_AT_COORDS(float x, float y, float z) { return invoke<int>(0x29F97A71, x, y, z); }
Vector3 AI::_0xC6B6CCC1(int p0) { return invoke<Vector3>(0xC6B6CCC1, p0); }
void AI::TASK_COMBAT_PED(int  pedHandle, int p1, int p2, int p3) { invoke<void*>(0xCB0D8932, pedHandle, p1, p2, p3); }
void AI::TASK_COMBAT_PED_TIMED(int p0, int p1, int p2, int p3) { invoke<void*>(0xF5CA2A45, p0, p1, p2, p3); }
void AI::TASK_SEEK_COVER_FROM_POS(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x83F18EE9, p0, p1, p2, p3, p4, p5); }
void AI::TASK_SEEK_COVER_FROM_PED(int p0, int p1, int p2, int p3) { invoke<void*>(0xC1EC907E, p0, p1, p2, p3); }
void AI::TASK_SEEK_COVER_TO_COVER_POINT(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x3D026B29, p0, p1, p2, p3, p4, p5, p6); }
void AI::TASK_SEEK_COVER_TO_COORDS(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xFFFE754E, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void AI::TASK_PUT_PED_DIRECTLY_INTO_COVER(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { invoke<void*>(0xC9F00E68, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
void AI::TASK_EXIT_COVER(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xC829FAC9, p0, p1, p2, p3, p4); }
void AI::TASK_PUT_PED_DIRECTLY_INTO_MELEE(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x79E1D27D, p0, p1, p2, p3, p4, p5); }
void AI::TASK_TOGGLE_DUCK(int p0, int p1) { invoke<void*>(0x61CFBCBF, p0, p1); }
void AI::TASK_GUARD_CURRENT_POSITION(int p0, int p1, int p2, int p3) { invoke<void*>(0x2FB099E9, p0, p1, p2, p3); }
void AI::_0x7AF0133D(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x7AF0133D, p0, p1, p2, p3, p4, p5, p6); }
void AI::TASK_GUARD_SPHERE_DEFENSIVE_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { invoke<void*>(0x86B76CB7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
void AI::TASK_STAND_GUARD(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xD130F636, p0, p1, p2, p3, p4, p5); }
void AI::SET_DRIVE_TASK_CRUISE_SPEED(int p0, int p1) { invoke<void*>(0x3CEC07B1, p0, p1); }
void AI::SET_DRIVE_TASK_MAX_CRUISE_SPEED(int p0, int p1) { invoke<void*>(0x7FDF6131, p0, p1); }
void AI::SET_DRIVE_TASK_DRIVING_STYLE(int DRIVER_PED, int DRIVING_STYLE) { invoke<void*>(0x59C5FAD7, DRIVER_PED, DRIVING_STYLE); }
void AI::ADD_COVER_BLOCKING_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x3536946F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void AI::REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<void*>(0xCF9221A7); }
void AI::TASK_START_SCENARIO_IN_PLACE(int p0, char* p1, int p2, int p3) { invoke<void*>(0xE50D6DDE, p0, p1, p2, p3); }
void AI::TASK_START_SCENARIO_AT_POSITION(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xAA2C4AC2, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void AI::TASK_USE_NEAREST_SCENARIO_TO_COORD(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x9C50FBF0, p0, p1, p2, p3, p4, p5); }
void AI::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x1BE9D65C, p0, p1, p2, p3, p4, p5); }
void AI::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xE32FFB22, p0, p1, p2, p3, p4, p5); }
void AI::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xBAB4C0AE, p0, p1, p2, p3, p4, p5); }
int AI::DOES_SCENARIO_EXIST_IN_AREA(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xFA7F5047, p0, p1, p2, p3, p4); }
int AI::_0x0FB138A5(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x0FB138A5, p0, p1, p2, p3, p4, p5); }
int AI::IS_SCENARIO_OCCUPIED(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x697FC008, p0, p1, p2, p3, p4); }
int AI::_0x9BE9C691(int p0) { return invoke<int>(0x9BE9C691, p0); }
void AI::_0x1984A5D1(int p0, int p1, int p2) { invoke<void*>(0x1984A5D1, p0, p1, p2); }
int AI::DOES_SCENARIO_GROUP_EXIST(int p0) { return invoke<int>(0x5F072EB9, p0); }
int AI::IS_SCENARIO_GROUP_ENABLED(int p0) { return invoke<int>(0x90991122, p0); }
void AI::SET_SCENARIO_GROUP_ENABLED(int p0, int p1) { invoke<void*>(0x116997B1, p0, p1); }
void AI::_0xBF55025D() { invoke<void*>(0xBF55025D); }
void AI::SET_EXCLUSIVE_SCENARIO_GROUP(int p0) { invoke<void*>(0x59DB8F26, p0); }
void AI::RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<void*>(0x17F9DFE8); }
int AI::IS_SCENARIO_TYPE_ENABLED(int p0) { return invoke<int>(0xAE37E969, p0); }
void AI::SET_SCENARIO_TYPE_ENABLED(int p0, int p1) { invoke<void*>(0xDB18E5DE, p0, p1); }
void AI::_0xF58FDEB4() { invoke<void*>(0xF58FDEB4); }
int AI::IS_PED_ACTIVE_IN_SCENARIO(int p0) { return invoke<int>(0x05038F1A, p0); }
void AI::TASK_COMBAT_HATED_TARGETS_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xDF099E18, p0, p1, p2, p3, p4, p5); }
void AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(int p0, float AreaToAttack, int p2) { invoke<void*>(0x2E7064E4, p0, AreaToAttack, p2); }
void AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(int p0, int p1, int p2, int p3) { invoke<void*>(0xF127AD6A, p0, p1, p2, p3); }
void AI::TASK_THROW_PROJECTILE(int p0, int p1, int p2, int p3) { invoke<void*>(0xF65C20A7, p0, p1, p2, p3); }
void AI::TASK_SWAP_WEAPON(int p0, int p1) { invoke<void*>(0xDAF4F8FC, p0, p1); }
void AI::TASK_RELOAD_WEAPON(int p0, int p1) { invoke<void*>(0xCA6E91FD, p0, p1); }
int AI::IS_PED_GETTING_UP(int p0) { return invoke<int>(0x320813E6, p0); }
void AI::TASK_WRITHE(int p0, int p1, int p2, int p3) { invoke<void*>(0x0FDC54FC, p0, p1, p2, p3); }
int AI::IS_PED_IN_WRITHE(int p0) { return invoke<int>(0x09E61921, p0); }
void AI::OPEN_PATROL_ROUTE(int p0) { invoke<void*>(0xF33F83CA, p0); }
void AI::CLOSE_PATROL_ROUTE() { invoke<void*>(0x67305E59); }
void AI::ADD_PATROL_ROUTE_NODE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x21B48F10, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void AI::ADD_PATROL_ROUTE_LINK(int p0, int p1) { invoke<void*>(0xD8761BB3, p0, p1); }
void AI::CREATE_PATROL_ROUTE() { invoke<void*>(0x0A6C7864); }
void AI::DELETE_PATROL_ROUTE(int p0) { invoke<void*>(0x2A4E6706, p0); }
void AI::TASK_PATROL(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xB92E5AF6, p0, p1, p2, p3, p4); }
void AI::TASK_STAY_IN_COVER(int p0) { invoke<void*>(0xA27A9413, p0); }
void AI::_0x50779A2C(int  ped, float x, float y, float z) { invoke<void*>(0x50779A2C, ped, x, y, z); }
void AI::ADD_VEHICLE_SUBTASK_ATTACK_PED(int p0, int p1) { invoke<void*>(0x80461113, p0, p1); }
void AI::TASK_VEHICLE_SHOOT_AT_PED(int p0, int p1, int p2) { invoke<void*>(0x59677BA0, p0, p1, p2); }
void AI::TASK_VEHICLE_AIM_AT_PED(int p0, int p1) { invoke<void*>(0x920AE6DB, p0, p1); }
void AI::TASK_VEHICLE_SHOOT_AT_COORD(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xA7AAA4D6, p0, p1, p2, p3, p4); }
void AI::TASK_VEHICLE_AIM_AT_COORD(int p0, int p1, int p2, int p3) { invoke<void*>(0x010F47CE, p0, p1, p2, p3); }
void AI::TASK_VEHICLE_GOTO_NAVMESH(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x55CF3BCD, p0, p1, p2, p3, p4, p5, p6, p7); }
void AI::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14) { invoke<void*>(0x1552DC91, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
void AI::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13) { invoke<void*>(0x9BD52ABD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
void AI::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14) { invoke<void*>(0x3F91358E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
void AI::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0xD896CD82, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void AI::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x68E36B7A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void AI::SET_HIGH_FALL_TASK(int p0, int p1, int p2, int p3) { invoke<void*>(0xBBB26172, p0, p1, p2, p3); }
void AI::REQUEST_WAYPOINT_RECORDING(int p0) { invoke<void*>(0xAFABFB5D, p0); }
int AI::_0x87125F5D(int p0) { return invoke<int>(0x87125F5D, p0); }
void AI::REMOVE_WAYPOINT_RECORDING(int p0) { invoke<void*>(0x624530B0, p0); }
int AI::_0xF5F9B71E(int p0, int p1) { return invoke<int>(0xF5F9B71E, p0, p1); }
int AI::_0x19266913(int p0, int p1, int p2) { return invoke<int>(0x19266913, p0, p1, p2); }
int AI::_0xC765633A(int p0, int p1) { return invoke<int>(0xC765633A, p0, p1); }
int AI::_0xC4CD35AF(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xC4CD35AF, p0, p1, p2, p3, p4); }
void AI::TASK_FOLLOW_WAYPOINT_RECORDING(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xADF9904D, p0, p1, p2, p3, p4); }
int AI::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(int p0) { return invoke<int>(0x85B7725F, p0); }
int AI::GET_PED_WAYPOINT_PROGRESS(int p0) { return invoke<int>(0x3595B104, p0); }
int AI::GET_PED_WAYPOINT_DISTANCE(int p0) { return invoke<int>(0x084B35B0, p0); }
int AI::SET_PED_WAYPOINT_ROUTE_OFFSET(int p0, int p1, int p2, int p3) { return invoke<int>(0xF867F747, p0, p1, p2, p3); }
int AI::_0xE8422AC4(int p0, int p1) { return invoke<int>(0xE8422AC4, p0, p1); }
int AI::WAYPOINT_PLAYBACK_GET_IS_PAUSED(int p0) { return invoke<int>(0xA6BB5717, p0); }
void AI::WAYPOINT_PLAYBACK_PAUSE(int p0, int p1, int p2) { invoke<void*>(0xFE39ECF8, p0, p1, p2); }
void AI::WAYPOINT_PLAYBACK_RESUME(int p0, int p1, int p2, int p3) { invoke<void*>(0x50F392EF, p0, p1, p2, p3); }
void AI::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(int p0, int p1, int p2) { invoke<void*>(0x23E6BA96, p0, p1, p2); }
void AI::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(int p0) { invoke<void*>(0x1BBB2CAC, p0); }
void AI::_0x4DFD5FEC(int p0, int p1, int p2, int p3) { invoke<void*>(0x4DFD5FEC, p0, p1, p2, p3); }
void AI::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(int p0, int p1, int p2) { invoke<void*>(0x75E60CF6, p0, p1, p2); }
void AI::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xF120A34E, p0, p1, p2, p3, p4); }
void AI::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(int p0, int p1, int p2, int p3) { invoke<void*>(0xBD5F0EB8, p0, p1, p2, p3); }
void AI::WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xCDDB44D5, p0, p1, p2, p3, p4, p5); }
void AI::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(int p0) { invoke<void*>(0x6D7CF40C, p0); }
void AI::ASSISTED_MOVEMENT_REQUEST_ROUTE(char* route) { invoke<void*>(0x48262EDA, route); }
void AI::ASSISTED_MOVEMENT_REMOVE_ROUTE(int p0) { invoke<void*>(0xB3CEC06F, p0); }
int AI::_0x79B067AF(int p0) { return invoke<int>(0x79B067AF, p0); }
void AI::_0x01CAAFCC(int p0, int p1) { invoke<void*>(0x01CAAFCC, p0, p1); }
void AI::_0x8FB923EC(int p0) { invoke<void*>(0x8FB923EC, p0); }
void AI::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x959818B6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
int AI::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(int p0) { return invoke<int>(0x80DD15DB, p0); }
int AI::GET_VEHICLE_WAYPOINT_PROGRESS(int p0) { return invoke<int>(0xD3CCF64E, p0); }
int AI::GET_VEHICLE_WAYPOINT_TARGET_POINT(int p0) { return invoke<int>(0x81049608, p0); }
void AI::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(int p0) { invoke<void*>(0x7C00B415, p0); }
void AI::VEHICLE_WAYPOINT_PLAYBACK_RESUME(int p0) { invoke<void*>(0xBEB14C82, p0); }
void AI::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(int p0) { invoke<void*>(0x923C3AA4, p0); }
void AI::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(int p0, int p1) { invoke<void*>(0xBE1E7BB4, p0, p1); }
void AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(int p0, int p1) { invoke<void*>(0x1B54FB6B, p0, p1); }
void AI::TASK_FORCE_MOTION_STATE(int p0, int p1, int p2) { invoke<void*>(0xCAD2EF77, p0, p1, p2); }
void AI::_0x6F5D215F(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x6F5D215F, p0, p1, p2, p3, p4, p5); }
void AI::_0x71A5C5DB(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { invoke<void*>(0x71A5C5DB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
int AI::_0x902656EB(int p0) { return invoke<int>(0x902656EB, p0); }
int AI::_0x92FDBAE6(int p0) { return invoke<int>(0x92FDBAE6, p0); }
int AI::_0x885724DE(int p0, int p1) { return invoke<int>(0x885724DE, p0, p1); }
int AI::_0x96C0277B(int p0) { return invoke<int>(0x96C0277B, p0); }
void AI::_0xA79BE783(int p0, int p1, int p2) { invoke<void*>(0xA79BE783, p0, p1, p2); }
void AI::_0xF3538041(int p0, int p1, int p2) { invoke<void*>(0xF3538041, p0, p1, p2); }
int AI::_0x1EBB6F3D(int p0, int p1) { return invoke<int>(0x1EBB6F3D, p0, p1); }
int AI::_0x72FA5EF2(int p0, int p1) { return invoke<int>(0x72FA5EF2, p0, p1); }
int AI::_0xE9DAF877(int p0) { return invoke<int>(0xE9DAF877, p0); }
int AI::_0xD21639A8(int p0) { return invoke<int>(0xD21639A8, p0); }
int AI::_0xE76A2353(int p0) { return invoke<int>(0xE76A2353, p0); }
int AI::_0xDD616893(int p0) { return invoke<int>(0xDD616893, p0); }
int AI::IS_PED_STILL(int p0) { return invoke<int>(0x09E3418D, p0); }
int AI::IS_PED_WALKING(int p0) { return invoke<int>(0x4B865C4A, p0); }
int AI::IS_PED_RUNNING(int p0) { return invoke<int>(0xE9A5578F, p0); }
int AI::IS_PED_SPRINTING(int p0) { return invoke<int>(0x4F3E0633, p0); }
int AI::IS_PED_STRAFING(int p0) { return invoke<int>(0xEFEED13C, p0); }
void AI::TASK_SYNCHRONIZED_SCENE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x4F217E7B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void AI::_0x4D210467(int  ped, char* anim, char* p2, char* p3, char* p4, int p5, int vehicle, int p7, int p8) { invoke<void*>(0x4D210467, ped, anim, p2, p3, p4, p5, vehicle, p7, p8); }
void AI::_0xF65F0F4F(int  ped, int vehicle) { invoke<void*>(0xF65F0F4F, ped, vehicle); }
void AI::_0x1683FE66(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { invoke<void*>(0x1683FE66, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
void AI::_0x6345EC80(int p0, int p1, int p2, int p3) { invoke<void*>(0x6345EC80, p0, p1, p2, p3); }
void AI::TASK_ARREST_PED(int p0, int p1) { invoke<void*>(0xBC0F153D, p0, p1); }
int AI::IS_PED_RUNNING_ARREST_TASK(int p0) { return invoke<int>(0x6942DB7A, p0); }
int AI::IS_PED_BEING_ARRESTED(int p0) { return invoke<int>(0x5FF6C2ED, p0); }
void AI::UNCUFF_PED(int p0) { invoke<void*>(0xA23A1D61, p0); }
int AI::IS_PED_CUFFED(int p0) { return invoke<int>(0x511CE741, p0); }

int GAMEPLAY::GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0x4E9CA30A); }
int GAMEPLAY::_SET_ALLOCATED_STACK_SIZE(int StackSize) { return invoke<int>(0x11A178B8, StackSize); }
void GAMEPLAY::SET_RANDOM_SEED(int p0) { invoke<void*>(0xDB3FEB5C, p0); }
void GAMEPLAY::SET_TIME_SCALE(float Time) { invoke<void*>(0xA7F84694, Time); }
void GAMEPLAY::SET_MISSION_FLAG(int p0) { invoke<void*>(0x57592D52, p0); }
int GAMEPLAY::GET_MISSION_FLAG() { return invoke<int>(0x95115F97); }
void GAMEPLAY::SET_RANDOM_EVENT_FLAG(int p0) { invoke<void*>(0xA77F31E8, p0); }
int GAMEPLAY::GET_RANDOM_EVENT_FLAG() { return invoke<int>(0x794CC92C); }
void GAMEPLAY::_0x8B2DE971(int p0) { invoke<void*>(0x8B2DE971, p0); }
void GAMEPLAY::_0xE77199F7(int p0) { invoke<void*>(0xE77199F7, p0); }
int GAMEPLAY::_0xA8171E9E() { return invoke<int>(0xA8171E9E); }
int GAMEPLAY::_0x353E8056() { return invoke<int>(0x353E8056); }
int GAMEPLAY::IS_PREV_WEATHER_TYPE(int p0) { return invoke<int>(0x250ADA61, p0); }
int GAMEPLAY::IS_NEXT_WEATHER_TYPE(int p0) { return invoke<int>(0x99CB167F, p0); }
void GAMEPLAY::SET_WEATHER_TYPE_PERSIST(char* WeatherType) { invoke<void*>(0xC6C04C75, WeatherType); }
void GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST(char* WeatherType) { invoke<void*>(0xC869FE97, WeatherType); }
void GAMEPLAY::SET_WEATHER_TYPE_NOW(char* WeatherType) { invoke<void*>(0x361E9EAC, WeatherType); }
void GAMEPLAY::_SET_WEATHER_TYPE_OVER_TIME(char* WeatherType, float Time) { invoke<void*>(0x386F0D25, WeatherType, Time); }
void GAMEPLAY::SET_RANDOM_WEATHER_TYPE() { invoke<void*>(0xE7AA1BC9); }
void GAMEPLAY::CLEAR_WEATHER_TYPE_PERSIST() { invoke<void*>(0x6AB757D8); }
void GAMEPLAY::_0x9A5C1D56(int p0, int p1, int p2) { invoke<void*>(0x9A5C1D56, p0, p1, p2); }
void GAMEPLAY::_0x5CA74040(int p0, int p1, int p2) { invoke<void*>(0x5CA74040, p0, p1, p2); }
void GAMEPLAY::SET_OVERRIDE_WEATHER(char* WeatherType) { invoke<void*>(0xD9082BB5, WeatherType); }
void GAMEPLAY::CLEAR_OVERRIDE_WEATHER() { invoke<void*>(0x7740EA4E); }
void GAMEPLAY::_0x625181DC(int p0) { invoke<void*>(0x625181DC, p0); }
void GAMEPLAY::_0xBEBBFDC8(int p0) { invoke<void*>(0xBEBBFDC8, p0); }
void GAMEPLAY::_0x6926AB03(int p0) { invoke<void*>(0x6926AB03, p0); }
void GAMEPLAY::_0xD447439D(int p0) { invoke<void*>(0xD447439D, p0); }
void GAMEPLAY::_0x584E9C59(int p0) { invoke<void*>(0x584E9C59, p0); }
void GAMEPLAY::_0x5656D578(int p0) { invoke<void*>(0x5656D578, p0); }
void GAMEPLAY::_0x0DE40C28(int p0) { invoke<void*>(0x0DE40C28, p0); }
void GAMEPLAY::_0x98C9138B(int p0) { invoke<void*>(0x98C9138B, p0); }
void GAMEPLAY::_0xFB1A9CDE(int p0) { invoke<void*>(0xFB1A9CDE, p0); }
void GAMEPLAY::_0x1C0CAE89(int p0) { invoke<void*>(0x1C0CAE89, p0); }
void GAMEPLAY::_0x4671AC2E(int p0) { invoke<void*>(0x4671AC2E, p0); }
void GAMEPLAY::_0xDA02F415(int p0) { invoke<void*>(0xDA02F415, p0); }
void GAMEPLAY::_0x5F3DDEC0(int p0) { invoke<void*>(0x5F3DDEC0, p0); }
void GAMEPLAY::_0x63A89684(int p0) { invoke<void*>(0x63A89684, p0); }
void GAMEPLAY::SET_WIND(int p0) { invoke<void*>(0xC6294698, p0); }
void GAMEPLAY::SET_WIND_SPEED(float Speed) { invoke<void*>(0x45705F94, Speed); }
int GAMEPLAY::GET_WIND_SPEED() { return invoke<int>(0x098F0F3C); }
void GAMEPLAY::SET_WIND_DIRECTION(int p0) { invoke<void*>(0x381AEEE9, p0); }
Vector3 GAMEPLAY::GET_WIND_DIRECTION() { return invoke<Vector3>(0x89499A0D); }
int GAMEPLAY::GET_RAIN_LEVEL() { return invoke<int>(0xC9F67F28); }
int GAMEPLAY::GET_SNOW_LEVEL() { return invoke<int>(0x1B09184F); }
void GAMEPLAY::_0xDF38165E() { invoke<void*>(0xDF38165E); }
void GAMEPLAY::_0x8727A4C5(int p0) { invoke<void*>(0x8727A4C5, p0); }
void GAMEPLAY::_0x96B2FD08(int p0) { invoke<void*>(0x96B2FD08, p0); }
void GAMEPLAY::_0xED88FC61(char* p0, int p1) { invoke<void*>(0xED88FC61, p0, p1); }
void GAMEPLAY::_0xC9FA6E07(int p0, int p1) { invoke<void*>(0xC9FA6E07, p0, p1); }
void GAMEPLAY::_0x2D7787BC() { invoke<void*>(0x2D7787BC); }
int GAMEPLAY::GET_GAME_TIMER() { return invoke<int>(0xA4EA0691); }
float* GAMEPLAY::GET_FRAME_TIME() { return invoke<float*>(0x96374262); }
float* GAMEPLAY::GET_FRAME_COUNT() { return invoke<float*>(0xB477A015); }
float GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(float p0, float p1) { return invoke<float>(0x0562C4D0, p0, p1); }
int GAMEPLAY::GET_RANDOM_INT_IN_RANGE(int StartRange, int EndRange) { return invoke<int>(0x4051115B, StartRange, EndRange); }
int GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ) { return invoke<int>(0xA1BFD5E0, x, y, z, groundZ); }
int GAMEPLAY::_0x64D91CED(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x64D91CED, p0, p1, p2, p3, p4); }
int GAMEPLAY::ASIN(int p0) { return invoke<int>(0x998E5CAD, p0); }
int GAMEPLAY::ACOS(int p0) { return invoke<int>(0xF4038776, p0); }
int GAMEPLAY::TAN(int p0) { return invoke<int>(0xD320CE5E, p0); }
int GAMEPLAY::ATAN(int p0) { return invoke<int>(0x7A03CC8E, p0); }
int GAMEPLAY::ATAN2(int p0, int p1) { return invoke<int>(0x2508AC81, p0, p1); }
int GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int unknown) { return invoke<int>(0xF698765E, x1, y1, z1, x2, y2, z2, unknown); }
int GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(int p0, int p1, int p2, int p3) { return invoke<int>(0xDBF75E58, p0, p1, p2, p3); }
int GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(int p0, int p1) { return invoke<int>(0xD209D52B, p0, p1); }
int GAMEPLAY::_0x89459F0A(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<int>(0x89459F0A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
Vector3 GAMEPLAY::_0xCAECF37E(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<Vector3>(0xCAECF37E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
int GAMEPLAY::_0xC6CC812C(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { return invoke<int>(0xC6CC812C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
void GAMEPLAY::SET_BIT(int* var, int bit) { invoke<void*>(0x4EFE7E6B, var, bit); }
void GAMEPLAY::CLEAR_BIT(int* var, int bit) { invoke<void*>(0x8BC9E618, var, bit); }
int GAMEPLAY::GET_HASH_KEY(char* ToHash) { return invoke<int>(0x98EFF6F1, ToHash); }
void GAMEPLAY::_0x87B92190(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { invoke<void*>(0x87B92190, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
int GAMEPLAY::IS_AREA_OCCUPIED(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { return invoke<int>(0xC013972F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
int GAMEPLAY::IS_POSITION_OCCUPIED(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { return invoke<int>(0x452E8D9E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
int GAMEPLAY::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xC161558D, p0, p1, p2, p3, p4, p5, p6); }
void GAMEPLAY::CLEAR_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x854E9AB8, p0, p1, p2, p3, p4, p5, p6, p7); }
void GAMEPLAY::_0x20E4FFD9(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x20E4FFD9, p0, p1, p2, p3, p4, p5, p6, p7); }
void GAMEPLAY::CLEAR_AREA_OF_VEHICLES(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x63320F3C, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void GAMEPLAY::CLEAR_ANGLED_AREA_OF_VEHICLES(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0xF11A3018, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void GAMEPLAY::CLEAR_AREA_OF_OBJECTS(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xBB720FE7, p0, p1, p2, p3, p4); }
void GAMEPLAY::CLEAR_AREA_OF_PEDS(float* XCoord, float* YCoord, float* zCoord, float Area, int p4) { invoke<void*>(0x25BE7FA8, XCoord, YCoord, zCoord, Area, p4); }
void GAMEPLAY::CLEAR_AREA_OF_COPS(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x95C53824, p0, p1, p2, p3, p4); }
void GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x18DB5434, p0, p1, p2, p3, p4); }
void GAMEPLAY::SET_SAVE_MENU_ACTIVE(int p0) { invoke<void*>(0xF5CCF164, p0); }
int GAMEPLAY::_0x39771F21() { return invoke<int>(0x39771F21); }
void GAMEPLAY::SET_CREDITS_ACTIVE(int p0) { invoke<void*>(0xEC2A0ECF, p0); }
void GAMEPLAY::_0x75B06B5A(int p0) { invoke<void*>(0x75B06B5A, p0); }
int GAMEPLAY::_0x2569C9A7() { return invoke<int>(0x2569C9A7); }
void GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(char* ScriptName) { invoke<void*>(0x9F861FD4, ScriptName); }
void GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<void*>(0x878486CE); }
int GAMEPLAY::ADD_HOSPITAL_RESTART(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x4F3E3104, p0, p1, p2, p3, p4); }
void GAMEPLAY::DISABLE_HOSPITAL_RESTART(int p0, int p1) { invoke<void*>(0x09F49C72, p0, p1); }
int GAMEPLAY::ADD_POLICE_RESTART(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xE96C29FE, p0, p1, p2, p3, p4); }
void GAMEPLAY::DISABLE_POLICE_RESTART(int p0, int p1) { invoke<void*>(0x0A280324, p0, p1); }
void GAMEPLAY::_0x296574AE(int p0) { invoke<void*>(0x296574AE, p0); }
void GAMEPLAY::IGNORE_NEXT_RESTART(int p0) { invoke<void*>(0xDA13A4B6, p0); }
void GAMEPLAY::_0xC9F6F0BC(int p0) { invoke<void*>(0xC9F6F0BC, p0); }
void GAMEPLAY::_0xCB074B9D(int p0) { invoke<void*>(0xCB074B9D, p0); }
void GAMEPLAY::SET_FADE_IN_AFTER_DEATH_ARREST(int p0) { invoke<void*>(0xACDE6985, p0); }
void GAMEPLAY::SET_FADE_IN_AFTER_LOAD(int p0) { invoke<void*>(0x6E00EB0B, p0); }
int GAMEPLAY::REGISTER_SAVE_HOUSE(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0x39C1849A, p0, p1, p2, p3, p4, p5, p6); }
void GAMEPLAY::SET_SAVE_HOUSE(int p0, int p1, int p2) { invoke<void*>(0xC3240BB4, p0, p1, p2); }
int GAMEPLAY::OVERRIDE_SAVE_HOUSE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x47436C12, p0, p1, p2, p3, p4, p5, p6, p7); }
int GAMEPLAY::_0xC4D71AB4(int p0, int p1, int p2, int p3) { return invoke<int>(0xC4D71AB4, p0, p1, p2, p3); }
void GAMEPLAY::DO_AUTO_SAVE() { invoke<void*>(0x54C44B1A); }
int GAMEPLAY::_0xA8546914() { return invoke<int>(0xA8546914); }
int GAMEPLAY::IS_AUTO_SAVE_IN_PROGRESS() { return invoke<int>(0x36F75399); }
int GAMEPLAY::_0x78350773() { return invoke<int>(0x78350773); }
void GAMEPLAY::_0x5A45B11A() { invoke<void*>(0x5A45B11A); }
void GAMEPLAY::BEGIN_REPLAY_STATS(int p0, int p1) { invoke<void*>(0x17F4F44D, p0, p1); }
void GAMEPLAY::_0x81216EE0(int p0) { invoke<void*>(0x81216EE0, p0); }
void GAMEPLAY::END_REPLAY_STATS() { invoke<void*>(0xCB570185); }
int GAMEPLAY::_0xC58250F1() { return invoke<int>(0xC58250F1); }
int GAMEPLAY::_0x50C39926() { return invoke<int>(0x50C39926); }
int GAMEPLAY::_0x710E5D1E() { return invoke<int>(0x710E5D1E); }
int GAMEPLAY::_0xC7BD1AF0() { return invoke<int>(0xC7BD1AF0); }
int GAMEPLAY::_0x22BE2423(int p0) { return invoke<int>(0x22BE2423, p0); }
void GAMEPLAY::CLEAR_REPLAY_STATS() { invoke<void*>(0xC47DFF02); }
int GAMEPLAY::_0xF62B3C48() { return invoke<int>(0xF62B3C48); }
int GAMEPLAY::_0x3589452B() { return invoke<int>(0x3589452B); }
int GAMEPLAY::_0x144AAF22() { return invoke<int>(0x144AAF22); }
int GAMEPLAY::IS_MEMORY_CARD_IN_USE() { return invoke<int>(0x40CE4DFD); }
void GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float* StartPositionX, float* StartPositionY, float* StartPositionZ, float* HitPositionX, float* HitPositionY, float* HitPositionZ, int p6, int p7, int WeaponHash, int Handle, int p10, int p11, float Speed) { invoke<void*>(0xCB7415AC, StartPositionX, StartPositionY, StartPositionZ, HitPositionX, HitPositionY, HitPositionZ, p6, p7, WeaponHash, Handle, p10, p11, Speed); }
void GAMEPLAY::_0x52ACCB7B(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13) { invoke<void*>(0x52ACCB7B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
void GAMEPLAY::GET_MODEL_DIMENSIONS(int entity, float* Minimum, float* Maximum) { invoke<void*>(0x91ABB8E0, entity, Minimum, Maximum); }
void GAMEPLAY::SET_FAKE_WANTED_LEVEL(int p0) { invoke<void*>(0x85B1C9FA, p0); }
int GAMEPLAY::_0x0022A430() { return invoke<int>(0x0022A430); }
int GAMEPLAY::IS_BIT_SET(int var, int bit) { return invoke<int>(0x902E26AC, var, bit); }
void GAMEPLAY::USING_MISSION_CREATOR(int p0) { invoke<void*>(0x20AB0B6B, p0); }
void GAMEPLAY::_0x082BA6F2(int p0) { invoke<void*>(0x082BA6F2, p0); }
void GAMEPLAY::SET_MINIGAME_IN_PROGRESS(int p0) { invoke<void*>(0x348B9046, p0); }
int GAMEPLAY::IS_MINIGAME_IN_PROGRESS() { return invoke<int>(0x53A95E13); }
int GAMEPLAY::IS_THIS_A_MINIGAME_SCRIPT() { return invoke<int>(0x7605EF6F); }
int GAMEPLAY::IS_SNIPER_INVERTED() { return invoke<int>(0x5C3BF51B); }
int GAMEPLAY::GET_CURRENT_LANGUAGE() { return invoke<int>(0x761BE00B); }
int GAMEPLAY::_0xBAF17315() { return invoke<int>(0xBAF17315); }
int GAMEPLAY::GET_PROFILE_SETTING(int p0) { return invoke<int>(0xD374BEBC, p0); }
int GAMEPLAY::ARE_STRINGS_EQUAL(char* string1, char* string2) { return invoke<int>(0x877C0BC5, string1, string2); }
int GAMEPLAY::COMPARE_STRINGS(int p0, int p1, int p2, int p3) { return invoke<int>(0xFE25A58F, p0, p1, p2, p3); }
int GAMEPLAY::ABSI(int p0) { return invoke<int>(0xB44677C5, p0); }
int GAMEPLAY::ABSF(int p0) { return invoke<int>(0xAF6F6E0B, p0); }
int GAMEPLAY::IS_SNIPER_BULLET_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x0483715C, p0, p1, p2, p3, p4, p5); }
int GAMEPLAY::IS_PROJECTILE_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0x78E1A557, p0, p1, p2, p3, p4, p5, p6); }
int GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x2B73BCF6, p0, p1, p2, p3, p4, p5, p6, p7); }
int GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0xD1AE2681, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int GAMEPLAY::_0xBE81F1E2(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xBE81F1E2, p0, p1, p2, p3, p4, p5); }
int GAMEPLAY::_0x1A40454B(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x1A40454B, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int GAMEPLAY::_0x6BDE5CE4(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x6BDE5CE4, p0, p1, p2, p3, p4); }
int GAMEPLAY::_0x507BC6F7(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x507BC6F7, p0, p1, p2, p3, p4, p5); }
int GAMEPLAY::IS_BULLET_IN_ANGLED_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0xE2DB58F7, p0, p1, p2, p3, p4, p5, p6, p7); }
int GAMEPLAY::IS_BULLET_IN_AREA(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xB54F46CA, p0, p1, p2, p3, p4); }
int GAMEPLAY::IS_BULLET_IN_BOX(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xAB73ED26, p0, p1, p2, p3, p4, p5, p6); }
int GAMEPLAY::HAS_BULLET_IMPACTED_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x902BC7D9, p0, p1, p2, p3, p4, p5); }
int GAMEPLAY::HAS_BULLET_IMPACTED_IN_BOX(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x2C2618CC, p0, p1, p2, p3, p4, p5, p6, p7); }
int GAMEPLAY::IS_ORBIS_VERSION() { return invoke<int>(0x40282018); }
int GAMEPLAY::IS_DURANGO_VERSION() { return invoke<int>(0x46FB06A5); }
int GAMEPLAY::IS_XBOX360_VERSION() { return invoke<int>(0x24005CC8); }
int GAMEPLAY::IS_PS3_VERSION() { return invoke<int>(0x4C0D5303); }
int GAMEPLAY::IS_PC_VERSION() { return invoke<int>(0x4D5D9EE3); }
int GAMEPLAY::IS_AUSSIE_VERSION() { return invoke<int>(0x944BA1DC); }
int GAMEPLAY::IS_STRING_NULL(int p0) { return invoke<int>(0x8E71E00F, p0); }
int GAMEPLAY::IS_STRING_NULL_OR_EMPTY(int p0) { return invoke<int>(0x42E9F2CA, p0); }
int GAMEPLAY::STRING_TO_INT(char* string, int* ToStore) { return invoke<int>(0x590A8160, string, ToStore); }
void GAMEPLAY::SET_BITS_IN_RANGE(int p0, int p1, int p2, int p3) { invoke<void*>(0x32094719, p0, p1, p2, p3); }
int GAMEPLAY::GET_BITS_IN_RANGE(int p0, int p1, int p2) { return invoke<int>(0xCA03A1E5, p0, p1, p2); }
int GAMEPLAY::ADD_STUNT_JUMP(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16) { return invoke<int>(0xB630E5FF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
int GAMEPLAY::ADD_STUNT_JUMP_ANGLED(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int p17, int p18) { return invoke<int>(0xB9B7E777, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); }
void GAMEPLAY::DELETE_STUNT_JUMP(int p0) { invoke<void*>(0x840CB5DA, p0); }
void GAMEPLAY::ENABLE_STUNT_JUMP_SET(int p0) { invoke<void*>(0x9D1E7785, p0); }
void GAMEPLAY::DISABLE_STUNT_JUMP_SET(int p0) { invoke<void*>(0x644C9FA4, p0); }
void GAMEPLAY::_0x3C806A2D(int p0) { invoke<void*>(0x3C806A2D, p0); }
int GAMEPLAY::IS_STUNT_JUMP_IN_PROGRESS() { return invoke<int>(0xF477D0B1); }
int GAMEPLAY::_0x021636EE() { return invoke<int>(0x021636EE); }
int GAMEPLAY::_0x006F9BA2() { return invoke<int>(0x006F9BA2); }
void GAMEPLAY::CANCEL_STUNT_JUMP() { invoke<void*>(0xF43D9821); }
void GAMEPLAY::SET_GAME_PAUSED(int Paused) { invoke<void*>(0x8230FF6C, Paused); }
void GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(int p0) { invoke<void*>(0xA0C3CE29, p0); }
void GAMEPLAY::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(int p0) { invoke<void*>(0xD06F1720, p0); }
int GAMEPLAY::_0xFF6191E1(int p0, int p1) { return invoke<int>(0xFF6191E1, p0, p1); }
void GAMEPLAY::_0x721B2492(int p0) { invoke<void*>(0x721B2492, p0); }
void GAMEPLAY::_0xE202879D(int p0) { invoke<void*>(0xE202879D, p0); }
int GAMEPLAY::IS_FRONTEND_FADING() { return invoke<int>(0x8FF6232C); }
void GAMEPLAY::POPULATE_NOW() { invoke<void*>(0x72C20700); }
int GAMEPLAY::GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0x6F203C6E); }
void GAMEPLAY::SET_GRAVITY_LEVEL(int p0) { invoke<void*>(0x2D833F4A, p0); }
void GAMEPLAY::START_SAVE_DATA(int p0, int p1, int p2) { invoke<void*>(0x881A694D, p0, p1, p2); }
void GAMEPLAY::STOP_SAVE_DATA() { invoke<void*>(0x3B1C07C8); }
int GAMEPLAY::_0x9EF0BC64(int p0) { return invoke<int>(0x9EF0BC64, p0); }
void GAMEPLAY::REGISTER_INT_TO_SAVE(int p0, int p1) { invoke<void*>(0xB930956F, p0, p1); }
void GAMEPLAY::_0x9B38374A(int p0, int p1) { invoke<void*>(0x9B38374A, p0, p1); }
void GAMEPLAY::REGISTER_FLOAT_TO_SAVE(int p0, int p1) { invoke<void*>(0xDB06F7AD, p0, p1); }
void GAMEPLAY::REGISTER_BOOL_TO_SAVE(int p0, int p1) { invoke<void*>(0x5417E0E0, p0, p1); }
void GAMEPLAY::REGISTER_TEXT_LABEL_TO_SAVE(int p0, int p1) { invoke<void*>(0x284352C4, p0, p1); }
void GAMEPLAY::_0xE2089749(int p0, int p1) { invoke<void*>(0xE2089749, p0, p1); }
void GAMEPLAY::_0xF91B8C33(int p0, int p1) { invoke<void*>(0xF91B8C33, p0, p1); }
void GAMEPLAY::_0x74E8FAD9(int p0, int p1) { invoke<void*>(0x74E8FAD9, p0, p1); }
void GAMEPLAY::_0x6B4335DD(int p0, int p1) { invoke<void*>(0x6B4335DD, p0, p1); }
void GAMEPLAY::_0xFB45728E(int p0, int p1, int p2) { invoke<void*>(0xFB45728E, p0, p1, p2); }
void GAMEPLAY::STOP_SAVE_STRUCT() { invoke<void*>(0xC2624A28); }
void GAMEPLAY::_0x893A342C(int p0, int p1, int p2) { invoke<void*>(0x893A342C, p0, p1, p2); }
void GAMEPLAY::STOP_SAVE_ARRAY() { invoke<void*>(0x0CAD8217); }
void GAMEPLAY::_0x0B710A51(int p0, int p1) { invoke<void*>(0x0B710A51, p0, p1); }
void GAMEPLAY::_0xE0F0684F(int p0, int p1) { invoke<void*>(0xE0F0684F, p0, p1); }
int GAMEPLAY::_0x3CE5BF6B(int p0) { return invoke<int>(0x3CE5BF6B, p0); }
int GAMEPLAY::CREATE_INCIDENT(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xFC5FF7B3, p0, p1, p2, p3, p4, p5, p6); }
int GAMEPLAY::CREATE_INCIDENT_WITH_ENTITY(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xBBC35B03, p0, p1, p2, p3, p4); }
void GAMEPLAY::DELETE_INCIDENT(int p0) { invoke<void*>(0x212BD0DC, p0); }
int GAMEPLAY::IS_INCIDENT_VALID(int p0) { return invoke<int>(0x31FD0BA4, p0); }
void GAMEPLAY::_0x0242D88E(int p0, int p1, int p2) { invoke<void*>(0x0242D88E, p0, p1, p2); }
void GAMEPLAY::_0x1F38102E(int p0, int p1) { invoke<void*>(0x1F38102E, p0, p1); }
int GAMEPLAY::FIND_SPAWN_POINT_IN_DIRECTION(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x71AEFD77, p0, p1, p2, p3, p4, p5, p6, p7); }
int GAMEPLAY::_0x42BF09B3(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x42BF09B3, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void GAMEPLAY::_0xFBDBE374(int p0, int p1) { invoke<void*>(0xFBDBE374, p0, p1); }
void GAMEPLAY::ENABLE_TENNIS_MODE(int p0, int p1, int p2) { invoke<void*>(0x0BD3F9EC, p0, p1, p2); }
int GAMEPLAY::IS_TENNIS_MODE(int p0) { return invoke<int>(0x04A947BA, p0); }
void GAMEPLAY::_0xC20A7D2B(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xC20A7D2B, p0, p1, p2, p3, p4, p5); }
int GAMEPLAY::_0x8501E727(int p0) { return invoke<int>(0x8501E727, p0); }
int GAMEPLAY::_0x1A332D2D(int p0) { return invoke<int>(0x1A332D2D, p0); }
void GAMEPLAY::_0x0C8865DF(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x0C8865DF, p0, p1, p2, p3, p4, p5); }
void GAMEPLAY::_0x49F977A9(int p0, int p1, int p2) { invoke<void*>(0x49F977A9, p0, p1, p2); }
void GAMEPLAY::_0x6F009E33(int p0, int p1, int p2) { invoke<void*>(0x6F009E33, p0, p1, p2); }
void GAMEPLAY::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<void*>(0xDA65ECAA); }
void GAMEPLAY::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(int p0) { invoke<void*>(0x6283BE32, p0); }
void GAMEPLAY::RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(int p0) { invoke<void*>(0x1479E85A, p0); }
void GAMEPLAY::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(int p0, int p1) { invoke<void*>(0xABADB709, p0, p1); }
void GAMEPLAY::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(int p0, int p1) { invoke<void*>(0x1C996BCD, p0, p1); }
int GAMEPLAY::_0xF557BAF9(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xF557BAF9, p0, p1, p2, p3, p4, p5, p6); }
void GAMEPLAY::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(int p0) { invoke<void*>(0xA8D2FB92, p0); }
void GAMEPLAY::RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<void*>(0x9A17F835); }
void GAMEPLAY::_0xE0C9307E() { invoke<void*>(0xE0C9307E); }
void GAMEPLAY::_0xA0D8C749(int p0, int p1) { invoke<void*>(0xA0D8C749, p0, p1); }
void GAMEPLAY::_0x24A4E0B2(int p0, int p1, int p2) { invoke<void*>(0x24A4E0B2, p0, p1, p2); }
void GAMEPLAY::_0x66C3C59C() { invoke<void*>(0x66C3C59C); }
void GAMEPLAY::_0xD9660339(int p0) { invoke<void*>(0xD9660339, p0); }
void GAMEPLAY::_0xD2688412(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0xD2688412, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(int p0, char* windowTitle, char* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, int maxInputLength) { invoke<void*>(0xAD99F2CE, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); }
int GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0x23D0A1CE); }
char* GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<char*>(0x44828FB3); }
void GAMEPLAY::_0x3301EA47(int p0) { invoke<void*>(0x3301EA47, p0); }
void GAMEPLAY::_0x42B484ED(int p0, int p1) { invoke<void*>(0x42B484ED, p0, p1); }
void GAMEPLAY::_0x8F60366E(int p0, int p1) { invoke<void*>(0x8F60366E, p0, p1); }
void GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(int player) { invoke<void*>(0x2EAFA1D1, player); }
void GAMEPLAY::SET_FIRE_AMMO_THIS_FRAME(int player) { invoke<void*>(0x7C18FC8A, player); }
void GAMEPLAY::SET_EXPLOSIVE_MELEE_THIS_FRAME(int player) { invoke<void*>(0x96663D56, player); }
void GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(int player) { invoke<void*>(0x86745EF3, player); }
int GAMEPLAY::_0xC3C10FCC() { return invoke<int>(0xC3C10FCC); }
void GAMEPLAY::_0x054EC103() { invoke<void*>(0x054EC103); }
int GAMEPLAY::_0x46B5A15C() { return invoke<int>(0x46B5A15C); }
void GAMEPLAY::_0x5D209F25() { invoke<void*>(0x5D209F25); }
void GAMEPLAY::_0x2D33F15A(int p0, int p1, int p2, int p3) { invoke<void*>(0x2D33F15A, p0, p1, p2, p3); }
void GAMEPLAY::_0xDF99925C() { invoke<void*>(0xDF99925C); }
void GAMEPLAY::_0xA27F4472(int p0, int p1, int p2, int p3) { invoke<void*>(0xA27F4472, p0, p1, p2, p3); }
int GAMEPLAY::_0x07FF553F(int p0, int p1, int p2) { return invoke<int>(0x07FF553F, p0, p1, p2); }

void AUDIO::PLAY_PED_RINGTONE(int p0, int p1, int p2) { invoke<void*>(0x1D530E47, p0, p1, p2); }
int AUDIO::IS_PED_RINGTONE_PLAYING(int p0) { return invoke<int>(0xFE576EE4, p0); }
void AUDIO::STOP_PED_RINGTONE(int p0) { invoke<void*>(0xFEEA107C, p0); }
int AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<int>(0x4ED1400A); }
int AUDIO::_0x16FB88B5() { return invoke<int>(0x16FB88B5); }
void AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<void*>(0xB2BC25F8); }
void AUDIO::ADD_LINE_TO_CONVERSATION(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0x96CD0513, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void AUDIO::ADD_PED_TO_CONVERSATION(int p0, int p1, int p2) { invoke<void*>(0xF8D5EB86, p0, p1, p2); }
void AUDIO::_0x73C6F979(int p0, int p1, int p2, int p3) { invoke<void*>(0x73C6F979, p0, p1, p2, p3); }
void AUDIO::_0x88203DDA(int p0, int p1) { invoke<void*>(0x88203DDA, p0, p1); }
void AUDIO::SET_MICROPHONE_POSITION(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0xAD7BB191, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void AUDIO::_0x1193ED6E(int p0) { invoke<void*>(0x1193ED6E, p0); }
void AUDIO::START_SCRIPT_PHONE_CONVERSATION(int p0, int p1) { invoke<void*>(0x38E42D07, p0, p1); }
void AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(int p0, int p1) { invoke<void*>(0x9ACB213A, p0, p1); }
void AUDIO::START_SCRIPT_CONVERSATION(int p0, int p1, int p2, int p3) { invoke<void*>(0xE5DE7D9D, p0, p1, p2, p3); }
void AUDIO::PRELOAD_SCRIPT_CONVERSATION(int p0, int p1, int p2, int p3) { invoke<void*>(0xDDF5C579, p0, p1, p2, p3); }
void AUDIO::START_PRELOADED_CONVERSATION() { invoke<void*>(0xA170261B); }
int AUDIO::_0x336F3D35() { return invoke<int>(0x336F3D35); }
int AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<int>(0xCB8FD96F); }
int AUDIO::IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<int>(0xE1870EA9); }
int AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<int>(0x9620E41F); }
void AUDIO::PAUSE_SCRIPTED_CONVERSATION(int p0) { invoke<void*>(0xE2C9C6F8, p0); }
void AUDIO::RESTART_SCRIPTED_CONVERSATION() { invoke<void*>(0x6CB24B56); }
int AUDIO::STOP_SCRIPTED_CONVERSATION(int p0) { return invoke<int>(0xAB77DA7D, p0); }
void AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<void*>(0x85C98304); }
void AUDIO::INTERRUPT_CONVERSATION(int p0, int p1, int p2) { invoke<void*>(0xF3A67AF3, p0, p1, p2); }
int AUDIO::_0xB58B8FF3(int p0) { return invoke<int>(0xB58B8FF3, p0); }
void AUDIO::_0x789D8C6C(int p0) { invoke<void*>(0x789D8C6C, p0); }
void AUDIO::REGISTER_SCRIPT_WITH_AUDIO(int p0) { invoke<void*>(0xA6203643, p0); }
void AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<void*>(0x66728EFE); }
int AUDIO::REQUEST_MISSION_AUDIO_BANK(int p0, int p1) { return invoke<int>(0x916E37CA, p0, p1); }
int AUDIO::REQUEST_AMBIENT_AUDIO_BANK(int p0, int p1) { return invoke<int>(0x23C88BC7, p0, p1); }
int AUDIO::REQUEST_SCRIPT_AUDIO_BANK(int p0, int p1) { return invoke<int>(0x21322887, p0, p1); }
int AUDIO::HINT_AMBIENT_AUDIO_BANK(int p0, int p1) { return invoke<int>(0xF1850DDC, p0, p1); }
int AUDIO::HINT_SCRIPT_AUDIO_BANK(int p0, int p1) { return invoke<int>(0x41FA0E51, p0, p1); }
void AUDIO::RELEASE_MISSION_AUDIO_BANK() { invoke<void*>(0x8E8824C7); }
void AUDIO::RELEASE_AMBIENT_AUDIO_BANK() { invoke<void*>(0x8C938784); }
void AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(int p0) { invoke<void*>(0x16707ABC, p0); }
void AUDIO::RELEASE_SCRIPT_AUDIO_BANK() { invoke<void*>(0x22F865E5); }
void AUDIO::_0xA58BBF4F() { invoke<void*>(0xA58BBF4F); }
int AUDIO::GET_SOUND_ID() { return invoke<int>(0x6AE0AD56); }
void AUDIO::RELEASE_SOUND_ID(int p0) { invoke<void*>(0x9C080899, p0); }
void AUDIO::PLAY_SOUND(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xB6E1917F, p0, p1, p2, p3, p4); }
void AUDIO::PLAY_SOUND_FRONTEND(int p0, char* SoundFrom, char* SoundSet) { invoke<void*>(0x2E458F74, p0, SoundFrom, SoundSet); }
void AUDIO::_0xC70E6CFA(int p0, int p1) { invoke<void*>(0xC70E6CFA, p0, p1); }
void AUDIO::PLAY_SOUND_FROM_ENTITY(int p0, char* p1, int entity, char* p3, int p4, int p5) { invoke<void*>(0x95AE00F8, p0, p1, entity, p3, p4, p5); }
void AUDIO::PLAY_SOUND_FROM_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xCAD3E2D5, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void AUDIO::STOP_SOUND(int p0) { invoke<void*>(0xCD7F4030, p0); }
int AUDIO::GET_NETWORK_ID_FROM_SOUND_ID(int p0) { return invoke<int>(0x2576F610, p0); }
int AUDIO::_0xD064D4DC(int p0) { return invoke<int>(0xD064D4DC, p0); }
void AUDIO::SET_VARIABLE_ON_SOUND(int p0, int p1, int p2) { invoke<void*>(0x606EE5FA, p0, p1, p2); }
void AUDIO::SET_VARIABLE_ON_STREAM(int p0, int p1) { invoke<void*>(0xF67BB44C, p0, p1); }
void AUDIO::OVERRIDE_UNDERWATER_STREAM(int p0, int p1) { invoke<void*>(0x9A083B7E, p0, p1); }
void AUDIO::_0x62D026BE(int p0, int p1) { invoke<void*>(0x62D026BE, p0, p1); }
int AUDIO::HAS_SOUND_FINISHED(int p0) { return invoke<int>(0xE85AEC2E, p0); }
void AUDIO::_PLAY_AMBIENT_SPEECH1(int  pedHandle, char* speechName, char* speechParam) { invoke<void*>(0x5C57B85D, pedHandle, speechName, speechParam); }
void AUDIO::_PLAY_AMBIENT_SPEECH2(int  pedHandle, char* speechName, char* speechParam) { invoke<void*>(0x444180DB, pedHandle, speechName, speechParam); }
void AUDIO::_0x8386AE28(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x8386AE28, p0, p1, p2, p3, p4); }
void AUDIO::_0xA1A1402E(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xA1A1402E, p0, p1, p2, p3, p4, p5); }
void AUDIO::OVERRIDE_TREVOR_RAGE(int p0) { invoke<void*>(0x05B9B5CF, p0); }
void AUDIO::RESET_TREVOR_RAGE() { invoke<void*>(0xE80CF0D4); }
void AUDIO::SET_PLAYER_ANGRY(int p0, int p1) { invoke<void*>(0x782CA58D, p0, p1); }
void AUDIO::PLAY_PAIN(int p0, int p1, int p2) { invoke<void*>(0x874BD6CB, p0, p1, p2); }
void AUDIO::RELEASE_WEAPON_AUDIO() { invoke<void*>(0x6096504C); }
void AUDIO::_0x59A3A17D(int p0) { invoke<void*>(0x59A3A17D, p0); }
void AUDIO::_0x0E387BFE(int p0) { invoke<void*>(0x0E387BFE, p0); }
void AUDIO::SET_AMBIENT_VOICE_NAME(int p0, char* p1) { invoke<void*>(0xBD2EA1A1, p0, p1); }
void AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(int p0) { invoke<void*>(0xBB8E64BF, p0); }
int AUDIO::IS_AMBIENT_SPEECH_PLAYING(int p0) { return invoke<int>(0x1972E8AA, p0); }
int AUDIO::IS_SCRIPTED_SPEECH_PLAYING(int p0) { return invoke<int>(0x2C653904, p0); }
int AUDIO::IS_ANY_SPEECH_PLAYING(int p0) { return invoke<int>(0x2B74A6D6, p0); }
int AUDIO::_0x8BD5F11E(int p0, int p1, int p2) { return invoke<int>(0x8BD5F11E, p0, p1, p2); }
int AUDIO::IS_PED_IN_CURRENT_CONVERSATION(int p0) { return invoke<int>(0x7B2F0743, p0); }
void AUDIO::SET_PED_IS_DRUNK(int p0, int p1) { invoke<void*>(0xD2EA77A3, p0, p1); }
void AUDIO::_0x498849F3(int p0, int p1, int p2) { invoke<void*>(0x498849F3, p0, p1, p2); }
int AUDIO::_0x0CBAF2EF(int p0) { return invoke<int>(0x0CBAF2EF, p0); }
void AUDIO::SET_ANIMAL_MOOD(int p0, int p1) { invoke<void*>(0x3EA7C6CB, p0, p1); }
int AUDIO::IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<int>(0x6E502A5B); }
void AUDIO::SET_MOBILE_PHONE_RADIO_STATE(int p0) { invoke<void*>(0xE1E0ED34, p0); }
int AUDIO::GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0x1C4946AC); }
int AUDIO::GET_PLAYER_RADIO_STATION_NAME() { return invoke<int>(0xD909C107); }
int AUDIO::GET_RADIO_STATION_NAME(int radioStation) { return invoke<int>(0x3DF493BC, radioStation); }
int AUDIO::GET_PLAYER_RADIO_STATION_GENRE() { return invoke<int>(0x872CF0EA); }
int AUDIO::IS_RADIO_RETUNING() { return invoke<int>(0xCF29097B); }
void AUDIO::_0x53DB6994() { invoke<void*>(0x53DB6994); }
void AUDIO::_0xD70ECC80() { invoke<void*>(0xD70ECC80); }
void AUDIO::SET_RADIO_TO_STATION_NAME(char* radioStation) { invoke<void*>(0x7B36E35E, radioStation); }
void AUDIO::SET_VEH_RADIO_STATION(int hVehicle, char* radioStation) { invoke<void*>(0xE391F55F, hVehicle, radioStation); }
void AUDIO::_0x7ABB89D2(int p0) { invoke<void*>(0x7ABB89D2, p0); }
void AUDIO::SET_EMITTER_RADIO_STATION(int p0, int p1) { invoke<void*>(0x87431585, p0, p1); }
void AUDIO::SET_STATIC_EMITTER_ENABLED(int p0, int p1) { invoke<void*>(0x91F72E92, p0, p1); }
void AUDIO::SET_RADIO_TO_STATION_INDEX(int p0) { invoke<void*>(0x1D82766D, p0); }
void AUDIO::SET_FRONTEND_RADIO_ACTIVE(int p0) { invoke<void*>(0xB1172075, p0); }
void AUDIO::UNLOCK_MISSION_NEWS_STORY(int p0) { invoke<void*>(0xCCD9ABE4, p0); }
int AUDIO::GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(int p0) { return invoke<int>(0x27305D37, p0); }
int AUDIO::GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0xA2B88CA7); }
void AUDIO::PLAY_END_CREDITS_MUSIC(int p0) { invoke<void*>(0x8E88B3CC, p0); }
void AUDIO::SKIP_RADIO_FORWARD() { invoke<void*>(0x10D36630); }
void AUDIO::FREEZE_RADIO_STATION(int p0) { invoke<void*>(0x286BF543, p0); }
void AUDIO::UNFREEZE_RADIO_STATION(int p0) { invoke<void*>(0x4D46202C, p0); }
void AUDIO::SET_RADIO_AUTO_UNFREEZE(int p0) { invoke<void*>(0xA40196BF, p0); }
void AUDIO::SET_INITIAL_PLAYER_STATION(int p0) { invoke<void*>(0x9B069233, p0); }
void AUDIO::SET_USER_RADIO_CONTROL_ENABLED(int p0) { invoke<void*>(0x52E054CE, p0); }
void AUDIO::SET_RADIO_TRACK(int p0, int p1) { invoke<void*>(0x76E96212, p0, p1); }
void AUDIO::SET_VEHICLE_RADIO_LOUD(int p0, int p1) { invoke<void*>(0x8D9EDD99, p0, p1); }
int AUDIO::_0xCBA99F4A(int p0) { return invoke<int>(0xCBA99F4A, p0); }
void AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(int Toggle) { invoke<void*>(0x990085F0, Toggle); }
int AUDIO::_0x46B0C696() { return invoke<int>(0x46B0C696); }
int AUDIO::_0x2A3E5E8B() { return invoke<int>(0x2A3E5E8B); }
void AUDIO::SET_VEHICLE_RADIO_ENABLED(int p0, int p1) { invoke<void*>(0x6F812CAB, p0, p1); }
void AUDIO::_0x128C3873(int p0, int p1, int p2) { invoke<void*>(0x128C3873, p0, p1, p2); }
void AUDIO::_0x1D766976(int p0) { invoke<void*>(0x1D766976, p0); }
int AUDIO::_0xCC91FCF5() { return invoke<int>(0xCC91FCF5); }
int AUDIO::FIND_RADIO_STATION_INDEX(int p0) { return invoke<int>(0xECA1512F, p0); }
void AUDIO::_0xB1FF7137(int p0, int p1) { invoke<void*>(0xB1FF7137, p0, p1); }
void AUDIO::_0xC8B514E2(int p0) { invoke<void*>(0xC8B514E2, p0); }
void AUDIO::_0xBE998184(int p0, int p1) { invoke<void*>(0xBE998184, p0, p1); }
void AUDIO::_0x8AFC488D(int p0, int p1) { invoke<void*>(0x8AFC488D, p0, p1); }
void AUDIO::SET_AMBIENT_ZONE_STATE(int p0, int p1, int p2) { invoke<void*>(0x2849CAC9, p0, p1, p2); }
void AUDIO::CLEAR_AMBIENT_ZONE_STATE(int p0, int p1) { invoke<void*>(0xCDFF3C82, p0, p1); }
void AUDIO::SET_AMBIENT_ZONE_LIST_STATE(int p0, int p1, int p2) { invoke<void*>(0xBF80B412, p0, p1, p2); }
void AUDIO::CLEAR_AMBIENT_ZONE_LIST_STATE(int p0, int p1) { invoke<void*>(0x38B9B8D4, p0, p1); }
void AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(int p0, int p1, int p2) { invoke<void*>(0xC1FFB672, p0, p1, p2); }
void AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(int p0, int p1, int p2) { invoke<void*>(0x5F5A2605, p0, p1, p2); }
int AUDIO::IS_AMBIENT_ZONE_ENABLED(int p0) { return invoke<int>(0xBFABD872, p0); }
void AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE(int p0) { invoke<void*>(0xCE1332B7, p0); }
void AUDIO::GET_PLAYER_HEADSET_SOUND_ALTERNATE(int p0, int p1) { invoke<void*>(0xD63CF33A, p0, p1); }
int AUDIO::PLAY_POLICE_REPORT(char* p0, float p1) { return invoke<int>(0x3F277B62, p0, p1); }
void AUDIO::BLIP_SIREN(int p0) { invoke<void*>(0xC0EB6924, p0); }
void AUDIO::OVERRIDE_VEH_HORN(int p0, int p1, int p2) { invoke<void*>(0x2ACAB783, p0, p1, p2); }
int AUDIO::IS_HORN_ACTIVE(int p0) { return invoke<int>(0x20E2BDD0, p0); }
void AUDIO::SET_AGGRESSIVE_HORNS(int p0) { invoke<void*>(0x01D6EABE, p0); }
void AUDIO::_0x3C395AEE(int p0) { invoke<void*>(0x3C395AEE, p0); }
void AUDIO::_0x8CE63FA1(int p0, int p1) { invoke<void*>(0x8CE63FA1, p0, p1); }
int AUDIO::IS_STREAM_PLAYING() { return invoke<int>(0xF1F51A14); }
int AUDIO::GET_STREAM_PLAY_TIME() { return invoke<int>(0xB4F0AD56); }
int AUDIO::LOAD_STREAM(int p0, int p1) { return invoke<int>(0x0D89599D, p0, p1); }
int AUDIO::LOAD_STREAM_WITH_START_OFFSET(int p0, int p1, int p2) { return invoke<int>(0xE5B5745C, p0, p1, p2); }
void AUDIO::_0xA1D7FABE(int p0) { invoke<void*>(0xA1D7FABE, p0); }
void AUDIO::PLAY_STREAM_FROM_VEHICLE(int p0) { invoke<void*>(0xF8E4BDA2, p0); }
void AUDIO::PLAY_STREAM_FROM_OBJECT(int p0) { invoke<void*>(0xC5266BF7, p0); }
void AUDIO::PLAY_STREAM_FRONTEND() { invoke<void*>(0x2C2A16BC); }
void AUDIO::SPECIAL_FRONTEND_EQUAL(int p0, int p1, int p2) { invoke<void*>(0x6FE5D865, p0, p1, p2); }
void AUDIO::STOP_STREAM() { invoke<void*>(0xD1E364DE); }
void AUDIO::STOP_PED_SPEAKING(int p0, int p1) { invoke<void*>(0xFF92B49D, p0, p1); }
void AUDIO::DISABLE_PED_PAIN_AUDIO(int p0, int p1) { invoke<void*>(0x3B8E2D5F, p0, p1); }
int AUDIO::IS_AMBIENT_SPEECH_DISABLED(int p0) { return invoke<int>(0x109D1F89, p0); }
void AUDIO::SET_SIREN_WITH_NO_DRIVER(int p0, int p1) { invoke<void*>(0x77182D58, p0, p1); }
void AUDIO::_0xDE8BA3CD(int p0) { invoke<void*>(0xDE8BA3CD, p0); }
void AUDIO::SET_HORN_ENABLED(int p0, int p1) { invoke<void*>(0x6EB92D05, p0, p1); }
void AUDIO::SET_AUDIO_VEHICLE_PRIORITY(int p0, int p1) { invoke<void*>(0x271A9766, p0, p1); }
void AUDIO::_0x2F0A16D1(int p0, int p1) { invoke<void*>(0x2F0A16D1, p0, p1); }
void AUDIO::USE_SIREN_AS_HORN(int p0, int p1) { invoke<void*>(0xC6BC16F3, p0, p1); }
void AUDIO::_0x33B0B007(int p0, int p1) { invoke<void*>(0x33B0B007, p0, p1); }
void AUDIO::_0x1C0C5E4C(int p0, int p1, int p2) { invoke<void*>(0x1C0C5E4C, p0, p1, p2); }
int AUDIO::_0x6E660D3F(int p0) { return invoke<int>(0x6E660D3F, p0); }
void AUDIO::_0x23BE6432(int p0, int p1) { invoke<void*>(0x23BE6432, p0, p1); }
void AUDIO::_0xE81FAC68(int p0, int p1) { invoke<void*>(0xE81FAC68, p0, p1); }
void AUDIO::_0x9365E042(int p0, int p1) { invoke<void*>(0x9365E042, p0, p1); }
void AUDIO::_0x2A60A90E(int p0, int p1) { invoke<void*>(0x2A60A90E, p0, p1); }
void AUDIO::SET_VEHICLE_BOOST_ACTIVE(int vehicle, int Toggle) { invoke<void*>(0x072F15F2, vehicle, Toggle); }
void AUDIO::_0x934BE749(int p0, int p1) { invoke<void*>(0x934BE749, p0, p1); }
void AUDIO::_0xE61110A2(int p0, int p1) { invoke<void*>(0xE61110A2, p0, p1); }
void AUDIO::PLAY_VEHICLE_DOOR_OPEN_SOUND(int p0, int p1) { invoke<void*>(0x84930330, p0, p1); }
void AUDIO::PLAY_VEHICLE_DOOR_CLOSE_SOUND(int p0, int p1) { invoke<void*>(0xBA2CF407, p0, p1); }
void AUDIO::_0x563B635D(int p0, int p1) { invoke<void*>(0x563B635D, p0, p1); }
int AUDIO::IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<int>(0x7643170D); }
void AUDIO::SET_GPS_ACTIVE(int p0) { invoke<void*>(0x0FC3379A, p0); }
void AUDIO::PLAY_MISSION_COMPLETE_AUDIO(char* p0) { invoke<void*>(0x3033EA1D, p0); }
int AUDIO::IS_MISSION_COMPLETE_PLAYING() { return invoke<int>(0x939982A1); }
int AUDIO::_0xCBE09AEC() { return invoke<int>(0xCBE09AEC); }
void AUDIO::_0xD2858D8A(int p0) { invoke<void*>(0xD2858D8A, p0); }
int AUDIO::START_AUDIO_SCENE(int p0) { return invoke<int>(0xE48D757B, p0); }
void AUDIO::STOP_AUDIO_SCENE(int p0) { invoke<void*>(0xA08D8C58, p0); }
void AUDIO::STOP_AUDIO_SCENES() { invoke<void*>(0xF6C7342A); }
int AUDIO::IS_AUDIO_SCENE_ACTIVE(int p0) { return invoke<int>(0xACBED05C, p0); }
void AUDIO::SET_AUDIO_SCENE_VARIABLE(int p0, int p1, int p2) { invoke<void*>(0x19BB3CE8, p0, p1, p2); }
void AUDIO::_0xE812925D(int p0) { invoke<void*>(0xE812925D, p0); }
void AUDIO::_0x2BC93264(int p0, int p1, int p2) { invoke<void*>(0x2BC93264, p0, p1, p2); }
void AUDIO::_0x308ED0EC(int p0, int p1) { invoke<void*>(0x308ED0EC, p0, p1); }
int AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<int>(0x86E995D1); }
int AUDIO::PREPARE_MUSIC_EVENT(int p0) { return invoke<int>(0x534A5C1C, p0); }
int AUDIO::CANCEL_MUSIC_EVENT(int p0) { return invoke<int>(0x89FF942D, p0); }
int AUDIO::TRIGGER_MUSIC_EVENT(int p0) { return invoke<int>(0xB6094948, p0); }
int AUDIO::_0x2705C4D5() { return invoke<int>(0x2705C4D5); }
int AUDIO::GET_MUSIC_PLAYTIME() { return invoke<int>(0xD633C809); }
void AUDIO::_0x53FC3FEC(int p0, int p1, int p2, int p3) { invoke<void*>(0x53FC3FEC, p0, p1, p2, p3); }
void AUDIO::CLEAR_ALL_BROKEN_GLASS() { invoke<void*>(0xE6B033BF); }
void AUDIO::_0x95050CAD(int p0, int p1) { invoke<void*>(0x95050CAD, p0, p1); }
void AUDIO::_0xE64F97A0(int p0, int p1) { invoke<void*>(0xE64F97A0, p0, p1); }
void AUDIO::_0xD87AF337() { invoke<void*>(0xD87AF337); }
int AUDIO::PREPARE_ALARM(int p0) { return invoke<int>(0x084932E8, p0); }
void AUDIO::START_ALARM(int p0, int p1) { invoke<void*>(0x703F524B, p0, p1); }
void AUDIO::STOP_ALARM(int p0, int p1) { invoke<void*>(0xF987BE8C, p0, p1); }
void AUDIO::STOP_ALL_ALARMS(int p0) { invoke<void*>(0xC3CB9DC6, p0); }
int AUDIO::IS_ALARM_PLAYING(int p0) { return invoke<int>(0x9D8E1D23, p0); }
int AUDIO::GET_VEHICLE_DEFAULT_HORN(int p0) { return invoke<int>(0xE84ABC19, p0); }
int AUDIO::_0xFD4B5B3B(int p0) { return invoke<int>(0xFD4B5B3B, p0); }
void AUDIO::RESET_PED_AUDIO_FLAGS(int p0) { invoke<void*>(0xDF720C86, p0); }
void AUDIO::_0xC307D531(int p0, int p1) { invoke<void*>(0xC307D531, p0, p1); }
void AUDIO::_0x13EB5861(int p0) { invoke<void*>(0x13EB5861, p0); }
void AUDIO::_0x7BED1872(int p0, int p1) { invoke<void*>(0x7BED1872, p0, p1); }
void AUDIO::SET_AUDIO_FLAG(int p0, int p1) { invoke<void*>(0x1C09C9E0, p0, p1); }
int AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT(int p0, int p1) { return invoke<int>(0xE1D91FD0, p0, p1); }
int AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(int p0, int p1) { return invoke<int>(0x7652DD49, p0, p1); }
int AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(int p0) { return invoke<int>(0x507F3241, p0); }
int AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(int p0) { return invoke<int>(0xADEED2B4, p0); }
void AUDIO::_0x55A21772(int p0, int p1, int p2, int p3) { invoke<void*>(0x55A21772, p0, p1, p2, p3); }
void AUDIO::_0xA17F9AB0(int p0, int p1) { invoke<void*>(0xA17F9AB0, p0, p1); }
void AUDIO::_0x62B43677(int p0) { invoke<void*>(0x62B43677, p0); }
void AUDIO::_0x8AD670EC(int p0, int p1) { invoke<void*>(0x8AD670EC, p0, p1); }
void AUDIO::_0xD24B4D0C(int p0) { invoke<void*>(0xD24B4D0C, p0); }
void AUDIO::_0x7262B5BA() { invoke<void*>(0x7262B5BA); }
int AUDIO::_0x93A44A1F() { return invoke<int>(0x93A44A1F); }
void AUDIO::_0x13777A0B(int p0) { invoke<void*>(0x13777A0B, p0); }
void AUDIO::_0x1134F68B() { invoke<void*>(0x1134F68B); }
void AUDIO::_0xE0047BFD(int p0) { invoke<void*>(0xE0047BFD, p0); }

void CUTSCENE::REQUEST_CUTSCENE(char* CutsceneName, int p1) { invoke<void*>(0xB5977853, CutsceneName, p1); }
void CUTSCENE::_0xD98F656A(int p0, int p1, int p2) { invoke<void*>(0xD98F656A, p0, p1, p2); }
void CUTSCENE::REMOVE_CUTSCENE() { invoke<void*>(0x8052F533); }
int CUTSCENE::HAS_CUTSCENE_LOADED() { return invoke<int>(0xF9998582); }
int CUTSCENE::HAS_THIS_CUTSCENE_LOADED(int p0) { return invoke<int>(0x3C5619F2, p0); }
void CUTSCENE::_0x25A2CABC(int p0) { invoke<void*>(0x25A2CABC, p0); }
int CUTSCENE::_0xDD8878E9() { return invoke<int>(0xDD8878E9); }
int CUTSCENE::_0x7B93CDAA(int p0) { return invoke<int>(0x7B93CDAA, p0); }
void CUTSCENE::_0x47DB08A9(int p0, int p1, int p2) { invoke<void*>(0x47DB08A9, p0, p1, p2); }
void CUTSCENE::START_CUTSCENE(int p0) { invoke<void*>(0x210106F6, p0); }
void CUTSCENE::START_CUTSCENE_AT_COORDS(int p0, int p1, int p2, int p3) { invoke<void*>(0x58BEA436, p0, p1, p2, p3); }
void CUTSCENE::STOP_CUTSCENE(int p0) { invoke<void*>(0x5EE84DC7, p0); }
void CUTSCENE::STOP_CUTSCENE_IMMEDIATELY() { invoke<void*>(0xF528A2AD); }
void CUTSCENE::SET_CUTSCENE_ORIGIN(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xB0AD7792, p0, p1, p2, p3, p4); }
int CUTSCENE::GET_CUTSCENE_TIME() { return invoke<int>(0x53F5B5AB); }
int CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() { return invoke<int>(0x0824EBE8); }
int CUTSCENE::WAS_CUTSCENE_SKIPPED() { return invoke<int>(0xC9B6949D); }
int CUTSCENE::HAS_CUTSCENE_FINISHED() { return invoke<int>(0x5DED14B4); }
int CUTSCENE::IS_CUTSCENE_ACTIVE() { return invoke<int>(0xCCE2FE9D); }
int CUTSCENE::IS_CUTSCENE_PLAYING() { return invoke<int>(0xA3A78392); }
int CUTSCENE::GET_CUTSCENE_SECTION_PLAYING() { return invoke<int>(0x1026F0D6); }
int CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(int p0, int p1) { return invoke<int>(0x1D09ABC7, p0, p1); }
int CUTSCENE::_0x5AE68AE6() { return invoke<int>(0x5AE68AE6); }
void CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x7CBC3EC7, p0, p1, p2, p3, p4); }
int CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(int p0, int p1) { return invoke<int>(0x46D18755, p0, p1); }
void CUTSCENE::SET_CUTSCENE_TRIGGER_AREA(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x9D76D9DE, p0, p1, p2, p3, p4, p5); }
int CUTSCENE::CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(int p0, int p1) { return invoke<int>(0x55C30B26, p0, p1); }
int CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(int p0, int p1) { return invoke<int>(0x8FF5D3C4, p0, p1); }
int CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(int p0) { return invoke<int>(0xEDAE6C02, p0); }
void CUTSCENE::_0x35721A08(int p0) { invoke<void*>(0x35721A08, p0); }
void CUTSCENE::SET_CUTSCENE_FADE_VALUES(int p0, int p1, int p2, int p3) { invoke<void*>(0xD19EF0DD, p0, p1, p2, p3); }
void CUTSCENE::_0x8338DA1D(int p0) { invoke<void*>(0x8338DA1D, p0); }
void CUTSCENE::_0x04377C10(int p0) { invoke<void*>(0x04377C10, p0); }
int CUTSCENE::_0xDBD88708() { return invoke<int>(0xDBD88708); }
void CUTSCENE::_0x28D54A7F(int p0) { invoke<void*>(0x28D54A7F, p0); }
void CUTSCENE::REGISTER_SYNCHRONISED_SCRIPT_SPEECH() { invoke<void*>(0xB60CFBB9); }
void CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x6AF994A1, p0, p1, p2, p3, p4); }
void CUTSCENE::_0x1E7DA95E(int p0, int p1, int p2) { invoke<void*>(0x1E7DA95E, p0, p1, p2); }
int CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST(int p0, int p1) { return invoke<int>(0x58E67409, p0, p1); }
void CUTSCENE::_0x22E9A9DE(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x22E9A9DE, p0, p1, p2, p3, p4); }
int CUTSCENE::_0x4315A7C5() { return invoke<int>(0x4315A7C5); }

int INTERIOR::GET_INTERIOR_GROUP_ID(int p0) { return invoke<int>(0x09D6376F, p0); }
Vector3 INTERIOR::GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(int p0, int p1, int p2, int p3) { return invoke<Vector3>(0x7D8F26A1, p0, p1, p2, p3); }
int INTERIOR::IS_INTERIOR_SCENE() { return invoke<int>(0x55226C13); }
int INTERIOR::IS_VALID_INTERIOR(int p0) { return invoke<int>(0x39C0B635, p0); }
void INTERIOR::CLEAR_ROOM_FOR_ENTITY(int p0) { invoke<void*>(0x7DDADB92, p0); }
void INTERIOR::FORCE_ROOM_FOR_ENTITY(int p0, int p1, int p2) { invoke<void*>(0x10BD4435, p0, p1, p2); }
int INTERIOR::GET_ROOM_KEY_FROM_ENTITY(int p0) { return invoke<int>(0xE4ACF8C3, p0); }
int INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(int p0) { return invoke<int>(0x91EA80EF, p0); }
int INTERIOR::GET_INTERIOR_FROM_ENTITY(int p0) { return invoke<int>(0x5C644614, p0); }
void INTERIOR::_0xE645E162(int p0, int p1) { invoke<void*>(0xE645E162, p0, p1); }
void INTERIOR::_0xD79803B5(int p0, int p1) { invoke<void*>(0xD79803B5, p0, p1); }
void INTERIOR::_0x1F6B4B13(int p0) { invoke<void*>(0x1F6B4B13, p0); }
void INTERIOR::_0x0E9529CC(int p0) { invoke<void*>(0x0E9529CC, p0); }
int INTERIOR::_0x4FF3D3F5() { return invoke<int>(0x4FF3D3F5); }
void INTERIOR::_0x617DC75D() { invoke<void*>(0x617DC75D); }
int INTERIOR::GET_INTERIOR_AT_COORDS(int p0, int p1, int p2) { return invoke<int>(0xA17FBF37, p0, p1, p2); }
void INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(int p0, int p1) { invoke<void*>(0xA2A73564, p0, p1); }
void INTERIOR::_0x3ADA414E(int p0) { invoke<void*>(0x3ADA414E, p0); }
void INTERIOR::UNPIN_INTERIOR(int p0) { invoke<void*>(0xFCFF792A, p0); }
int INTERIOR::IS_INTERIOR_READY(int p0) { return invoke<int>(0xE1EF6450, p0); }
int INTERIOR::_0x96525B06(float x, float y, float z, char* interior) { return invoke<int>(0x96525B06, x, y, z, interior); }
int INTERIOR::_0x7762249C(int p0, int p1, int p2) { return invoke<int>(0x7762249C, p0, p1, p2); }
int INTERIOR::GET_INTERIOR_FROM_COLLISION(int p0, int p1, int p2) { return invoke<int>(0x7ED33DC1, p0, p1, p2); }
void INTERIOR::_0xC80A5DDF(int p0, int p1) { invoke<void*>(0xC80A5DDF, p0, p1); }
void INTERIOR::_0xDBA768A1(int p0, int p1) { invoke<void*>(0xDBA768A1, p0, p1); }
int INTERIOR::_0x39A3CC6F(int p0, int p1) { return invoke<int>(0x39A3CC6F, p0, p1); }
void INTERIOR::REFRESH_INTERIOR(int p0) { invoke<void*>(0x9A29ACE6, p0); }
void INTERIOR::_0x1F375B4C(int p0) { invoke<void*>(0x1F375B4C, p0); }
void INTERIOR::DISABLE_INTERIOR(int p0, int p1) { invoke<void*>(0x093ADEA5, p0, p1); }
int INTERIOR::IS_INTERIOR_DISABLED(int p0) { return invoke<int>(0x81F34C71, p0); }
void INTERIOR::CAP_INTERIOR(int p0, int p1) { invoke<void*>(0x34E735A6, p0, p1); }
int INTERIOR::IS_INTERIOR_CAPPED(int p0) { return invoke<int>(0x18B17C80, p0); }
void INTERIOR::_0x5EF9C5C2(int p0) { invoke<void*>(0x5EF9C5C2, p0); }

void CAM::RENDER_SCRIPT_CAMS(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x74337969, p0, p1, p2, p3, p4); }
void CAM::_0xD3C08183(int p0, int p1, int p2) { invoke<void*>(0xD3C08183, p0, p1, p2); }
int CAM::CREATE_CAM(char* camName, int p1) { return invoke<int>(0xE9BF2A7D, camName, p1); }
int CAM::CREATE_CAM_WITH_PARAMS(char* camName, float* posX, float* posY, float* posZ, float* rotX, float* rotY, float* rotZ, float fov, int p8, int p9) { return invoke<int>(0x23B02F15, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
int CAM::CREATE_CAMERA(int p0, int p1) { return invoke<int>(0x5D6739AE, p0, p1); }
int CAM::CREATE_CAMERA_WITH_PARAMS(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<int>(0x0688BE9A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void CAM::DESTROY_CAM(int p0, int p1) { invoke<void*>(0xC39302BD, p0, p1); }
void CAM::DESTROY_ALL_CAMS(int p0) { invoke<void*>(0x10C151CE, p0); }
int CAM::DOES_CAM_EXIST(int p0) { return invoke<int>(0x1EF89DC0, p0); }
void CAM::SET_CAM_ACTIVE(int p0, int p1) { invoke<void*>(0x064659C2, p0, p1); }
int CAM::IS_CAM_ACTIVE(int p0) { return invoke<int>(0x4B58F177, p0); }
int CAM::IS_CAM_RENDERING(int p0) { return invoke<int>(0x6EC6B5B2, p0); }
int CAM::GET_RENDERING_CAM() { return invoke<int>(0x0FCF4DF1); }
Vector3 CAM::GET_CAM_COORD(int p0) { return invoke<Vector3>(0x7C40F09C, p0); }
Vector3 CAM::GET_CAM_ROT(int p0, int p1) { return invoke<Vector3>(0xDAC84C9F, p0, p1); }
int CAM::GET_CAM_FOV(int Camera_handle) { return invoke<int>(0xD6E9FCF5, Camera_handle); }
int CAM::GET_CAM_NEAR_CLIP(int p0) { return invoke<int>(0xCFCD35EE, p0); }
int CAM::GET_CAM_FAR_CLIP(int p0) { return invoke<int>(0x09F119B8, p0); }
int CAM::GET_CAM_FAR_DOF(int p0) { return invoke<int>(0x98C5CCE9, p0); }
void CAM::SET_CAM_PARAMS(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0x2167CEBF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void CAM::SET_CAM_COORD(int p0, int p1, int p2, int p3) { invoke<void*>(0x7A8053AF, p0, p1, p2, p3); }
void CAM::SET_CAM_ROT(int p0, Vector3 p1, int p2) { invoke<void*>(0xEE38B3C1, p0, p1, p2); }
void CAM::SET_CAM_FOV(char* camName, float FovVaule) { invoke<void*>(0xD3D5D74F, camName, FovVaule); }
void CAM::SET_CAM_NEAR_CLIP(int p0, int p1) { invoke<void*>(0x46DB13B1, p0, p1); }
void CAM::SET_CAM_FAR_CLIP(int p0, int p1) { invoke<void*>(0x0D23E381, p0, p1); }
void CAM::SET_CAM_NEAR_DOF(int p0, int p1) { invoke<void*>(0xF28254DF, p0, p1); }
void CAM::SET_CAM_FAR_DOF(int p0, int p1) { invoke<void*>(0x58515E8E, p0, p1); }
void CAM::SET_CAM_DOF_STRENGTH(int p0, int p1) { invoke<void*>(0x3CC4EB3F, p0, p1); }
void CAM::SET_CAM_DOF_PLANES(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xAD6C2B8F, p0, p1, p2, p3, p4); }
void CAM::_0x8306C256(int p0, int p1) { invoke<void*>(0x8306C256, p0, p1); }
void CAM::SET_CAM_MOTION_BLUR_STRENGTH(int p0, int p1) { invoke<void*>(0xFD6E0D67, p0, p1); }
void CAM::_0x8BBF2950() { invoke<void*>(0x8BBF2950); }
void CAM::ATTACH_CAM_TO_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xAD7C45F6, p0, p1, p2, p3, p4, p5); }
void CAM::ATTACH_CAM_TO_PED_BONE(int CameraHandle, int Handle, int BoneIndex, float X, float Y, float Z, float Heading) { invoke<void*>(0x506BB35C, CameraHandle, Handle, BoneIndex, X, Y, Z, Heading); }
void CAM::DETACH_CAM(char* camName) { invoke<void*>(0xF4FBF14A, camName); }
void CAM::SET_CAM_INHERIT_ROLL_VEHICLE(int p0, int p1) { invoke<void*>(0xE4BD5342, p0, p1); }
void CAM::POINT_CAM_AT_COORD(int p0, int p1, int p2, int p3) { invoke<void*>(0x914BC21A, p0, p1, p2, p3); }
void CAM::POINT_CAM_AT_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x7597A0F7, p0, p1, p2, p3, p4, p5); }
void CAM::POINT_CAM_AT_PED_BONE(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x09F47049, p0, p1, p2, p3, p4, p5, p6); }
void CAM::STOP_CAM_POINTING(int p0) { invoke<void*>(0x5435F6A5, p0); }
void CAM::_0x0C74F9AF(int p0, int p1) { invoke<void*>(0x0C74F9AF, p0, p1); }
void CAM::_0xE1A0B2F1(int p0, int p1) { invoke<void*>(0xE1A0B2F1, p0, p1); }
void CAM::_0x43220969(int p0, int p1) { invoke<void*>(0x43220969, p0, p1); }
void CAM::SET_CAM_DEBUG_NAME(int p0, int p1) { invoke<void*>(0x9B00DF3F, p0, p1); }
void CAM::ADD_CAM_SPLINE_NODE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0xAD3C7EAA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void CAM::_0x30510511(int p0, int p1, int p2, int p3) { invoke<void*>(0x30510511, p0, p1, p2, p3); }
void CAM::_0xBA6C085B(int p0, int p1, int p2, int p3) { invoke<void*>(0xBA6C085B, p0, p1, p2, p3); }
void CAM::_0xB4737F03(int p0, int p1, int p2) { invoke<void*>(0xB4737F03, p0, p1, p2); }
void CAM::SET_CAM_SPLINE_PHASE(int p0, int p1) { invoke<void*>(0xF0AED233, p0, p1); }
int CAM::GET_CAM_SPLINE_PHASE(int p0) { return invoke<int>(0x39784DD9, p0); }
int CAM::GET_CAM_SPLINE_NODE_PHASE(int p0) { return invoke<int>(0x7B9522F6, p0); }
void CAM::SET_CAM_SPLINE_DURATION(int p0, int p1) { invoke<void*>(0x3E91FC8A, p0, p1); }
void CAM::_0x15E141CE(int p0, int p1) { invoke<void*>(0x15E141CE, p0, p1); }
int CAM::GET_CAM_SPLINE_NODE_INDEX(int p0) { return invoke<int>(0xF8AEB6BD, p0); }
void CAM::_0x21D275DA(int p0, int p1, int p2, int p3) { invoke<void*>(0x21D275DA, p0, p1, p2, p3); }
void CAM::_0xA3BD9E94(int p0, int p1, int p2) { invoke<void*>(0xA3BD9E94, p0, p1, p2); }
void CAM::OVERRIDE_CAM_SPLINE_VELOCITY(int p0, int p1, int p2, int p3) { invoke<void*>(0x326A17E2, p0, p1, p2, p3); }
void CAM::OVERRIDE_CAM_SPLINE_MOTION_BLUR(int p0, int p1, int p2, int p3) { invoke<void*>(0x633179E6, p0, p1, p2, p3); }
void CAM::_0xC90B2DDC(int p0, int p1, int p2) { invoke<void*>(0xC90B2DDC, p0, p1, p2); }
int CAM::IS_CAM_SPLINE_PAUSED(int p0) { return invoke<int>(0x60B34FF5, p0); }
void CAM::SET_CAM_ACTIVE_WITH_INTERP(int camTo, int camFrom, int duration, int unk0, int unk1) { invoke<void*>(0x7983E7F0, camTo, camFrom, duration, unk0, unk1); }
int CAM::IS_CAM_INTERPOLATING(int p0) { return invoke<int>(0x7159CB5D, p0); }
void CAM::SHAKE_CAM(int p0, int p1, int p2) { invoke<void*>(0x1D4211B0, p0, p1, p2); }
void CAM::ANIMATED_SHAKE_CAM(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xE1168767, p0, p1, p2, p3, p4); }
int CAM::IS_CAM_SHAKING(int p0) { return invoke<int>(0x0961FD9B, p0); }
void CAM::SET_CAM_SHAKE_AMPLITUDE(int p0, int p1) { invoke<void*>(0x60FF6382, p0, p1); }
void CAM::STOP_CAM_SHAKING(int p0, int p1) { invoke<void*>(0x40D0EB87, p0, p1); }
void CAM::_0x2B0F05CD(int p0, int p1) { invoke<void*>(0x2B0F05CD, p0, p1); }
void CAM::_0xCB75BD9C(int p0, int p1, int p2, int p3) { invoke<void*>(0xCB75BD9C, p0, p1, p2, p3); }
int CAM::_0x6AEFE6A5() { return invoke<int>(0x6AEFE6A5); }
void CAM::_0x26FCFB96(int p0) { invoke<void*>(0x26FCFB96, p0); }
int CAM::PLAY_CAM_ANIM(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { return invoke<int>(0xBCEFB87E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
int CAM::IS_CAM_PLAYING_ANIM(int p0, int p1, int p2) { return invoke<int>(0xB998CB49, p0, p1, p2); }
void CAM::SET_CAM_ANIM_CURRENT_PHASE(int p0, int p1) { invoke<void*>(0x3CB1D17F, p0, p1); }
int CAM::GET_CAM_ANIM_CURRENT_PHASE(int p0) { return invoke<int>(0x345F72D0, p0); }
int CAM::PLAY_SYNCHRONIZED_CAM_ANIM(int p0, int p1, int p2, int p3) { return invoke<int>(0x9458459E, p0, p1, p2, p3); }
void CAM::_0x56F9ED27(int p0, int p1, int p2, int p3) { invoke<void*>(0x56F9ED27, p0, p1, p2, p3); }
void CAM::_0x71570DBA(int p0, int p1) { invoke<void*>(0x71570DBA, p0, p1); }
void CAM::_0x60B345DE(int p0, int p1, int p2, int p3) { invoke<void*>(0x60B345DE, p0, p1, p2, p3); }
void CAM::_0x44473EFC(int p0) { invoke<void*>(0x44473EFC, p0); }
int CAM::_0xDA931D65(int p0) { return invoke<int>(0xDA931D65, p0); }
int CAM::IS_SCREEN_FADED_OUT() { return invoke<int>(0x9CAA05FA); }
int CAM::IS_SCREEN_FADED_IN() { return invoke<int>(0x4F37276D); }
int CAM::IS_SCREEN_FADING_OUT() { return invoke<int>(0x79275A57); }
int CAM::IS_SCREEN_FADING_IN() { return invoke<int>(0xC7C82800); }
void CAM::DO_SCREEN_FADE_IN(int ticks) { invoke<void*>(0x66C1BDEE, ticks); }
void CAM::DO_SCREEN_FADE_OUT(int ticks) { invoke<void*>(0x89D01805, ticks); }
void CAM::SET_WIDESCREEN_BORDERS(int p0, int p1) { invoke<void*>(0x1A75DC9A, p0, p1); }
Vector3 CAM::GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0x9388CF79); }
Vector3 CAM::GET_GAMEPLAY_CAM_ROT(int p0) { return invoke<Vector3>(0x13A010B5, p0); }
int CAM::GET_GAMEPLAY_CAM_FOV() { return invoke<int>(0x4D6B3BFA); }
void CAM::_0xA6E73135(int p0) { invoke<void*>(0xA6E73135, p0); }
void CAM::_0x1126E37C(int p0) { invoke<void*>(0x1126E37C, p0); }
int CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<int>(0xCAF839C2); }
void CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<void*>(0x20C6217C, heading); }
int CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<int>(0xFC5A4946); }
void CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { invoke<void*>(0x6381B963, x, Value2); }
void CAM::SHAKE_GAMEPLAY_CAM(int p0, int p1) { invoke<void*>(0xF2EFE660, p0, p1); }
int CAM::IS_GAMEPLAY_CAM_SHAKING() { return invoke<int>(0x3457D681); }
void CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(int p0) { invoke<void*>(0x9219D44A, p0); }
void CAM::STOP_GAMEPLAY_CAM_SHAKING(int p0) { invoke<void*>(0xFD569E4E, p0); }
void CAM::_0x7D3007A2(int p0) { invoke<void*>(0x7D3007A2, p0); }
int CAM::IS_GAMEPLAY_CAM_RENDERING() { return invoke<int>(0x0EF276DA); }
int CAM::_0xC0B00C20() { return invoke<int>(0xC0B00C20); }
int CAM::_0x60C23785() { return invoke<int>(0x60C23785); }
void CAM::_0x20BFF6E5(int p0) { invoke<void*>(0x20BFF6E5, p0); }
void CAM::_0xA61FF9AC() { invoke<void*>(0xA61FF9AC); }
int CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<int>(0x33C83F17); }
void CAM::_0x2701A9AD(int p0) { invoke<void*>(0x2701A9AD, p0); }
void CAM::_0xC4736ED3(int p0) { invoke<void*>(0xC4736ED3, p0); }
void CAM::_0x6B0E9D57() { invoke<void*>(0x6B0E9D57); }
int CAM::IS_SPHERE_VISIBLE(int p0, int p1, int p2, int p3) { return invoke<int>(0xDD1329E2, p0, p1, p2, p3); }
int CAM::IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<int>(0x9F9E856C); }
int CAM::SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(int p0, int p1) { return invoke<int>(0x1425F6AC, p0, p1); }
void CAM::_0x8DC53629(int p0, int p1) { invoke<void*>(0x8DC53629, p0, p1); }
void CAM::_0x1F9DE6E4() { invoke<void*>(0x1F9DE6E4); }
void CAM::_CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) { invoke<void*>(0x749909AC, minimum, maximum); }
void CAM::_CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { invoke<void*>(0xFA3A16E7, minimum, maximum); }
void CAM::_ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float _distance) { invoke<void*>(0x77340650, p0, _distance); }
void CAM::_0x4B22C5CB(int p0, int p1) { invoke<void*>(0x4B22C5CB, p0, p1); }
int CAM::GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<int>(0x57583DF1); }
int CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0xA65FF946); }
void CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(int p0) { invoke<void*>(0x495DBE8D, p0); }
int CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<int>(0x8DD49B77); }
void CAM::_0x9DB5D391(int p0) { invoke<void*>(0x9DB5D391, p0); }
void CAM::_0x92302899(int p0, int p1) { invoke<void*>(0x92302899, p0, p1); }
int CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0x8CD67DE3); }
void CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int p0) { invoke<void*>(0x8F55EBBE, p0); }
int CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0xA4B4DB03); }
void CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int p0) { invoke<void*>(0xC4FBBBD3, p0); }
int CAM::_0xF3B148A6(int p0) { return invoke<int>(0xF3B148A6, p0); }
void CAM::_0x1DEBCB45(int p0, int p1) { invoke<void*>(0x1DEBCB45, p0, p1); }
int CAM::IS_AIM_CAM_ACTIVE() { return invoke<int>(0xC24B4F6F); }
int CAM::_0x8F320DE4() { return invoke<int>(0x8F320DE4); }
int CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<int>(0xD6280468); }
void CAM::_0x1BAA7182() { invoke<void*>(0x1BAA7182); }
int CAM::_0x33951005() { return invoke<int>(0x33951005); }
void CAM::_0x9F4AF763(float p0) { invoke<void*>(0x9F4AF763, p0); }
void CAM::_0x68BA0730(int p0, int p1) { invoke<void*>(0x68BA0730, p0, p1); }
void CAM::_0x2F29F0D5(int p0, int p1) { invoke<void*>(0x2F29F0D5, p0, p1); }
void CAM::_0x76DAC96C(int p0, int p1) { invoke<void*>(0x76DAC96C, p0, p1); }
void CAM::_0x0E21069D(int p0) { invoke<void*>(0x0E21069D, p0); }
void CAM::_0x71E9C63E(int p0) { invoke<void*>(0x71E9C63E, p0); }
void CAM::_0xD1EEBC45(int p0) { invoke<void*>(0xD1EEBC45, p0); }
Vector3 CAM::_0x9C84BDA0() { return invoke<Vector3>(0x9C84BDA0); }
Vector3 CAM::_0x1FFBEFC5(int p0) { return invoke<Vector3>(0x1FFBEFC5, p0); }
Vector3 CAM::_0xACADF916(int p0, int p1) { return invoke<Vector3>(0xACADF916, p0, p1); }
int CAM::_0x721B763B() { return invoke<int>(0x721B763B); }
int CAM::_0x23E3F106(int p0) { return invoke<int>(0x23E3F106, p0); }
int CAM::_0x457AE195() { return invoke<int>(0x457AE195); }
int CAM::_0x46CB3A49() { return invoke<int>(0x46CB3A49); }
int CAM::_0x19297A7A() { return invoke<int>(0x19297A7A); }
int CAM::_0xF24777CA() { return invoke<int>(0xF24777CA); }
int CAM::_0x38992E83() { return invoke<int>(0x38992E83); }
void CAM::SET_GAMEPLAY_COORD_HINT(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0xF27483C9, p0, p1, p2, p3, p4, p5, p6); }
void CAM::SET_GAMEPLAY_PED_HINT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x7C27343E, p0, p1, p2, p3, p4, p5, p6, p7); }
void CAM::SET_GAMEPLAY_VEHICLE_HINT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x2C9A11D8, p0, p1, p2, p3, p4, p5, p6, p7); }
void CAM::_0x2ED5E2F8(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x2ED5E2F8, p0, p1, p2, p3, p4, p5, p6, p7); }
void CAM::SET_GAMEPLAY_ENTITY_HINT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x66C32306, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int CAM::IS_GAMEPLAY_HINT_ACTIVE() { return invoke<int>(0xAD8DA205); }
void CAM::STOP_GAMEPLAY_HINT(int p0) { invoke<void*>(0x1BC28B7B, p0); }
void CAM::_0xCAFEE798(int p0) { invoke<void*>(0xCAFEE798, p0); }
void CAM::SET_GAMEPLAY_HINT_FOV(int p0) { invoke<void*>(0x96FD173B, p0); }
void CAM::_0x72E8CD3A(int p0) { invoke<void*>(0x72E8CD3A, p0); }
void CAM::_0x79472AE3(int p0) { invoke<void*>(0x79472AE3, p0); }
void CAM::_0xFC7464A0(int p0) { invoke<void*>(0xFC7464A0, p0); }
void CAM::_0x3554AA0E(int p0) { invoke<void*>(0x3554AA0E, p0); }
void CAM::GET_IS_MULTIPLAYER_BRIEF(int p0) { invoke<void*>(0x2F0CE859, p0); }
void CAM::SET_CINEMATIC_BUTTON_ACTIVE(int p0) { invoke<void*>(0x3FBC5D00, p0); }
int CAM::IS_CINEMATIC_CAM_RENDERING() { return invoke<int>(0x80471AD9); }
void CAM::SHAKE_CINEMATIC_CAM(int p0, int p1) { invoke<void*>(0x61815F31, p0, p1); }
int CAM::IS_CINEMATIC_CAM_SHAKING() { return invoke<int>(0x8376D939); }
void CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(int p0) { invoke<void*>(0x67510C4B, p0); }
void CAM::STOP_CINEMATIC_CAM_SHAKING(int p0) { invoke<void*>(0x71C12904, p0); }
void CAM::_0x5AC6DAC9() { invoke<void*>(0x5AC6DAC9); }
void CAM::_0x837F8581() { invoke<void*>(0x837F8581); }
void CAM::_0x65DDE8AF() { invoke<void*>(0x65DDE8AF); }
void CAM::_0xD75CDD75() { invoke<void*>(0xD75CDD75); }
int CAM::_0x96A07066() { return invoke<int>(0x96A07066); }
void CAM::CREATE_CINEMATIC_SHOT(int p0, int p1, int p2, int p3) { invoke<void*>(0xAC494E35, p0, p1, p2, p3); }
int CAM::IS_CINEMATIC_SHOT_ACTIVE(int p0) { return invoke<int>(0xA4049042, p0); }
void CAM::STOP_CINEMATIC_SHOT(int p0) { invoke<void*>(0xD78358C5, p0); }
void CAM::_0xFBB85E02(int p0) { invoke<void*>(0xFBB85E02, p0); }
void CAM::_0x4938C82F() { invoke<void*>(0x4938C82F); }
void CAM::SET_CINEMATIC_MODE_ACTIVE(int p0) { invoke<void*>(0x2009E747, p0); }
int CAM::_0x6739AD55() { return invoke<int>(0x6739AD55); }
void CAM::STOP_CUTSCENE_CAM_SHAKING(int p0) { invoke<void*>(0xF07D603D, p0); }
void CAM::_0x067BA6F5(int p0) { invoke<void*>(0x067BA6F5, p0); }
int CAM::_0xFD99BE2B(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0xFD99BE2B, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void CAM::_0xE206C450() { invoke<void*>(0xE206C450); }
void CAM::_0xB06CCD38(int p0) { invoke<void*>(0xB06CCD38, p0); }

void WEAPON::ENABLE_LASER_SIGHT_RENDERING(int p0) { invoke<void*>(0xE3438955, p0); }
int WEAPON::_0x324FA47A(int p0) { return invoke<int>(0x324FA47A, p0); }
int WEAPON::GET_WEAPONTYPE_MODEL(int p0) { return invoke<int>(0x44E1C269, p0); }
int WEAPON::GET_WEAPONTYPE_SLOT(int p0) { return invoke<int>(0x2E3759AF, p0); }
int WEAPON::GET_WEAPONTYPE_GROUP(int p0) { return invoke<int>(0x5F2DE833, p0); }
void WEAPON::SET_CURRENT_PED_WEAPON(int Handle, int WeaponHash, int EquipNow) { invoke<void*>(0xB8278882, Handle, WeaponHash, EquipNow); }
int WEAPON::GET_CURRENT_PED_WEAPON(int  ped, int* weapHash, int p2) { return invoke<int>(0xB0237302, ped, weapHash, p2); }
int WEAPON::_0x5D73CD20(int p0) { return invoke<int>(0x5D73CD20, p0); }
int WEAPON::GET_BEST_PED_WEAPON(int p0, int p1) { return invoke<int>(0xB998D444, p0, p1); }
int WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(int p0, int p1) { return invoke<int>(0x8E6F2AF1, p0, p1); }
int WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(int p0, int p1) { return invoke<int>(0xF26C5D65, p0, p1); }
int WEAPON::IS_PED_ARMED(int p0, int p1) { return invoke<int>(0x0BFC892C, p0, p1); }
int WEAPON::IS_WEAPON_VALID(int WeapHash) { return invoke<int>(0x38CA2954, WeapHash); }
int WEAPON::HAS_PED_GOT_WEAPON(int p0, int p1, int p2) { return invoke<int>(0x43D2FA82, p0, p1, p2); }
int WEAPON::_0x02A32CB0(int p0) { return invoke<int>(0x02A32CB0, p0); }
int WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(int p0, int p1) { return invoke<int>(0x9BC64E16, p0, p1); }
int WEAPON::GET_AMMO_IN_PED_WEAPON(int p0, int p1) { return invoke<int>(0x0C755733, p0, p1); }
void WEAPON::ADD_AMMO_TO_PED(int  handle, int weaponHash, int ammo) { invoke<void*>(0x7F0580C7, handle, weaponHash, ammo); }
void WEAPON::SET_PED_AMMO(int Handle, int WeaponHash, int ammo) { invoke<void*>(0xBF90DF1A, Handle, WeaponHash, ammo); }
void WEAPON::SET_PED_INFINITE_AMMO(int  Handle, int Toggle, int WeaponHash) { invoke<void*>(0x9CB8D278, Handle, Toggle, WeaponHash); }
void WEAPON::SET_PED_INFINITE_AMMO_CLIP(int Handle, int Toggle) { invoke<void*>(0x5A5E3B67, Handle, Toggle); }
void WEAPON::GIVE_WEAPON_TO_PED(int pedHandle, int weaponAssetHash, int ammoCount, int equipNow, int isAmmoLoaded) { invoke<void*>(0xC4D88A85, pedHandle, weaponAssetHash, ammoCount, equipNow, isAmmoLoaded); }
void WEAPON::GIVE_DELAYED_WEAPON_TO_PED(int  pedHandle, int weaponHash, int time, int p3) { invoke<void*>(0x5868D20D, pedHandle, weaponHash, time, p3); }
void WEAPON::REMOVE_ALL_PED_WEAPONS(int Handle, int Toggle) { invoke<void*>(0xA44CE817, Handle, Toggle); }
void WEAPON::REMOVE_WEAPON_FROM_PED(int  Handle, int WeaponHash) { invoke<void*>(0x9C37F220, Handle, WeaponHash); }
void WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(int Handle, int Toggle) { invoke<void*>(0x00CFD6E9, Handle, Toggle); }
void WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(int p0, int p1, int p2, int p3) { invoke<void*>(0x00BECD77, p0, p1, p2, p3); }
void WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(int p0, int p1) { invoke<void*>(0x8A444056, p0, p1); }
int WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(int p0, int p1, int p2) { return invoke<int>(0xCDFBBCC6, p0, p1, p2); }
void WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(int Handle) { invoke<void*>(0x52C68832, Handle); }
int WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(int p0, int p1, int p2) { return invoke<int>(0x6DAABB39, p0, p1, p2); }
void WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(int p0) { invoke<void*>(0xCEC2732B, p0); }
void WEAPON::SET_PED_DROPS_WEAPON(int p0) { invoke<void*>(0x3D3329FA, p0); }
void WEAPON::SET_PED_DROPS_INVENTORY_WEAPON(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x81FFB874, p0, p1, p2, p3, p4, p5); }
int WEAPON::GET_MAX_AMMO_IN_CLIP(int  ped, int WeapHash, int p2) { return invoke<int>(0x6961E2A4, ped, WeapHash, p2); }
int WEAPON::GET_AMMO_IN_CLIP(int  Handle, int WeaponHash, int p2) { return invoke<int>(0x73C100C3, Handle, WeaponHash, p2); }
int WEAPON::SET_AMMO_IN_CLIP(int  Handle, int WeaponHash, int ammo) { return invoke<int>(0xA54B0B10, Handle, WeaponHash, ammo); }
int WEAPON::GET_MAX_AMMO(int  ped, int WeapHash, int* ammo) { return invoke<int>(0x0B294796, ped, WeapHash, ammo); }
void WEAPON::SET_PED_AMMO_BY_TYPE(int p0, int p1, int p2) { invoke<void*>(0x311C52BB, p0, p1, p2); }
int WEAPON::GET_PED_AMMO_BY_TYPE(int p0, int p1) { return invoke<int>(0x54077C4D, p0, p1); }
void WEAPON::SET_PED_AMMO_TO_DROP(int p0, int p1) { invoke<void*>(0x2386A307, p0, p1); }
void WEAPON::_0xD6460EA2(int p0) { invoke<void*>(0xD6460EA2, p0); }
int WEAPON::_0x09337863(int p0, int p1) { return invoke<int>(0x09337863, p0, p1); }
int WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(int  Handle, float* Coords) { return invoke<int>(0x9B266079, Handle, Coords); }
void WEAPON::SET_PED_GADGET(int p0, int p1, int p2) { invoke<void*>(0x8A256D0A, p0, p1, p2); }
int WEAPON::_0x8DDD0B5B(int p0, int p1) { return invoke<int>(0x8DDD0B5B, p0, p1); }
int WEAPON::GET_SELECTED_PED_WEAPON(int p0) { return invoke<int>(0xD240123E, p0); }
void WEAPON::EXPLODE_PROJECTILES(int p0, int p1, int p2) { invoke<void*>(0x35A0B955, p0, p1, p2); }
void WEAPON::REMOVE_ALL_PROJECTILES_OF_TYPE(int p0, int p1) { invoke<void*>(0xA5F89919, p0, p1); }
int WEAPON::_0x3612110D(int p0) { return invoke<int>(0x3612110D, p0); }
int WEAPON::_0xB2B2BBAA(int p0) { return invoke<int>(0xB2B2BBAA, p0); }
int WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(int p0, int p1, int p2, int p3) { return invoke<int>(0xA57E2E80, p0, p1, p2, p3); }
void WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(int p0, int p1, int p2) { invoke<void*>(0x3E1E286D, p0, p1, p2); }
void WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(int p0, int p1, int p2) { invoke<void*>(0x412AA00D, p0, p1, p2); }
int WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(int p0, int p1, int p2) { return invoke<int>(0xDC0FC145, p0, p1, p2); }
int WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(int p0, int p1, int p2) { return invoke<int>(0x7565FB19, p0, p1, p2); }
int WEAPON::_0x82EEAF0F(int p0) { return invoke<int>(0x82EEAF0F, p0); }
int WEAPON::MAKE_PED_RELOAD(int p0) { return invoke<int>(0x515292C2, p0); }
void WEAPON::REQUEST_WEAPON_ASSET(int p0, int p1, int p2) { invoke<void*>(0x65D139A5, p0, p1, p2); }
int WEAPON::HAS_WEAPON_ASSET_LOADED(int p0) { return invoke<int>(0x1891D5BB, p0); }
void WEAPON::REMOVE_WEAPON_ASSET(int p0) { invoke<void*>(0x2C0DFE3C, p0); }
int WEAPON::CREATE_WEAPON_OBJECT(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0x62F5987F, p0, p1, p2, p3, p4, p5, p6); }
void WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(int p0, int p1) { invoke<void*>(0xF7612A37, p0, p1); }
void WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(int p0, int p1) { invoke<void*>(0xA6E7ED3C, p0, p1); }
int WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(int p0, int p1) { return invoke<int>(0x1D368510, p0, p1); }
void WEAPON::GIVE_WEAPON_OBJECT_TO_PED(int p0, int p1) { invoke<void*>(0x639AF3EF, p0, p1); }
int WEAPON::_0xB1817BAA(int p0, int p1) { return invoke<int>(0xB1817BAA, p0, p1); }
int WEAPON::GET_WEAPON_OBJECT_FROM_PED(int p0) { return invoke<int>(0xDF939A38, p0); }
void WEAPON::SET_PED_WEAPON_TINT_INDEX(int Handle, int WeaponHash, int ColorIndex) { invoke<void*>(0xEB2A7B23, Handle, WeaponHash, ColorIndex); }
int WEAPON::GET_PED_WEAPON_TINT_INDEX(int p0, int p1) { return invoke<int>(0x3F9C90A7, p0, p1); }
void WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(int p0, int p1) { invoke<void*>(0x44ACC1DA, p0, p1); }
int WEAPON::GET_WEAPON_OBJECT_TINT_INDEX(int p0) { return invoke<int>(0xD91D9576, p0); }
int WEAPON::GET_WEAPON_TINT_COUNT(int p0) { return invoke<int>(0x99E4EAAB, p0); }
int WEAPON::GET_WEAPON_HUD_STATS(int p0, int p1) { return invoke<int>(0xA9AD3D98, p0, p1); }
int WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(int p0, int p1) { return invoke<int>(0xBB5498F4, p0, p1); }
int WEAPON::GET_WEAPON_CLIP_SIZE(int p0) { return invoke<int>(0x8D515E66, p0); }
void WEAPON::_0xB4F44C6E(int p0, int p1, int p2) { invoke<void*>(0xB4F44C6E, p0, p1, p2); }
int WEAPON::_0xEC2E5304(int p0, int p1) { return invoke<int>(0xEC2E5304, p0, p1); }
void WEAPON::_0xE3BD00F9(int p0) { invoke<void*>(0xE3BD00F9, p0); }
int WEAPON::_0xBAF7BFBE(int p0) { return invoke<int>(0xBAF7BFBE, p0); }
int WEAPON::SET_WEAPON_SMOKEGRENADE_ASSIGNED(int p0) { return invoke<int>(0x76876154, p0); }
int WEAPON::_0xB0127EA7(int p0) { return invoke<int>(0xB0127EA7, p0); }
void WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(int p0, int p1) { invoke<void*>(0xA5DF7484, p0, p1); }
int WEAPON::GET_WEAPON_DAMAGE_TYPE(int p0) { return invoke<int>(0x013AFC13, p0); }
void WEAPON::_0x64646F1D(int p0) { invoke<void*>(0x64646F1D, p0); }
int WEAPON::_0x135E7AD4(int p0) { return invoke<int>(0x135E7AD4, p0); }

int ITEMSET::CREATE_ITEMSET(int p0) { return invoke<int>(0x0A113B2C, p0); }
void ITEMSET::DESTROY_ITEMSET(int p0) { invoke<void*>(0x83CE1A4C, p0); }
int ITEMSET::IS_ITEMSET_VALID(int p0) { return invoke<int>(0xD201FC29, p0); }
int ITEMSET::ADD_TO_ITEMSET(int p0, int p1) { return invoke<int>(0x6B0FE61B, p0, p1); }
void ITEMSET::REMOVE_FROM_ITEMSET(int p0, int p1) { invoke<void*>(0xA9565228, p0, p1); }
int ITEMSET::GET_ITEMSET_SIZE(int p0) { return invoke<int>(0x2B31F41A, p0); }
int ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(int p0, int p1) { return invoke<int>(0x3F712874, p0, p1); }
int ITEMSET::IS_IN_ITEMSET(int p0, int p1) { return invoke<int>(0x0D4B9730, p0, p1); }
void ITEMSET::CLEAN_ITEMSET(int p0) { invoke<void*>(0x919A4858, p0); }

void STREAMING::LOAD_ALL_OBJECTS_NOW() { invoke<void*>(0xC9DBDA90); }
void STREAMING::LOAD_SCENE(int p0, int p1, int p2) { invoke<void*>(0xB72403F5, p0, p1, p2); }
int STREAMING::NETWORK_UPDATE_LOAD_SCENE() { return invoke<int>(0xC76E023C); }
void STREAMING::NETWORK_STOP_LOAD_SCENE() { invoke<void*>(0x24857907); }
int STREAMING::IS_NETWORK_LOADING_SCENE() { return invoke<int>(0x6DCFC021); }
void STREAMING::SET_INTERIOR_ACTIVE(int p0, int p1) { invoke<void*>(0xE1013910, p0, p1); }
void STREAMING::REQUEST_MODEL(int model) { invoke<void*>(0xFFF1B500, model); }
void STREAMING::_0x48CEB6B4(int p0) { invoke<void*>(0x48CEB6B4, p0); }
int STREAMING::HAS_MODEL_LOADED(int model) { return invoke<int>(0x62BFDB37, model); }
void STREAMING::_0x939243FB(int p0, int p1) { invoke<void*>(0x939243FB, p0, p1); }
void STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(int Model) { invoke<void*>(0xAE0F069E, Model); }
int STREAMING::IS_MODEL_IN_CDIMAGE(int p0) { return invoke<int>(0x1094782F, p0); }
int STREAMING::IS_MODEL_VALID(int p0) { return invoke<int>(0xAF8F8E9D, p0); }
int STREAMING::IS_MODEL_A_VEHICLE(int p0) { return invoke<int>(0xFFFC85D4, p0); }
void STREAMING::REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<void*>(0xCD9805E7, x, y, z); }
void STREAMING::REQUEST_COLLISION_FOR_MODEL(int vehicleHash) { invoke<void*>(0x3930C042, vehicleHash); }
int STREAMING::HAS_COLLISION_FOR_MODEL_LOADED(int p0) { return invoke<int>(0x41A094F8, p0); }
void STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(int p0, int p1, int p2) { invoke<void*>(0xC2CC1DF2, p0, p1, p2); }
int STREAMING::_0xCD31C872(int p0) { return invoke<int>(0xCD31C872, p0); }
void STREAMING::REQUEST_ANIM_DICT(char* AminSet) { invoke<void*>(0xDCA96950, AminSet); }
int STREAMING::HAS_ANIM_DICT_LOADED(char* AminSet) { return invoke<int>(0x05E6763C, AminSet); }
void STREAMING::REMOVE_ANIM_DICT(int p0) { invoke<void*>(0x0AE050B5, p0); }
void STREAMING::REQUEST_ANIM_SET(int p0) { invoke<void*>(0x2988B3FC, p0); }
int STREAMING::HAS_ANIM_SET_LOADED(int p0) { return invoke<int>(0x4FFF397D, p0); }
void STREAMING::REMOVE_ANIM_SET(int p0) { invoke<void*>(0xD04A817A, p0); }
void STREAMING::REQUEST_CLIP_SET(char* p0) { invoke<void*>(0x546C627A, p0); }
int STREAMING::HAS_CLIP_SET_LOADED(char* p0) { return invoke<int>(0x230D5455, p0); }
void STREAMING::REMOVE_CLIP_SET(char* p0) { invoke<void*>(0x1E21F7AA, p0); }
void STREAMING::REQUEST_IPL(char* iplName) { invoke<void*>(0x3B70D1DB, iplName); }
void STREAMING::REMOVE_IPL(char* iplName) { invoke<void*>(0xDF7CBD36, iplName); }
int STREAMING::IS_IPL_ACTIVE(char* iplName) { return invoke<int>(0xB2C33714, iplName); }
void STREAMING::SET_STREAMING(int p0) { invoke<void*>(0x27EF6CB2, p0); }
void STREAMING::SET_GAME_PAUSES_FOR_STREAMING(int p0) { invoke<void*>(0x9211A28A, p0); }
void STREAMING::SET_REDUCE_PED_MODEL_BUDGET(int p0) { invoke<void*>(0xAFCB2B86, p0); }
void STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(int p0) { invoke<void*>(0xCDB4FB7E, p0); }
void STREAMING::SET_DITCH_POLICE_MODELS(int p0) { invoke<void*>(0x3EA7FCE4, p0); }
int STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0xC2EE9A02); }
void STREAMING::REQUEST_PTFX_ASSET() { invoke<void*>(0x2C649263); }
int STREAMING::HAS_PTFX_ASSET_LOADED() { return invoke<int>(0x3EFF96BE); }
void STREAMING::REMOVE_PTFX_ASSET() { invoke<void*>(0xC10F178C); }
void STREAMING::_REQUEST_DLC_PTFX_ASSET(char* FX) { invoke<void*>(0xCFEA19A9, FX); }
int STREAMING::_HAS_DLC_PTFX_LOADED(char* FX) { return invoke<int>(0x9ACC6446, FX); }
void STREAMING::_REMOVE_DLC_PTFX_ASSET(char* FX) { invoke<void*>(0xC44762A1, FX); }
void STREAMING::SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<void*>(0x1D56993C, p0); }
void STREAMING::SET_PED_POPULATION_BUDGET(int p0) { invoke<void*>(0xD2D026CD, p0); }
void STREAMING::CLEAR_FOCUS() { invoke<void*>(0x34D91E7A); }
void STREAMING::_0x14680A60(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x14680A60, p0, p1, p2, p3, p4, p5); }
void STREAMING::SET_FOCUS_ENTITY(int p0) { invoke<void*>(0x18DB04AC, p0); }
int STREAMING::IS_ENTITY_FOCUS(int p0) { return invoke<int>(0xB456D707, p0); }
void STREAMING::_0x403CD434(int p0, int p1) { invoke<void*>(0x403CD434, p0, p1); }
void STREAMING::_0xA07BAEB9(int p0) { invoke<void*>(0xA07BAEB9, p0); }
int STREAMING::_0x10B6AB36(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x10B6AB36, p0, p1, p2, p3, p4, p5); }
int STREAMING::_0x72344191(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x72344191, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int STREAMING::_0xC0157255(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xC0157255, p0, p1, p2, p3, p4, p5, p6); }
void STREAMING::_0xE80F8ABE(int p0) { invoke<void*>(0xE80F8ABE, p0); }
int STREAMING::_0x1B3521F4(int p0) { return invoke<int>(0x1B3521F4, p0); }
int STREAMING::_0x42CFE9C0(int p0) { return invoke<int>(0x42CFE9C0, p0); }
int STREAMING::_0x56253356() { return invoke<int>(0x56253356); }
int STREAMING::NEW_LOAD_SCENE_START(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0xDF9C38B6, p0, p1, p2, p3, p4, p5, p6, p7); }
int STREAMING::_0xFA037FEB(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xFA037FEB, p0, p1, p2, p3, p4); }
void STREAMING::NEW_LOAD_SCENE_STOP() { invoke<void*>(0x7C05B1F6); }
int STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<int>(0xAD234B7F); }
int STREAMING::IS_NEW_LOAD_SCENE_LOADED() { return invoke<int>(0x3ECD839F); }
int STREAMING::_0xEAA51103() { return invoke<int>(0xEAA51103); }
void STREAMING::START_PLAYER_SWITCH(int p0, int p1, int p2, int p3) { invoke<void*>(0x0829E975, p0, p1, p2, p3); }
void STREAMING::STOP_PLAYER_SWITCH() { invoke<void*>(0x2832C010); }
int STREAMING::STOP_PLAYER_REMAIN_ARCADE() { return invoke<int>(0x56135ACC); }
int STREAMING::GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0x280DC015); }
int STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xD5A450F1, p0, p1, p2, p3, p4, p5); }
int STREAMING::GET_PLAYER_SWITCH_STATE() { return invoke<int>(0x39A0E1F2); }
int STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0x9B7BA38F); }
void STREAMING::_0xF0BD420D(int p0) { invoke<void*>(0xF0BD420D, p0); }
int STREAMING::_0x02BA7AC2() { return invoke<int>(0x02BA7AC2); }
void STREAMING::_0x47352E14(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x47352E14, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void STREAMING::_0x279077B0(int p0) { invoke<void*>(0x279077B0, p0); }
void STREAMING::_0x55CB21F9() { invoke<void*>(0x55CB21F9); }
void STREAMING::_0x1084F2F4() { invoke<void*>(0x1084F2F4); }
void STREAMING::_0x5B1E995D() { invoke<void*>(0x5B1E995D); }
void STREAMING::_0x4B4B9A13() { invoke<void*>(0x4B4B9A13); }
int STREAMING::_0x408F7148() { return invoke<int>(0x408F7148); }
void STREAMING::_0xFB4D062D(int p0, int p1, int p2) { invoke<void*>(0xFB4D062D, p0, p1, p2); }
void STREAMING::_0x2349373B(int p0) { invoke<void*>(0x2349373B, p0); }
int STREAMING::_0x74C16879() { return invoke<int>(0x74C16879); }
int STREAMING::SET_PLAYER_INVERTED_UP() { return invoke<int>(0x569847E3); }
int STREAMING::_0xC7A3D279() { return invoke<int>(0xC7A3D279); }
int STREAMING::DESTROY_PLAYER_IN_PAUSE_MENU() { return invoke<int>(0x90F64284); }
int STREAMING::_0x7154B6FD() { return invoke<int>(0x7154B6FD); }
void STREAMING::_0xE5612C1A(int p0) { invoke<void*>(0xE5612C1A, p0); }
void STREAMING::_0x9CD6A451(int p0, int p1, int p2, int p3) { invoke<void*>(0x9CD6A451, p0, p1, p2, p3); }
void STREAMING::_0x4267DA87() { invoke<void*>(0x4267DA87); }
void STREAMING::_0x9FA4AF99(int p0) { invoke<void*>(0x9FA4AF99, p0); }
void STREAMING::_0x9EF0A9CF(int p0, int p1) { invoke<void*>(0x9EF0A9CF, p0, p1); }
void STREAMING::_0xF2CDD6A8() { invoke<void*>(0xF2CDD6A8); }
int STREAMING::_0x17B0A1CD() { return invoke<int>(0x17B0A1CD); }
void STREAMING::_0x3DA7AA5D() { invoke<void*>(0x3DA7AA5D); }
int STREAMING::_0xDAB4BAC0() { return invoke<int>(0xDAB4BAC0); }
void STREAMING::PREFETCH_SRL(int p0) { invoke<void*>(0x37BE2FBB, p0); }
int STREAMING::IS_SRL_LOADED() { return invoke<int>(0x670FA2A6); }
void STREAMING::BEGIN_SRL() { invoke<void*>(0x24F49427); }
void STREAMING::END_SRL() { invoke<void*>(0x1977C56A); }
void STREAMING::SET_SRL_TIME(int p0) { invoke<void*>(0x30F8A487, p0); }
void STREAMING::_0x814D0752(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x814D0752, p0, p1, p2, p3, p4, p5); }
void STREAMING::_0x62F02485(int p0, int p1, int p2, int p3) { invoke<void*>(0x62F02485, p0, p1, p2, p3); }
void STREAMING::_0xA6459CAA(int p0) { invoke<void*>(0xA6459CAA, p0); }
void STREAMING::_0xF8F515E4(int p0) { invoke<void*>(0xF8F515E4, p0); }
void STREAMING::SET_HD_AREA(int p0, int p1, int p2, int p3) { invoke<void*>(0x80BAA035, p0, p1, p2, p3); }
void STREAMING::CLEAR_HD_AREA() { invoke<void*>(0x7CAC6FA0); }
void STREAMING::_0xE243B2AF() { invoke<void*>(0xE243B2AF); }
void STREAMING::_0x897A510F() { invoke<void*>(0x897A510F); }
int STREAMING::_0xC0E83320(int p0) { return invoke<int>(0xC0E83320, p0); }
void STREAMING::_0x1C576388(int p0) { invoke<void*>(0x1C576388, p0); }
int STREAMING::_0x3E9C4CBE() { return invoke<int>(0x3E9C4CBE); }

void SCRIPT::REQUEST_SCRIPT(char* ScriptName) { invoke<void*>(0xE26B2666, ScriptName); }
void SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(char* ScriptName) { invoke<void*>(0x6FCB7795, ScriptName); }
int SCRIPT::HAS_SCRIPT_LOADED(char* ScriptName) { return invoke<int>(0x5D67F751, ScriptName); }
int SCRIPT::DOES_SCRIPT_EXIST(char* ScriptName) { return invoke<int>(0xDEAB87AB, ScriptName); }
void SCRIPT::_0x1C68D9DC(int p0) { invoke<void*>(0x1C68D9DC, p0); }
void SCRIPT::_0x96C26F66(int p0) { invoke<void*>(0x96C26F66, p0); }
int SCRIPT::_0x06674818(int p0) { return invoke<int>(0x06674818, p0); }
void SCRIPT::TERMINATE_THREAD(int ThreadID) { invoke<void*>(0x253FD520, ThreadID); }
int SCRIPT::IS_THREAD_ACTIVE(int ThreadID) { return invoke<int>(0x78D7A5A0, ThreadID); }
char* SCRIPT::_GET_THREAD_NAME(int ThreadID) { return invoke<char*>(0xBE7ACD89, ThreadID); }
void SCRIPT::_0xBB4E2F66() { invoke<void*>(0xBB4E2F66); }
int SCRIPT::_0x1E28B28F() { return invoke<int>(0x1E28B28F); }
int SCRIPT::GET_ID_OF_THIS_THREAD() { return invoke<int>(0xDE524830); }
void SCRIPT::TERMINATE_THIS_THREAD() { invoke<void*>(0x3CD9CBB7); }
int SCRIPT::_0x029D3841(int ScriptHash) { return invoke<int>(0x029D3841, ScriptHash); }
char* SCRIPT::GET_THIS_SCRIPT_NAME() { return invoke<char*>(0xA40FD5D9); }
int SCRIPT::_0x2BEE1F45() { return invoke<int>(0x2BEE1F45); }
int SCRIPT::GET_NUMBER_OF_EVENTS(int p0) { return invoke<int>(0xA3525D60, p0); }
int SCRIPT::GET_EVENT_EXISTS(int p0, int p1) { return invoke<int>(0xA1B447B5, p0, p1); }
int SCRIPT::GET_EVENT_AT_INDEX(int p0, int p1) { return invoke<int>(0xB49C1442, p0, p1); }
int SCRIPT::GET_EVENT_DATA(int p0, int p1, int p2, int p3) { return invoke<int>(0x4280F92F, p0, p1, p2, p3); }
void SCRIPT::TRIGGER_SCRIPT_EVENT(int p0, int p1, int p2, int p3) { invoke<void*>(0x54763B35, p0, p1, p2, p3); }
void SCRIPT::SHUTDOWN_LOADING_SCREEN() { invoke<void*>(0xA2826D17); }
void SCRIPT::SET_NO_LOADING_SCREEN(int p0) { invoke<void*>(0xC8055034, p0); }
void SCRIPT::_0xB03BCCDF() { invoke<void*>(0xB03BCCDF); }

void UI::_0xCB7C8994(char* p0) { invoke<void*>(0xCB7C8994, p0); }
void UI::_0x903F5EE4(int p0) { invoke<void*>(0x903F5EE4, p0); }
void UI::_0x94119534() { invoke<void*>(0x94119534); }
void UI::_0x71077FBD() { invoke<void*>(0x71077FBD); }
int UI::_0xB8B3A5D0() { return invoke<int>(0xB8B3A5D0); }
void UI::_0xA7C8594B(int p0) { invoke<void*>(0xA7C8594B, p0); }
void UI::_0x1DA7E41A(int p0) { invoke<void*>(0x1DA7E41A, p0); }
void UI::_0x1E63088A() { invoke<void*>(0x1E63088A); }
void UI::_0x5205C6F5() { invoke<void*>(0x5205C6F5); }
void UI::_0xECA8ACB9(int p0) { invoke<void*>(0xECA8ACB9, p0); }
void UI::_0x520FCB6D() { invoke<void*>(0x520FCB6D); }
void UI::_0xC8BAB2F2() { invoke<void*>(0xC8BAB2F2); }
void UI::_0x4D0449C6() { invoke<void*>(0x4D0449C6); }
void UI::_0xD3F40140() { invoke<void*>(0xD3F40140); }
int UI::_0xC5223796() { return invoke<int>(0xC5223796); }
void UI::_0x709B4BCB() { invoke<void*>(0x709B4BCB); }
void UI::_0x4A4A40A4() { invoke<void*>(0x4A4A40A4); }
int UI::_0x294405D4() { return invoke<int>(0x294405D4); }
void UI::_0xF881AB87() { invoke<void*>(0xF881AB87); }
void UI::_0x1D6859CA() { invoke<void*>(0x1D6859CA); }
void UI::_0xCF14D7F2(int p0, int p1, int p2, int p3) { invoke<void*>(0xCF14D7F2, p0, p1, p2, p3); }
void UI::_0x24A97AF8(int p0) { invoke<void*>(0x24A97AF8, p0); }
void UI::_0x44018EDB(int p0) { invoke<void*>(0x44018EDB, p0); }
void UI::_0xA4524B23() { invoke<void*>(0xA4524B23); }
void UI::_0xAFA1148B() { invoke<void*>(0xAFA1148B); }
void UI::_0x3CD4307C() { invoke<void*>(0x3CD4307C); }
void UI::_0x574EE85C(char* p0) { invoke<void*>(0x574EE85C, p0); }
void UI::_0x829A799(char* p0) { invoke<void*>(0x829A799, p0); }
void UI::_0x8F7AF78(int p0, bool p1) { invoke<void*>(0x8F7AF78, p0, p1); }
int UI::_0xED130FA1(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xED130FA1, p0, p1, p2, p3, p4, p5, p6); }
int UI::_0xE7E3C98B(char *picName1, char *picName2, bool flash, int iconType, char *sender, char *subject) { return invoke<int>(0xE7E3C98B, picName1, picName2, flash, iconType, sender, subject); }
int UI::_0x0EB382B7(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0x0EB382B7, p0, p1, p2, p3, p4, p5, p6); }
int UI::_0x3E807FE3(char *p0, char *p1, bool p2, int p3, char *p4, char *p5, float p6, char *p7) { return invoke<int>(0x3E807FE3, p0, p1, p2, p3, p4, p5, p6, p7); }
int UI::_0xDEB491C8(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0xDEB491C8, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int UI::_DRAW_NOTIFICATION(int blink, int p1) { return invoke<int>(0x08F7AF78, blink, p1); }
int UI::_0x57B8D0D4(int p0, int p1) { return invoke<int>(0x57B8D0D4, p0, p1); }
int UI::_0x02BCAF9B(int p0, int p1) { return invoke<int>(0x02BCAF9B, p0, p1); }
int UI::_0x02DED2B8(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x02DED2B8, p0, p1, p2, p3, p4); }
int UI::_0xA9CCEF66(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<int>(0xA9CCEF66, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
int UI::_0x88B9B909(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { return invoke<int>(0x88B9B909, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
int UI::_0xE05E7052(int p0, int p1, int p2) { return invoke<int>(0xE05E7052, p0, p1, p2); }
int UI::_0x4FA43BA4(int p0, int p1, int p2, int p3) { return invoke<int>(0x4FA43BA4, p0, p1, p2, p3); }
int UI::_0x8C90D22F(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x8C90D22F, p0, p1, p2, p3, p4, p5); }
int UI::_0x8E319AB8(int p0, int p1) { return invoke<int>(0x8E319AB8, p0, p1); }
int UI::_0x76FB0F21(int p0, int p1, int p2, int p3) { return invoke<int>(0x76FB0F21, p0, p1, p2, p3); }
int UI::_0x5E93FBFA(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x5E93FBFA, p0, p1, p2, p3, p4, p5); }
void UI::_0xF42C43C7(char* p0) { invoke<void*>(0xF42C43C7, p0); }
void UI::_0x27A244D8(char* p0) { invoke<void*>(0x27A244D8, p0); }
void UI::_0x38F82261(int Time, int unk) { invoke<void*>(0x38F82261, Time, unk); }
void UI::_0xDD524A11(int p0) { invoke<void*>(0xDD524A11, p0); }
int UI::_0x672EFB45() { return invoke<int>(0x672EFB45); }
void UI::_SET_TEXT_ENTRY(char* text) { invoke<void*>(0x3E35563E, text); }
void UI::_DRAW_TEXT(float x, float y) { invoke<void*>(0x6F8350CE, x, y); }
void UI::_0x51E7A037(int p0) { invoke<void*>(0x51E7A037, p0); }
int UI::_0xD12A643A(int p0) { return invoke<int>(0xD12A643A, p0); }
void UI::_0x94B82066(int p0) { invoke<void*>(0x94B82066, p0); }
int UI::_0xAA318785(int p0, int p1) { return invoke<int>(0xAA318785, p0, p1); }
void UI::_0xB245FC10(int p0) { invoke<void*>(0xB245FC10, p0); }
void UI::_0xB59B530D(int p0, int p1, int p2, int p3) { invoke<void*>(0xB59B530D, p0, p1, p2, p3); }
void UI::_0x00E20F2D(int p0) { invoke<void*>(0x00E20F2D, p0); }
int UI::_0xF63A13EC(int p0) { return invoke<int>(0xF63A13EC, p0); }
void UI::_0xF4C211F6(int p0) { invoke<void*>(0xF4C211F6, p0); }
void UI::_0xE8E59820(int p0) { invoke<void*>(0xE8E59820, p0); }
void UI::_0x0E103475(int p0) { invoke<void*>(0x0E103475, p0); }
void UI::_0x2944A6C5(int p0) { invoke<void*>(0x2944A6C5, p0); }
void UI::_0x550665AE(int p0) { invoke<void*>(0x550665AE, p0); }
void UI::_0x67785AF2() { invoke<void*>(0x67785AF2); }
void UI::_0xBF855650(int p0) { invoke<void*>(0xBF855650, p0); }
void UI::_0x6E7FDA1C(int p0) { invoke<void*>(0x6E7FDA1C, p0); }
void UI::ADD_TEXT_COMPONENT_INTEGER(int text) { invoke<void*>(0xFE272A57, text); }
void UI::ADD_TEXT_COMPONENT_FLOAT(float text, int DecimalPlaces) { invoke<void*>(0x24D78013, text, DecimalPlaces); }
void UI::_0xDCE05406(int p0) { invoke<void*>(0xDCE05406, p0); }
void UI::_0x150E03B6(int p0) { invoke<void*>(0x150E03B6, p0); }
void UI::_0x5DE98F0A(int p0) { invoke<void*>(0x5DE98F0A, p0); }
void UI::_ADD_TEXT_COMPONENT_STRING(char* text) { invoke<void*>(0x27A244D8, text); }
void UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(int p0, int p1) { invoke<void*>(0x135B3CD0, p0, p1); }
void UI::_0x12929BDF(int p0, int p1) { invoke<void*>(0x12929BDF, p0, p1); }
void UI::_0x65E1D404(int p0, int p1) { invoke<void*>(0x65E1D404, p0, p1); }
void UI::_ADD_TEXT_COMPONENT_STRING2(char* text) { invoke<void*>(0xC736999E, text); }
void UI::_ADD_TEXT_COMPONENT_STRING3(char* text) { invoke<void*>(0x0829A799, text); }
void UI::_0x6F1A1901(int p0) { invoke<void*>(0x6F1A1901, p0); }
int UI::_0x34A396EE(int p0, int p1, int p2) { return invoke<int>(0x34A396EE, p0, p1, p2); }
int UI::_0x0183A66C(int p0, int p1, int p2, int p3) { return invoke<int>(0x0183A66C, p0, p1, p2, p3); }
int UI::_0xFA6373BB(int p0, int p1, int p2) { return invoke<int>(0xFA6373BB, p0, p1, p2); }
int UI::_0x95C4B5AD(int p0) { return invoke<int>(0x95C4B5AD, p0); }
void UI::CLEAR_PRINTS() { invoke<void*>(0x216CB1C5); }
void UI::CLEAR_BRIEF() { invoke<void*>(0x9F75A929); }
void UI::CLEAR_ALL_HELP_MESSAGES() { invoke<void*>(0x9E5D9198); }
void UI::CLEAR_THIS_PRINT(int p0) { invoke<void*>(0x06878327, p0); }
void UI::CLEAR_SMALL_PRINTS() { invoke<void*>(0xA869A238); }
int UI::DOES_TEXT_BLOCK_EXIST(int p0) { return invoke<int>(0x96F74838, p0); }
void UI::REQUEST_ADDITIONAL_TEXT(int p0, int p1) { invoke<void*>(0x9FA9175B, p0, p1); }
void UI::_0xF4D27EBE(int p0, int p1) { invoke<void*>(0xF4D27EBE, p0, p1); }
int UI::HAS_ADDITIONAL_TEXT_LOADED(int p0) { return invoke<int>(0xB0E56045, p0); }
void UI::CLEAR_ADDITIONAL_TEXT(int p0, int p1) { invoke<void*>(0x518141E0, p0, p1); }
int UI::IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<int>(0xF079E4EB, p0); }
int UI::HAS_THIS_ADDITIONAL_TEXT_LOADED(int p0, int p1) { return invoke<int>(0x80A52040, p0, p1); }
int UI::IS_MESSAGE_BEING_DISPLAYED() { return invoke<int>(0x6A77FE8D); }
int UI::DOES_TEXT_LABEL_EXIST(int p0) { return invoke<int>(0x6ECAE560, p0); }
int UI::GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(int p0) { return invoke<int>(0xA4CA7BE5, p0); }
int UI::GET_LENGTH_OF_LITERAL_STRING(char* string) { return invoke<int>(0x99379D55, string); }
int UI::_0x7DBC0764(int p0) { return invoke<int>(0x7DBC0764, p0); }
int UI::GET_STREET_NAME_FROM_HASH_KEY(int p0) { return invoke<int>(0x1E8E310C, p0); }
int UI::IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<int>(0xC3BC1B4F); }
int UI::IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<int>(0x14AEAA28); }
int UI::IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<int>(0x63BA19F5); }
void UI::DISPLAY_HUD(int Toggle) { invoke<void*>(0xD10E4E31, Toggle); }
void UI::_0xC380AC85() { invoke<void*>(0xC380AC85); }
void UI::_0xC47AB1B0() { invoke<void*>(0xC47AB1B0); }
void UI::DISPLAY_RADAR(int Toggle) { invoke<void*>(0x52816BD4, Toggle); }
int UI::IS_HUD_HIDDEN() { return invoke<int>(0x40BADA1D); }
int UI::IS_RADAR_HIDDEN() { return invoke<int>(0x1AB3B954); }
void UI::SET_BLIP_ROUTE(int blip, int enabled) { invoke<void*>(0x3E160C90, blip, enabled); }
void UI::SET_BLIP_ROUTE_COLOUR(int p0, int p1) { invoke<void*>(0xDDE7C65C, p0, p1); }
void UI::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(int p0) { invoke<void*>(0xB58B25BD, p0); }
void UI::_0x9854485F(int p0) { invoke<void*>(0x9854485F, p0); }
void UI::RESPONDING_AS_TEMP(int p0) { invoke<void*>(0xDCA3F423, p0); }
void UI::SET_RADAR_ZOOM(int p0) { invoke<void*>(0x2A50D1A6, p0); }
void UI::_0x25EC28C0(int p0, int p1) { invoke<void*>(0x25EC28C0, p0, p1); }
void UI::_0x09CF1CE5(int p0) { invoke<void*>(0x09CF1CE5, p0); }
void UI::_0xE8D3A910() { invoke<void*>(0xE8D3A910); }
void UI::GET_HUD_COLOUR(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x63F66A0B, p0, p1, p2, p3, p4); }
void UI::_0x0E41E45C(int p0, int p1, int p2, int p3) { invoke<void*>(0x0E41E45C, p0, p1, p2, p3); }
void UI::_0x6BE3ACA8(int p0, int p1, int p2, int p3) { invoke<void*>(0x6BE3ACA8, p0, p1, p2, p3); }
void UI::_0x3B216749(int p0, int p1) { invoke<void*>(0x3B216749, p0, p1); }
void UI::_0xF6E7E92B(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xF6E7E92B, p0, p1, p2, p3, p4); }
void UI::FLASH_ABILITY_BAR(int p0) { invoke<void*>(0x3648960D, p0); }
void UI::SET_ABILITY_BAR_VALUE(int p0, int p1) { invoke<void*>(0x24E53FD8, p0, p1); }
void UI::FLASH_WANTED_DISPLAY(int p0) { invoke<void*>(0x629F866B, p0); }
int UI::_0x3330175B(int p0, int p1) { return invoke<int>(0x3330175B, p0, p1); }
void UI::SET_TEXT_SCALE(float p0, float p1) { invoke<void*>(0xB6E15B23, p0, p1); }
void UI::SET_TEXT_COLOUR(int R, int G, int B, int A) { invoke<void*>(0xE54DD2C8, R, G, B, A); }
void UI::SET_TEXT_CENTRE(int p0) { invoke<void*>(0xE26D39A1, p0); }
void UI::SET_TEXT_RIGHT_JUSTIFY(int p0) { invoke<void*>(0x45B60520, p0); }
void UI::_0x68CDFA60(int p0) { invoke<void*>(0x68CDFA60, p0); }
void UI::SET_TEXT_WRAP(float p0, float p1) { invoke<void*>(0x6F60AB54, p0, p1); }
void UI::SET_TEXT_LEADING(int p0) { invoke<void*>(0x98CE21D4, p0); }
void UI::SET_TEXT_PROPORTIONAL(int p0) { invoke<void*>(0xF49D8A08, p0); }
void UI::SET_TEXT_FONT(int p0) { invoke<void*>(0x80BC530D, p0); }
void UI::SET_TEXT_DROP_SHADOW() { invoke<void*>(0xE2A11511); }
void UI::SET_TEXT_DROPSHADOW(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xE6587517, p0, p1, p2, p3, p4); }
void UI::SET_TEXT_OUTLINE() { invoke<void*>(0xC753412F); }
void UI::SET_TEXT_EDGE(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x3F1A5DAB, p0, p1, p2, p3, p4); }
void UI::SET_TEXT_RENDER_ID(int p0) { invoke<void*>(0xC5C3B7F3, p0); }
int UI::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0x8188935F); }
int UI::REGISTER_NAMED_RENDERTARGET(int p0, int p1) { return invoke<int>(0xFAE5D6F0, p0, p1); }
int UI::IS_NAMED_RENDERTARGET_REGISTERED(int p0) { return invoke<int>(0x284057F5, p0); }
int UI::RELEASE_NAMED_RENDERTARGET(int p0) { return invoke<int>(0xD3F6C892, p0); }
void UI::LINK_NAMED_RENDERTARGET(int p0) { invoke<void*>(0x6844C4B9, p0); }
int UI::GET_NAMED_RENDERTARGET_RENDER_ID(int p0) { return invoke<int>(0xF9D7A401, p0); }
int UI::IS_NAMED_RENDERTARGET_LINKED(int p0) { return invoke<int>(0x8B52601F, p0); }
void UI::CLEAR_HELP(int Enable) { invoke<void*>(0xE6D85741, Enable); }
int UI::IS_HELP_MESSAGE_ON_SCREEN() { return invoke<int>(0x4B3C9CA9); }
int UI::_0x812CBE0E() { return invoke<int>(0x812CBE0E); }
int UI::IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<int>(0xA65F262A); }
int UI::IS_HELP_MESSAGE_FADING_OUT() { return invoke<int>(0x3E50AE92); }
int UI::_0x87871CE0() { return invoke<int>(0x87871CE0); }
int UI::_GET_BLIP_INFO_ID_ITERATOR() { return invoke<int>(0xB9827942); }
int UI::GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0x144020FA); }
int UI::GET_NEXT_BLIP_INFO_ID(int p0) { return invoke<int>(0x9356E92F, p0); }
int UI::GET_FIRST_BLIP_INFO_ID(int p0) { return invoke<int>(0x64C0273D, p0); }
Vector3 UI::GET_BLIP_INFO_ID_COORD(int p0) { return invoke<Vector3>(0xB7374A66, p0); }
int UI::GET_BLIP_INFO_ID_DISPLAY(int p0) { return invoke<int>(0xD0FC19F4, p0); }
int UI::GET_BLIP_INFO_ID_TYPE(int p0) { return invoke<int>(0x501D7B4E, p0); }
int UI::GET_BLIP_INFO_ID_ENTITY_INDEX(int p0) { return invoke<int>(0xA068C40B, p0); }
int UI::GET_BLIP_INFO_ID_PICKUP_INDEX(int p0) { return invoke<int>(0x86913D37, p0); }
int UI::GET_BLIP_FROM_ENTITY(int entity) { return invoke<int>(0x005A2A47, entity); }
int UI::ADD_BLIP_FOR_RADIUS(int p0, int p1, int p2, int p3) { return invoke<int>(0x4626756C, p0, p1, p2, p3); }
int UI::ADD_BLIP_FOR_ENTITY(int entity) { return invoke<int>(0x30822554, entity); }
int UI::ADD_BLIP_FOR_PICKUP(int p0) { return invoke<int>(0x16693C3A, p0); }
int UI::ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<int>(0xC6F43D0E, x, y, z); }
void UI::_0xBF25E7B2(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xBF25E7B2, p0, p1, p2, p3, p4); }
void UI::_0xE7E1E32B(int p0) { invoke<void*>(0xE7E1E32B, p0); }
void UI::SET_BLIP_COORDS(int p0, int p1, int p2, int p3) { invoke<void*>(0x680A34D4, p0, p1, p2, p3); }
Vector3 UI::GET_BLIP_COORDS(int p0) { return invoke<Vector3>(0xEF6FF47B, p0); }
void UI::SET_BLIP_SPRITE(int blip, int spriteId) { invoke<void*>(0x8DBBB0B9, blip, spriteId); }
int UI::GET_BLIP_SPRITE(int p0) { return invoke<int>(0x72FF2E73, p0); }
void UI::SET_BLIP_NAME_FROM_TEXT_FILE(int BlipID, char* blipname) { invoke<void*>(0xAC8A5461, BlipID, blipname); }
void UI::SET_BLIP_NAME_TO_PLAYER_NAME(int p0, int p1) { invoke<void*>(0x03A0B8F9, p0, p1); }
void UI::SET_BLIP_ALPHA(int p0, int p1) { invoke<void*>(0xA791FCCD, p0, p1); }
int UI::GET_BLIP_ALPHA(int p0) { return invoke<int>(0x297AF6C8, p0); }
void UI::SET_BLIP_FADE(int p0, int p1, int p2) { invoke<void*>(0xA5999031, p0, p1, p2); }
void UI::SET_BLIP_ROTATION(int p0, int p1) { invoke<void*>(0x6B8F44FE, p0, p1); }
void UI::SET_BLIP_FLASH_TIMER(int p0, int p1) { invoke<void*>(0x8D5DF611, p0, p1); }
void UI::SET_BLIP_FLASH_INTERVAL(int p0, int p1) { invoke<void*>(0xEAF67377, p0, p1); }
void UI::SET_BLIP_COLOUR(int BlipID, int Color) { invoke<void*>(0xBB3C5A41, BlipID, Color); }
void UI::SET_BLIP_SECONDARY_COLOUR(int p0, int p1, int p2, int p3) { invoke<void*>(0xC6384D32, p0, p1, p2, p3); }
int UI::GET_BLIP_COLOUR(int p0) { return invoke<int>(0xDD6A1E54, p0); }
int UI::GET_BLIP_HUD_COLOUR(int p0) { return invoke<int>(0xE88B4BC2, p0); }
int UI::IS_BLIP_SHORT_RANGE(int p0) { return invoke<int>(0x1226765A, p0); }
int UI::IS_BLIP_ON_MINIMAP(int p0) { return invoke<int>(0x258CBA3A, p0); }
int UI::_0x3E47F357(int p0) { return invoke<int>(0x3E47F357, p0); }
void UI::_0x43996428(int p0, int p1) { invoke<void*>(0x43996428, p0, p1); }
void UI::SET_BLIP_HIGH_DETAIL(int p0, int p1) { invoke<void*>(0xD5842BFF, p0, p1); }
void UI::SET_BLIP_AS_MISSION_CREATOR_BLIP(int p0, int p1) { invoke<void*>(0x802FB686, p0, p1); }
int UI::IS_MISSION_CREATOR_BLIP(int p0) { return invoke<int>(0x24ACC4E9, p0); }
int UI::DISABLE_BLIP_NAME_FOR_VAR() { return invoke<int>(0xFFD7476C); }
int UI::_0xC5EB849A() { return invoke<int>(0xC5EB849A); }
void UI::_0xA2CAAB4F(int p0) { invoke<void*>(0xA2CAAB4F, p0); }
void UI::SET_BLIP_FLASHES(int p0, int p1) { invoke<void*>(0xC0047F15, p0, p1); }
void UI::SET_BLIP_FLASHES_ALTERNATE(int BlipID, int p1) { invoke<void*>(0x1A81202B, BlipID, p1); }
int UI::IS_BLIP_FLASHING(int p0) { return invoke<int>(0x52E111D7, p0); }
void UI::SET_BLIP_AS_SHORT_RANGE(int p0, int p1) { invoke<void*>(0x5C67725E, p0, p1); }
void UI::SET_BLIP_SCALE(int BlipID, float Scale) { invoke<void*>(0x1E6EC434, BlipID, Scale); }
void UI::SET_BLIP_PRIORITY(int p0, int p1) { invoke<void*>(0xCE87DA6F, p0, p1); }
void UI::SET_BLIP_DISPLAY(int blip, int p1) { invoke<void*>(0x2B521F91, blip, p1); }
void UI::SET_BLIP_CATEGORY(int p0, int p1) { invoke<void*>(0xEF72F533, p0, p1); }
void UI::REMOVE_BLIP(int BlipID) { invoke<void*>(0xD8C3C1CD, BlipID); }
void UI::SET_BLIP_AS_FRIENDLY(int BlipID, int toggle) { invoke<void*>(0xF290CFD8, BlipID, toggle); }
void UI::PULSE_BLIP(int p0) { invoke<void*>(0x44253855, p0); }
void UI::SHOW_NUMBER_ON_BLIP(int p0, int p1) { invoke<void*>(0x7BFC66C6, p0, p1); }
void UI::HIDE_NUMBER_ON_BLIP(int p0) { invoke<void*>(0x0B6D610D, p0); }
void UI::_0x1D99F676(int p0, int p1) { invoke<void*>(0x1D99F676, p0, p1); }
void UI::_0x3DCF0092(int p0, int p1) { invoke<void*>(0x3DCF0092, p0, p1); }
void UI::_0xD1C3D71B(int p0, int p1) { invoke<void*>(0xD1C3D71B, p0, p1); }
void UI::_0x8DE82C15(int p0, int p1) { invoke<void*>(0x8DE82C15, p0, p1); }
void UI::_0x4C8F02B4(int p0, int p1) { invoke<void*>(0x4C8F02B4, p0, p1); }
void UI::_0xABBE1E45(int p0, int p1) { invoke<void*>(0xABBE1E45, p0, p1); }
void UI::_0x6AA6A1CC(int p0, int p1) { invoke<void*>(0x6AA6A1CC, p0, p1); }
void UI::_0xC575F0BC(int p0, int p1) { invoke<void*>(0xC575F0BC, p0, p1); }
void UI::_0x40E25DB8(int p0, int p1) { invoke<void*>(0x40E25DB8, p0, p1); }
int UI::DOES_BLIP_EXIST(int p0) { return invoke<int>(0xAE92DD96, p0); }
void UI::SET_WAYPOINT_OFF() { invoke<void*>(0xB3496E1B); }
void UI::_0x62BABF2C() { invoke<void*>(0x62BABF2C); }
void UI::REFRESH_WAYPOINT() { invoke<void*>(0xB395D753); }
int UI::IS_WAYPOINT_ACTIVE() { return invoke<int>(0x5E4DF47B); }
void UI::SET_NEW_WAYPOINT(int p0, int p1) { invoke<void*>(0x8444E1F0, p0, p1); }
void UI::SET_BLIP_BRIGHT(int p0, int p1) { invoke<void*>(0x72BEE6DF, p0, p1); }
void UI::SET_BLIP_SHOW_CONE(int p0, int p1) { invoke<void*>(0xFF545AD8, p0, p1); }
void UI::_0x41B0D022(int p0) { invoke<void*>(0x41B0D022, p0); }
int UI::SET_MINIMAP_COMPONENT(int p0, int p1) { return invoke<int>(0x419DCDC4, p0, p1); }
int UI::GET_MAIN_PLAYER_BLIP_ID() { return invoke<int>(0xAB93F020); }
void UI::HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<void*>(0x35087963); }
void UI::SET_RADAR_AS_INTERIOR_THIS_FRAME(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x6F2626E1, p0, p1, p2, p3, p4); }
void UI::SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<void*>(0x39ABB10E); }
void UI::_0x54E75C7D(int p0, int p1) { invoke<void*>(0x54E75C7D, p0, p1); }
int UI::_0x199DED14() { return invoke<int>(0x199DED14); }
void UI::_0x1A4318F7() { invoke<void*>(0x1A4318F7); }
void UI::_0xCE36E3FE() { invoke<void*>(0xCE36E3FE); }
void UI::_0x334EFD46() { invoke<void*>(0x334EFD46); }
void UI::SET_WIDESCREEN_FORMAT(int p0) { invoke<void*>(0xF016E08F, p0); }
void UI::DISPLAY_AREA_NAME(int p0) { invoke<void*>(0x489FDD41, p0); }
void UI::DISPLAY_CASH(int p0) { invoke<void*>(0x0049DF83, p0); }
void UI::DISPLAY_AMMO_THIS_FRAME(int p0) { invoke<void*>(0x60693CEE, p0); }
void UI::DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<void*>(0xBC6C73CB); }
void UI::HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<void*>(0xB75D4AD2); }
void UI::_0x5476B9FD(int p0) { invoke<void*>(0x5476B9FD, p0); }
void UI::_0xF4F3C796() { invoke<void*>(0xF4F3C796); }
void UI::_0x7BFFE82F() { invoke<void*>(0x7BFFE82F); }
void UI::SET_MULTIPLAYER_BANK_CASH() { invoke<void*>(0x2C842D03); }
void UI::REMOVE_MULTIPLAYER_BANK_CASH() { invoke<void*>(0x728B4EF4); }
void UI::SET_MULTIPLAYER_HUD_CASH(int p0, int p1) { invoke<void*>(0xA8DB435E, p0, p1); }
void UI::REMOVE_MULTIPLAYER_HUD_CASH() { invoke<void*>(0x07BF4A7D); }
void UI::HIDE_HELP_TEXT_THIS_FRAME() { invoke<void*>(0xF3807BED); }
void UI::DISPLAY_HELP_TEXT_THIS_FRAME(int p0, int p1) { invoke<void*>(0x18E3360A, p0, p1); }
void UI::_0x1EFFB02A(int forcedShow) { invoke<void*>(0x1EFFB02A, forcedShow); }
void UI::_0xB26FED2B() { invoke<void*>(0xB26FED2B); }
int UI::_0x22E9F555() { return invoke<int>(0x22E9F555); }
void UI::_0x83B608A0(int p0) { invoke<void*>(0x83B608A0, p0); }
void UI::_0xE70D1F43(int p0) { invoke<void*>(0xE70D1F43, p0); }
void UI::SET_GPS_FLAGS(int p0, int p1) { invoke<void*>(0x60539BAB, p0, p1); }
void UI::CLEAR_GPS_FLAGS() { invoke<void*>(0x056AFCE6); }
void UI::_0xFB9BABF5(int p0) { invoke<void*>(0xFB9BABF5, p0); }
void UI::CLEAR_GPS_RACE_TRACK() { invoke<void*>(0x40C59829); }
void UI::_0x7F93799B(int p0, int p1, int p2) { invoke<void*>(0x7F93799B, p0, p1, p2); }
void UI::_0xEEBDFE55(int p0, int p1, int p2) { invoke<void*>(0xEEBDFE55, p0, p1, p2); }
void UI::_0xDA0AF00E(int p0, int p1, int p2) { invoke<void*>(0xDA0AF00E, p0, p1, p2); }
void UI::_0xCF2E3E24() { invoke<void*>(0xCF2E3E24); }
void UI::_0xC3DCBEDB(int p0, int p1, int p2) { invoke<void*>(0xC3DCBEDB, p0, p1, p2); }
void UI::_0xFE485135(int p0, int p1, int p2) { invoke<void*>(0xFE485135, p0, p1, p2); }
void UI::_0xE87CBE4C(int p0) { invoke<void*>(0xE87CBE4C, p0); }
void UI::_0x0D9969E4() { invoke<void*>(0x0D9969E4); }
void UI::CLEAR_GPS_PLAYER_WAYPOINT() { invoke<void*>(0x0B9C7FC2); }
void UI::SET_GPS_FLASHES(int p0) { invoke<void*>(0xE991F733, p0); }
void UI::FLASH_MINIMAP_DISPLAY() { invoke<void*>(0xB8359952); }
void UI::_0x79A6CAF6(int p0) { invoke<void*>(0x79A6CAF6, p0); }
void UI::TOGGLE_STEALTH_RADAR(int p0) { invoke<void*>(0xC68D47C4, p0); }
void UI::KEY_HUD_COLOUR(int p0, int p1) { invoke<void*>(0xD5BFCADB, p0, p1); }
void UI::SET_MISSION_NAME(int p0, int p1) { invoke<void*>(0x68DCAE10, p0, p1); }
void UI::_0x8D9A1734(int p0, int p1) { invoke<void*>(0x8D9A1734, p0, p1); }
void UI::_0xD2161E77(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xD2161E77, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void UI::SET_MINIMAP_BLOCK_WAYPOINT(int p0) { invoke<void*>(0xA41C3B62, p0); }
void UI::_0x02F5F1D1(int p0) { invoke<void*>(0x02F5F1D1, p0); }
void UI::_0xD8D77733(int p0) { invoke<void*>(0xD8D77733, p0); }
int UI::_0xA4098ACC() { return invoke<int>(0xA4098ACC); }
int UI::_0x65B705F6(int p0, int p1, int p2) { return invoke<int>(0x65B705F6, p0, p1, p2); }
void UI::_0xE010F081(int p0, int p1, int p2) { invoke<void*>(0xE010F081, p0, p1, p2); }
void UI::_0x5133A750(int p0) { invoke<void*>(0x5133A750, p0); }
void UI::_0x20FD3E87() { invoke<void*>(0x20FD3E87); }
void UI::LOCK_MINIMAP_ANGLE(int p0) { invoke<void*>(0xDEC733E4, p0); }
void UI::UNLOCK_MINIMAP_ANGLE() { invoke<void*>(0x742043F9); }
void UI::LOCK_MINIMAP_POSITION(int p0, int p1) { invoke<void*>(0xB9632A91, p0, p1); }
void UI::UNLOCK_MINIMAP_POSITION() { invoke<void*>(0x5E8E6F54); }
void UI::_0x0308EDF6(int p0) { invoke<void*>(0x0308EDF6, p0); }
void UI::_0x7FB6FB2A(int p0, int p1, int p2) { invoke<void*>(0x7FB6FB2A, p0, p1, p2); }
void UI::_0xF07D8CEF(int p0) { invoke<void*>(0xF07D8CEF, p0); }
void UI::_0x827F14DE(int p0) { invoke<void*>(0x827F14DE, p0); }
void UI::_0x08EB83D2(int p0, int p1) { invoke<void*>(0x08EB83D2, p0, p1); }
int UI::IS_HUD_COMPONENT_ACTIVE(int p0) { return invoke<int>(0x6214631F, p0); }
int UI::IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int p0) { return invoke<int>(0x2B86F382, p0); }
void UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int p0) { invoke<void*>(0x31ABA127, p0); }
int UI::_0xE8C8E535(int p0) { return invoke<int>(0xE8C8E535, p0); }
void UI::HIDE_HUD_COMPONENT_THIS_FRAME(int p0) { invoke<void*>(0xDB2D0762, p0); }
void UI::SHOW_HUD_COMPONENT_THIS_FRAME(int p0) { invoke<void*>(0x95E1546E, p0); }
void UI::_0x52746FE1() { invoke<void*>(0x52746FE1); }
void UI::RESET_RETICULE_VALUES() { invoke<void*>(0xBE27AA3F); }
void UI::RESET_HUD_COMPONENT_VALUES(int p0) { invoke<void*>(0xD15B46DA, p0); }
void UI::SET_HUD_COMPONENT_POSITION(int p0, int p1, int p2) { invoke<void*>(0x2F3A0D15, p0, p1, p2); }
Vector3 UI::GET_HUD_COMPONENT_POSITION(int p0) { return invoke<Vector3>(0x080DCED6, p0); }
void UI::_0x5BBCC934() { invoke<void*>(0x5BBCC934); }
int UI::_0xFE9A39F8(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xFE9A39F8, p0, p1, p2, p3, p4); }
void UI::_0x10DE5150() { invoke<void*>(0x10DE5150); }
void UI::_0x67649EE0() { invoke<void*>(0x67649EE0); }
int UI::_0x9D2C94FA() { return invoke<int>(0x9D2C94FA); }
int UI::_0x45472FD5(int p0) { return invoke<int>(0x45472FD5, p0); }
void UI::_0x198F32D7(int p0, int p1, int p2) { invoke<void*>(0x198F32D7, p0, p1, p2); }
void UI::_0x93045157(int p0, int p1, int p2, int p3) { invoke<void*>(0x93045157, p0, p1, p2, p3); }
void UI::_0x18B012B7(int p0, int p1, int p2, int p3) { invoke<void*>(0x18B012B7, p0, p1, p2, p3); }
void UI::_0x97852A82(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x97852A82, p0, p1, p2, p3, p4, p5); }
void UI::CLEAR_FLOATING_HELP(int p0, int p1) { invoke<void*>(0xB181F88F, p0, p1); }
void UI::_0xC969F2D0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xC969F2D0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int UI::_0xEFD2564A() { return invoke<int>(0xEFD2564A); }
int UI::_0xF5CD2AA4(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xF5CD2AA4, p0, p1, p2, p3, p4, p5); }
void UI::_0x3D081FE4(int p0) { invoke<void*>(0x3D081FE4, p0); }
int UI::_0x60118951(int p0) { return invoke<int>(0x60118951, p0); }
int UI::ADD_TREVOR_RANDOM_MODIFIER(int p0) { return invoke<int>(0x63959059, p0); }
void UI::_0xD41DF479(int p0, int p1, int p2) { invoke<void*>(0xD41DF479, p0, p1, p2); }
void UI::_0x767DED29(int p0, int p1) { invoke<void*>(0x767DED29, p0, p1); }
void UI::_0xB01A5434(int p0, int p1) { invoke<void*>(0xB01A5434, p0, p1); }
void UI::_0x7E3AA40A(int p0, int p1, int p2) { invoke<void*>(0x7E3AA40A, p0, p1, p2); }
void UI::_0x5777EC77(int p0, int p1) { invoke<void*>(0x5777EC77, p0, p1); }
void UI::_0xF4418611(int p0, int p1, int p2) { invoke<void*>(0xF4418611, p0, p1, p2); }
void UI::_0x0EBB003F(int p0, int p1) { invoke<void*>(0x0EBB003F, p0, p1); }
void UI::_0x627A559B(int p0, int p1) { invoke<void*>(0x627A559B, p0, p1); }
int UI::_0xF11414C4(int p0) { return invoke<int>(0xF11414C4, p0); }
void UI::_0x939218AB(int p0, int p1) { invoke<void*>(0x939218AB, p0, p1); }
int UI::_0xAB5B7C18() { return invoke<int>(0xAB5B7C18); }
int UI::GET_CURRENT_WEBSITE_ID() { return invoke<int>(0x42A55B14); }
int UI::_0xD217EE7E(int p0) { return invoke<int>(0xD217EE7E, p0); }
void UI::SET_WARNING_MESSAGE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xBE699BDE, p0, p1, p2, p3, p4, p5, p6, p7); }
void UI::_0x2DB9EAB5(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x2DB9EAB5, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void UI::SET_DANCE_MAPPERS(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x749929D3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
int UI::_0x94C834AD() { return invoke<int>(0x94C834AD); }
void UI::_0x2F9A309C() { invoke<void*>(0x2F9A309C); }
void UI::_0xE4FD20D8(int p0) { invoke<void*>(0xE4FD20D8, p0); }
void UI::_0x13E7A5A9(int p0) { invoke<void*>(0x13E7A5A9, p0); }
int UI::_0x786CA0A2(int p0, int p1, int p2) { return invoke<int>(0x786CA0A2, p0, p1, p2); }
void UI::_0xCBEC9369() { invoke<void*>(0xCBEC9369); }
int UI::_0x3F4AFB13() { return invoke<int>(0x3F4AFB13); }
void UI::_0x2F28F0A6(int p0) { invoke<void*>(0x2F28F0A6, p0); }
void UI::_0x801D0D86() { invoke<void*>(0x801D0D86); }
void UI::_0x317775DF() { invoke<void*>(0x317775DF); }
void UI::ACTIVATE_FRONTEND_MENU(int p0, int p1, int p2) { invoke<void*>(0x01D83872, p0, p1, p2); }
void UI::RESTART_FRONTEND_MENU(int p0, int p1) { invoke<void*>(0xB07DAF98, p0, p1); }
int UI::_0x33D6868F() { return invoke<int>(0x33D6868F); }
void UI::SET_PAUSE_MENU_ACTIVE(int p0) { invoke<void*>(0x1DCD878E, p0); }
void UI::DISABLE_FRONTEND_THIS_FRAME() { invoke<void*>(0xD86A029E); }
void UI::_0x7F349900() { invoke<void*>(0x7F349900); }
void UI::_0x630CD8EE() { invoke<void*>(0x630CD8EE); }
void UI::SET_FRONTEND_ACTIVE(int p0) { invoke<void*>(0x81E1AD32, p0); }
int UI::IS_PAUSE_MENU_ACTIVE() { return invoke<int>(0xD3600591); }
int UI::_0xC85C4487() { return invoke<int>(0xC85C4487); }
int UI::GET_PAUSE_MENU_STATE() { return invoke<int>(0x92F50134); }
int UI::IS_PAUSE_MENU_RESTARTING() { return invoke<int>(0x3C4CF4D9); }
void UI::_0x2DFD35C7(int p0) { invoke<void*>(0x2DFD35C7, p0); }
void UI::_0x0A89336C(int p0) { invoke<void*>(0x0A89336C, p0); }
void UI::_0xC84BE309() { invoke<void*>(0xC84BE309); }
void UI::_0x9FE8FD5E(int p0) { invoke<void*>(0x9FE8FD5E, p0); }
void UI::OBJECT_DECAL_TOGGLE(int p0) { invoke<void*>(0x0029046E, p0); }
int UI::_0xC51BC42F(int p0) { return invoke<int>(0xC51BC42F, p0); }
int UI::_0x016D7AF9() { return invoke<int>(0x016D7AF9); }
void UI::ENABLE_DEATHBLOOD_SEETHROUGH(int p0) { invoke<void*>(0x15B24768, p0); }
void UI::_0x6C67131A(int p0, int p1, int p2) { invoke<void*>(0x6C67131A, p0, p1, p2); }
void UI::_0x11D09737(int p0) { invoke<void*>(0x11D09737, p0); }
int UI::_0xD3BF3ABD() { return invoke<int>(0xD3BF3ABD); }
void UI::_0xC06B763D() { invoke<void*>(0xC06B763D); }
void UI::_0xB9392CE7() { invoke<void*>(0xB9392CE7); }
int UI::_0x92DAFA78() { return invoke<int>(0x92DAFA78); }
int UI::_0x22CA9F2A() { return invoke<int>(0x22CA9F2A); }
int UI::_0xDA7951A2() { return invoke<int>(0xDA7951A2); }
int UI::_0x7D95AFFF() { return invoke<int>(0x7D95AFFF); }
int UI::_0x96863460() { return invoke<int>(0x96863460); }
void UI::_0x8543AAC8(int p0, int p1) { invoke<void*>(0x8543AAC8, p0, p1); }
void UI::_0x6025AA2F(int p0, int p1, int p2) { invoke<void*>(0x6025AA2F, p0, p1, p2); }
void UI::_0x30D72A4B(int p0, int p1) { invoke<void*>(0x30D72A4B, p0, p1); }
int UI::_0x46794EB2(int p0, int p1, int p2) { return invoke<int>(0x46794EB2, p0, p1, p2); }
int UI::SET_USERIDS_UIHIDDEN(int p0, int p1) { return invoke<int>(0x4370999E, p0, p1); }
int UI::_0xD6CC4766(int p0, int p1, int p2, int p3) { return invoke<int>(0xD6CC4766, p0, p1, p2, p3); }
int UI::_0x51972B04(int p0, int p1) { return invoke<int>(0x51972B04, p0, p1); }
int UI::_0xD43BB56D(int p0, int p1) { return invoke<int>(0xD43BB56D, p0, p1); }
void UI::CLEAR_PED_IN_PAUSE_MENU() { invoke<void*>(0x28058ACF); }
void UI::GIVE_PED_TO_PAUSE_MENU(int p0, int p1) { invoke<void*>(0x2AD2C9CE, p0, p1); }
void UI::_0x127310EB(int p0) { invoke<void*>(0x127310EB, p0); }
void UI::_0x8F45D327(int p0) { invoke<void*>(0x8F45D327, p0); }
void UI::_0x19FCBBB2() { invoke<void*>(0x19FCBBB2); }
int UI::_0x850690FF() { return invoke<int>(0x850690FF); }
int UI::_0x9D4934F4() { return invoke<int>(0x9D4934F4); }
void UI::_0x57218529() { invoke<void*>(0x57218529); }
void UI::_0x5F86AA39() { invoke<void*>(0x5F86AA39); }
void UI::_0x7AD67C95(int p0) { invoke<void*>(0x7AD67C95, p0); }
int UI::_0xD4DA14EF() { return invoke<int>(0xD4DA14EF); }
void UI::_0xFF06772A(int p0) { invoke<void*>(0xFF06772A, p0); }
void UI::_0x96C4C4DD(int p0, int p1) { invoke<void*>(0x96C4C4DD, p0, p1); }
int UI::DOES_PED_HAVE_AI_BLIP(int p0) { return invoke<int>(0x3BE1257F, p0); }
void UI::_0xD8E31B1A(int p0, int p1) { invoke<void*>(0xD8E31B1A, p0, p1); }
void UI::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(int p0, int p1) { invoke<void*>(0x872C2CFB, p0, p1); }
void UI::_0xFFDF46F0(int p0, int p1) { invoke<void*>(0xFFDF46F0, p0, p1); }
void UI::_0xF9DC2AF7(int p0, int p1) { invoke<void*>(0xF9DC2AF7, p0, p1); }
int UI::_0x06349065(int p0) { return invoke<int>(0x06349065, p0); }
int UI::_0xCA52CF43(int p0) { return invoke<int>(0xCA52CF43, p0); }

void GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(int enabled) { invoke<void*>(0x1418CA37, enabled); }
void GRAPHICS::DRAW_DEBUG_LINE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0xABF783AB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13) { invoke<void*>(0xE8BFF632, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
void GRAPHICS::DRAW_DEBUG_SPHERE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x304D0EEF, p0, p1, p2, p3, p4, p5, p6, p7); }
void GRAPHICS::DRAW_DEBUG_BOX(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x8524A848, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void GRAPHICS::_0xB6DF3709(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xB6DF3709, p0, p1, p2, p3, p4, p5, p6, p7); }
void GRAPHICS::DRAW_DEBUG_TEXT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0x269B006F, p0, p1, p2, p3, p4, p5, p6, p7); }
void GRAPHICS::DRAW_DEBUG_TEXT_2D(char* Text, float posX, float posY, float posZ, int R, int G, int B, int A) { invoke<void*>(0x528B973B, Text, posX, posY, posZ, R, G, B, A); }
void GRAPHICS::DRAW_LINE(float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, int R, int G, int B, int A) { invoke<void*>(0xB3426BCC, posX1, posY1, posZ1, posX2, posY2, posZ2, R, G, B, A); }
void GRAPHICS::DRAW_POLY(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { invoke<void*>(0xABD19253, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
void GRAPHICS::_0xCD4D9DD5(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0xCD4D9DD5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void GRAPHICS::_0xC44C2F44(int p0) { invoke<void*>(0xC44C2F44, p0); }
int GRAPHICS::_0xBA9AD458() { return invoke<int>(0xBA9AD458); }
int GRAPHICS::_0xADBBA287() { return invoke<int>(0xADBBA287); }
void GRAPHICS::_0x9E553002() { invoke<void*>(0x9E553002); }
int GRAPHICS::_0x56C1E488(int p0, int p1, int p2, int p3) { return invoke<int>(0x56C1E488, p0, p1, p2, p3); }
int GRAPHICS::_0x226B08EA(int p0) { return invoke<int>(0x226B08EA, p0); }
int GRAPHICS::_0x1F3CADB0() { return invoke<int>(0x1F3CADB0); }
int GRAPHICS::_0xA9DC8558() { return invoke<int>(0xA9DC8558); }
void GRAPHICS::_0x88EAF398() { invoke<void*>(0x88EAF398); }
int GRAPHICS::_0x47B0C137() { return invoke<int>(0x47B0C137); }
int GRAPHICS::MELEE_SEETHROUGH_SKIPPED() { return invoke<int>(0x65376C9B); }
void GRAPHICS::_0x9CBA682A() { invoke<void*>(0x9CBA682A); }
int GRAPHICS::_0x3B15D33C(int p0) { return invoke<int>(0x3B15D33C, p0); }
int GRAPHICS::_0xEC5D0317() { return invoke<int>(0xEC5D0317); }
int GRAPHICS::_0x25D569EB(int p0) { return invoke<int>(0x25D569EB, p0); }
int GRAPHICS::_0xCFCDC518(int p0) { return invoke<int>(0xCFCDC518, p0); }
void GRAPHICS::_0x108F36CC() { invoke<void*>(0x108F36CC); }
void GRAPHICS::_0xE9F2B68F(int p0, int p1) { invoke<void*>(0xE9F2B68F, p0, p1); }
int GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0x727AA63F); }
int GRAPHICS::_0x239272BD() { return invoke<int>(0x239272BD); }
int GRAPHICS::_0x21DBF0C9() { return invoke<int>(0x21DBF0C9); }
int GRAPHICS::_0x199FABF0(int p0) { return invoke<int>(0x199FABF0, p0); }
int GRAPHICS::_0x596B900D(int p0) { return invoke<int>(0x596B900D, p0); }
void GRAPHICS::_0xC9EF81ED() { invoke<void*>(0xC9EF81ED); }
int GRAPHICS::_0x9D84554C(int p0) { return invoke<int>(0x9D84554C, p0); }
int GRAPHICS::_0x9C106AD9(int p0) { return invoke<int>(0x9C106AD9, p0); }
int GRAPHICS::_0x762E5C5F(int p0) { return invoke<int>(0x762E5C5F, p0); }
void GRAPHICS::DRAW_LIGHT_WITH_RANGE(float* XCoord, float* YCoord, float* ZCoord, int Red, int Green, int Blue, float Width, float Height) { invoke<void*>(0x6A396E9A, XCoord, YCoord, ZCoord, Red, Green, Blue, Width, Height); }
void GRAPHICS::DRAW_SPOT_LIGHT(float x, float y, float z, float dir_x, float dir_y, float dir_z, int r, int g, int b, float distance, float falloff, float p11, float radius, float p13) { invoke<void*>(0xBDBC410C, x, y, z, dir_x, dir_y, dir_z, r, g, b, distance, falloff, p11, radius, p13); }
void GRAPHICS::_0x32BF9598(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14) { invoke<void*>(0x32BF9598, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
void GRAPHICS::_0x93628786(int p0) { invoke<void*>(0x93628786, p0); }
void GRAPHICS::DRAW_MARKER(int type, float x, float y, float z, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int colorR, int colorG, int colorB, int alpha, int bobUpAndDown, int faceCamera, int p19, int rotate, char* textureDict, char* textureName, int drawOnEnts) { invoke<void*>(0x48D84A02, type, x, y, z, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, colorR, colorG, colorB, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); }
int GRAPHICS::CREATE_CHECKPOINT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { return invoke<int>(0xF541B690, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
void GRAPHICS::_0x80151CCF(int p0, int p1) { invoke<void*>(0x80151CCF, p0, p1); }
void GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(int p0, int p1, int p2, int p3) { invoke<void*>(0xFF0F9B22, p0, p1, p2, p3); }
void GRAPHICS::SET_CHECKPOINT_RGBA(int p0, int colorR, int colorG, int colorB, int colorA) { invoke<void*>(0xEF9C8CB3, p0, colorR, colorG, colorB, colorA); }
void GRAPHICS::_0xA5456DBB(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xA5456DBB, p0, p1, p2, p3, p4); }
void GRAPHICS::_0x20EABD0F(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x20EABD0F, p0, p1, p2, p3, p4, p5, p6); }
void GRAPHICS::_0x1E3A3126(int p0) { invoke<void*>(0x1E3A3126, p0); }
void GRAPHICS::DELETE_CHECKPOINT(int p0) { invoke<void*>(0xB66CF3CA, p0); }
void GRAPHICS::_0x932FDB81(int p0) { invoke<void*>(0x932FDB81, p0); }
void GRAPHICS::_0x7E946E87(int p0) { invoke<void*>(0x7E946E87, p0); }
void GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(char* Type, int Toggle) { invoke<void*>(0x4C9B035F, Type, Toggle); }
int GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(char* Type) { return invoke<int>(0x3F436EEF, Type); }
void GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(char* Type) { invoke<void*>(0xF07DDA38, Type); }
void GRAPHICS::DRAW_RECT(float posX, float posY, float scaleX, float scaleY, int R, int G, int B, int A) { invoke<void*>(0xDD2BFC77, posX, posY, scaleX, scaleY, R, G, B, A); }
void GRAPHICS::_0xF8FBCC25(int p0) { invoke<void*>(0xF8FBCC25, p0); }
void GRAPHICS::_0xADF81D24(int p0) { invoke<void*>(0xADF81D24, p0); }
void GRAPHICS::_0x228A2598(int p0, int p1) { invoke<void*>(0x228A2598, p0, p1); }
void GRAPHICS::_0x3FE33BD6() { invoke<void*>(0x3FE33BD6); }
void GRAPHICS::_0x76C641E4(int p0, int p1, int p2, int p3) { invoke<void*>(0x76C641E4, p0, p1, p2, p3); }
int GRAPHICS::_0x3F0D1A6F() { return invoke<int>(0x3F0D1A6F); }
void GRAPHICS::DRAW_SPRITE(char* Type, char* IconType, float X, float Y, float width, float height, float rotation, int RED, int GREEN, int BLUE, int Alpha) { invoke<void*>(0x1FEC16B0, Type, IconType, X, Y, width, height, rotation, RED, GREEN, BLUE, Alpha); }
int GRAPHICS::ADD_ENTITY_ICON(int p0, int p1) { return invoke<int>(0xF3027D21, p0, p1); }
void GRAPHICS::SET_ENTITY_ICON_VISIBILITY(int p0, int p1) { invoke<void*>(0xD1D2FD52, p0, p1); }
void GRAPHICS::SET_ENTITY_ICON_COLOR(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x6EE1E946, p0, p1, p2, p3, p4); }
void GRAPHICS::SET_DRAW_ORIGIN(int p0, int p1, int p2, int p3) { invoke<void*>(0xE10198D5, p0, p1, p2, p3); }
void GRAPHICS::CLEAR_DRAW_ORIGIN() { invoke<void*>(0xDD76B263); }
void GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(int p0) { invoke<void*>(0x784944DB, p0); }
void GRAPHICS::SET_TV_AUDIO_FRONTEND(int p0) { invoke<void*>(0x2E0DFA35, p0); }
int GRAPHICS::LOAD_MOVIE_MESH_SET(int p0) { return invoke<int>(0x9627905C, p0); }
void GRAPHICS::RELEASE_MOVIE_MESH_SET(int p0) { invoke<void*>(0x4FA5501D, p0); }
int GRAPHICS::_0x9D5D9B38(int p0) { return invoke<int>(0x9D5D9B38, p0); }
void GRAPHICS::GET_SCREEN_RESOLUTION(int* p0, int* p1) { invoke<void*>(0x29F3572F, p0, p1); }
int GRAPHICS::GET_IS_WIDESCREEN() { return invoke<int>(0xEC717AEF); }
int GRAPHICS::GET_IS_HIDEF() { return invoke<int>(0x1C340359); }
void GRAPHICS::SET_NIGHTVISION(int Toggle) { invoke<void*>(0xD1E5565F, Toggle); }
int GRAPHICS::_0x62619061() { return invoke<int>(0x62619061); }
void GRAPHICS::SET_NOISEOVERIDE(int p0) { invoke<void*>(0xD576F5DD, p0); }
void GRAPHICS::SET_NOISINESSOVERIDE(int p0) { invoke<void*>(0x046B62D9, p0); }
int GRAPHICS::_0x1F950E4B(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x1F950E4B, p0, p1, p2, p3, p4); }
Vector3 GRAPHICS::GET_TEXTURE_RESOLUTION(int p0, int p1) { return invoke<Vector3>(0x096DAA4D, p0, p1); }
void GRAPHICS::_0x455F1084(int p0) { invoke<void*>(0x455F1084, p0); }
void GRAPHICS::SET_FLASH(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x7E55A1EE, p0, p1, p2, p3, p4); }
void GRAPHICS::_0x0DCC0B8B() { invoke<void*>(0x0DCC0B8B); }
void GRAPHICS::_0xAA2A0EAF(int p0) { invoke<void*>(0xAA2A0EAF, p0); }
int GRAPHICS::CREATE_TRACKED_POINT() { return invoke<int>(0x3129C31A); }
void GRAPHICS::SET_TRACKED_POINT_INFO(int point, int x, int y, int z, float radius) { invoke<void*>(0x28689AA4, point, x, y, z, radius); }
int GRAPHICS::IS_TRACKED_POINT_VISIBLE(int p0) { return invoke<int>(0x0BFC4F64, p0); }
void GRAPHICS::DESTROY_TRACKED_POINT(int p0) { invoke<void*>(0x14AC675F, p0); }
void GRAPHICS::_0x72B36815() { invoke<void*>(0x72B36815); }
void GRAPHICS::_0xD820ADD4() { invoke<void*>(0xD820ADD4); }
void GRAPHICS::_0x48F16186() { invoke<void*>(0x48F16186); }
void GRAPHICS::_0x13D4ABC0(int p0) { invoke<void*>(0x13D4ABC0, p0); }
void GRAPHICS::_0xD2157428(int p0) { invoke<void*>(0xD2157428, p0); }
void GRAPHICS::_0xC07C64C9(int p0) { invoke<void*>(0xC07C64C9, p0); }
void GRAPHICS::_0xFE903D0F(int p0) { invoke<void*>(0xFE903D0F, p0); }
void GRAPHICS::_0xDE10BA1F(int p0) { invoke<void*>(0xDE10BA1F, p0); }
void GRAPHICS::_0x9F470BE3(int p0) { invoke<void*>(0x9F470BE3, p0); }
void GRAPHICS::_0x4A124267(int p0) { invoke<void*>(0x4A124267, p0); }
void GRAPHICS::_0xB19B2764(float p0) { invoke<void*>(0xB19B2764, p0); }
void GRAPHICS::_0x342FA2B4(int p0) { invoke<void*>(0x342FA2B4, p0); }
void GRAPHICS::_0x5D3BFFC9(int p0) { invoke<void*>(0x5D3BFFC9, p0); }
void GRAPHICS::_0xD9653728(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xD9653728, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void GRAPHICS::_0x72BA8A14(int p0, int p1, int p2) { invoke<void*>(0x72BA8A14, p0, p1, p2); }
void GRAPHICS::_0x804F444C(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0x804F444C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void GRAPHICS::_0xBB1A1294(int p0, int p1) { invoke<void*>(0xBB1A1294, p0, p1); }
void GRAPHICS::_0x1A1A72EF(int p0) { invoke<void*>(0x1A1A72EF, p0); }
void GRAPHICS::_0x3BB12B75(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x3BB12B75, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void GRAPHICS::_0x4EA70FB4(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x4EA70FB4, p0, p1, p2, p3, p4); }
void GRAPHICS::_0x0D830DC7(int p0) { invoke<void*>(0x0D830DC7, p0); }
int GRAPHICS::_0xA08B46AD() { return invoke<int>(0xA08B46AD); }
Vector3 GRAPHICS::_0xECD470F0(int p0) { return invoke<Vector3>(0xECD470F0, p0); }
void GRAPHICS::SET_SEETHROUGH(int Toggle) { invoke<void*>(0x74D4995C, Toggle); }
int GRAPHICS::_0x1FE547F2() { return invoke<int>(0x1FE547F2); }
void GRAPHICS::SEETHROUGH_RESET() { invoke<void*>(0x310E9B67); }
void GRAPHICS::_0x654F0287(int p0, int p1) { invoke<void*>(0x654F0287, p0, p1); }
void GRAPHICS::_0xF6B837F0(int p0) { invoke<void*>(0xF6B837F0, p0); }
int GRAPHICS::_0xD906A3A9() { return invoke<int>(0xD906A3A9); }
void GRAPHICS::_0xD34A6CBA(int p0) { invoke<void*>(0xD34A6CBA, p0); }
void GRAPHICS::_0xD8CC7221(int p0) { invoke<void*>(0xD8CC7221, p0); }
int GRAPHICS::_0x5604B890(int p0) { return invoke<int>(0x5604B890, p0); }
int GRAPHICS::_0x46617502(int p0) { return invoke<int>(0x46617502, p0); }
void GRAPHICS::_0xDB7AECDA() { invoke<void*>(0xDB7AECDA); }
int GRAPHICS::IS_PARTICLE_FX_DELAYED_BLINK() { return invoke<int>(0xEA432A94); }
int GRAPHICS::_0x926B8734() { return invoke<int>(0x926B8734); }
void GRAPHICS::_0x30ADE541(int p0) { invoke<void*>(0x30ADE541, p0); }
void GRAPHICS::_0x0113EAE4() { invoke<void*>(0x0113EAE4); }
void GRAPHICS::_0xDCBA251B() { invoke<void*>(0xDCBA251B); }
void GRAPHICS::_0x513D444B(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x513D444B, p0, p1, p2, p3, p4, p5); }
int GRAPHICS::_0xB2410EAB(int p0) { return invoke<int>(0xB2410EAB, p0); }
int GRAPHICS::_0x5AB94128() { return invoke<int>(0x5AB94128); }
int GRAPHICS::_0xD63FCB3E(int p0, int p1) { return invoke<int>(0xD63FCB3E, p0, p1); }
int GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { return invoke<int>(0xDD79D679, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
int GRAPHICS::_START_FWPARTICLE_FX_NON_LOOPED_AT_COORD(char* FWType, float* xCoord, float* yCoord, float* zCoord, float unk, float unk2, float size, int unk3, int unk4, int unk5, int unk6) { return invoke<int>(0x633F8C48, FWType, xCoord, yCoord, zCoord, unk, unk2, size, unk3, unk4, unk5, unk6); }
int GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { return invoke<int>(0x53DAEF4E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
int GRAPHICS::_0x161780C1(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { return invoke<int>(0x161780C1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
int GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { return invoke<int>(0x9604DAD4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void GRAPHICS::_0x7B689E20(int Red, int Green, int Blue) { invoke<void*>(0x7B689E20, Red, Green, Blue); }
void GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(int p0) { invoke<void*>(0x497EAFF2, p0); }
int GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { return invoke<int>(0xD348E3E6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
int GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { return invoke<int>(0xF8FC196F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
int GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { return invoke<int>(0x0D06FF62, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
int GRAPHICS::_0x110752B2(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { return invoke<int>(0x110752B2, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void GRAPHICS::STOP_PARTICLE_FX_LOOPED(int p0, int p1) { invoke<void*>(0xD245455B, p0, p1); }
void GRAPHICS::REMOVE_PARTICLE_FX(int p0, int p1) { invoke<void*>(0x6BA48C7E, p0, p1); }
void GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(int p0) { invoke<void*>(0xCEDE52E9, p0); }
void GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(int p0, int p1, int p2, int p3) { invoke<void*>(0x7EB8F275, p0, p1, p2, p3); }
int GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(int p0) { return invoke<int>(0xCBF91D2A, p0); }
void GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x641F7790, p0, p1, p2, p3, p4, p5, p6); }
void GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(int p0, int p1, int p2) { invoke<void*>(0x1CBC1373, p0, p1, p2); }
void GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x5219D530, p0, p1, p2, p3, p4); }
void GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(int p0, int p1) { invoke<void*>(0x5ED49BE1, p0, p1); }
void GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(int p0, int p1) { invoke<void*>(0x099B8B49, p0, p1); }
void GRAPHICS::_0x233DE879(int p0, int p1) { invoke<void*>(0x233DE879, p0, p1); }
void GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(int p0) { invoke<void*>(0x19EC0001, p0); }
void GRAPHICS::_0x6B125A02(int p0, int p1) { invoke<void*>(0x6B125A02, p0, p1); }
void GRAPHICS::_0xD938DEE0(int p0) { invoke<void*>(0xD938DEE0, p0); }
void GRAPHICS::_0xD6844637() { invoke<void*>(0xD6844637); }
void GRAPHICS::SET_PARTICLE_FX_BLOOD_SCALE(int p0) { invoke<void*>(0x18136DE0, p0); }
void GRAPHICS::SET_CAMERA_ENDTIME(int p0) { invoke<void*>(0xC61C75E9, p0); }
void GRAPHICS::_0xCE8B8748(int p0) { invoke<void*>(0xCE8B8748, p0); }
void GRAPHICS::_0xC1AD5DDF(int p0) { invoke<void*>(0xC1AD5DDF, p0); }
void GRAPHICS::_0x3968E915(int p0) { invoke<void*>(0x3968E915, p0); }
void GRAPHICS::_0x64BA4648(int p0) { invoke<void*>(0x64BA4648, p0); }
void GRAPHICS::_0x8BE3D47F(int p0) { invoke<void*>(0x8BE3D47F, p0); }
void GRAPHICS::_0xE3880F5A(int p0) { invoke<void*>(0xE3880F5A, p0); }
void GRAPHICS::_0x9C720B61(int p0) { invoke<void*>(0x9C720B61, p0); }
void GRAPHICS::_0xC92719A7(int p0, int p1) { invoke<void*>(0xC92719A7, p0, p1); }
void GRAPHICS::_0x9E8D8B72(int p0) { invoke<void*>(0x9E8D8B72, p0); }
void GRAPHICS::WASH_DECALS_IN_RANGE(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xDEECBC57, p0, p1, p2, p3, p4); }
void GRAPHICS::WASH_DECALS_FROM_VEHICLE(int p0, int p1) { invoke<void*>(0x2929F11A, p0, p1); }
void GRAPHICS::FADE_DECALS_IN_RANGE(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xF81E884A, p0, p1, p2, p3, p4); }
void GRAPHICS::REMOVE_DECALS_IN_RANGE(int p0, int p1, int p2, int p3) { invoke<void*>(0x06A619A0, p0, p1, p2, p3); }
void GRAPHICS::REMOVE_DECALS_FROM_OBJECT(int p0) { invoke<void*>(0x8B67DCA7, p0); }
void GRAPHICS::REMOVE_DECALS_FROM_OBJECT_FACING(int p0, int p1, int p2, int p3) { invoke<void*>(0xF4999A55, p0, p1, p2, p3); }
void GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(int p0) { invoke<void*>(0x831D06CA, p0); }
int GRAPHICS::ADD_DECAL(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int p17, int p18, int p19) { return invoke<int>(0xEAD0C412, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); }
int GRAPHICS::ADD_PETROL_DECAL(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x1259DF42, p0, p1, p2, p3, p4, p5); }
void GRAPHICS::_0xE3938B0B(int p0) { invoke<void*>(0xE3938B0B, p0); }
void GRAPHICS::_0xBAEC6ADD(int p0, int p1, int p2, int p3) { invoke<void*>(0xBAEC6ADD, p0, p1, p2, p3); }
void GRAPHICS::SET_CAMERA_CAMERA_FORWARD() { invoke<void*>(0xCCCA6855); }
void GRAPHICS::REMOVE_DECAL(int p0) { invoke<void*>(0xA4363188, p0); }
int GRAPHICS::IS_DECAL_ALIVE(int p0) { return invoke<int>(0xCDD4A61A, p0); }
int GRAPHICS::GET_DECAL_WASH_LEVEL(int p0) { return invoke<int>(0x054448EF, p0); }
void GRAPHICS::_0xEAB6417C() { invoke<void*>(0xEAB6417C); }
void GRAPHICS::_0xC2703B88() { invoke<void*>(0xC2703B88); }
void GRAPHICS::_0xA706E84D() { invoke<void*>(0xA706E84D); }
int GRAPHICS::_0x242C6A04(int p0, int p1, int p2, int p3) { return invoke<int>(0x242C6A04, p0, p1, p2, p3); }
void GRAPHICS::_0x335695CF(int p0, int p1, int p2) { invoke<void*>(0x335695CF, p0, p1, p2); }
void GRAPHICS::_0x7B786555(int p0) { invoke<void*>(0x7B786555, p0); }
void GRAPHICS::MOVE_VEHICLE_DECALS(int p0, int p1) { invoke<void*>(0xCE9E6CF2, p0, p1); }
int GRAPHICS::_0x12077738(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { return invoke<int>(0x12077738, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
void GRAPHICS::_0x667046A8(int p0) { invoke<void*>(0x667046A8, p0); }
int GRAPHICS::_0x4F4D76E8(int p0) { return invoke<int>(0x4F4D76E8, p0); }
int GRAPHICS::_0x6D58F73B(int p0) { return invoke<int>(0x6D58F73B, p0); }
void GRAPHICS::_0x9BABCBA4(int p0) { invoke<void*>(0x9BABCBA4, p0); }
void GRAPHICS::_0xFDF6D8DA(int p0) { invoke<void*>(0xFDF6D8DA, p0); }
void GRAPHICS::_0x2056A015(int p0) { invoke<void*>(0x2056A015, p0); }
void GRAPHICS::_0x0F486429(int p0) { invoke<void*>(0x0F486429, p0); }
void GRAPHICS::_0xD87CC710(int p0) { invoke<void*>(0xD87CC710, p0); }
void GRAPHICS::_0xE29EE145() { invoke<void*>(0xE29EE145); }
void GRAPHICS::DISABLE_VEHICLE_DISTANTLIGHTS(int p0) { invoke<void*>(0x7CFAE36F, p0); }
void GRAPHICS::_0x60F72371(int p0) { invoke<void*>(0x60F72371, p0); }
void GRAPHICS::_0xC53576CA(int p0) { invoke<void*>(0xC53576CA, p0); }
void GRAPHICS::_0x7158B1EA(int p0) { invoke<void*>(0x7158B1EA, p0); }
void GRAPHICS::SET_TIMECYCLE_MODIFIER(char* CycleType) { invoke<void*>(0xA81F3638, CycleType); }
void GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(int p0) { invoke<void*>(0x458F4F45, p0); }
void GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(int p0, int p1) { invoke<void*>(0xBB2BA72A, p0, p1); }
void GRAPHICS::_0x56345F6B(int p0) { invoke<void*>(0x56345F6B, p0); }
void GRAPHICS::CLEAR_TIMECYCLE_MODIFIER() { invoke<void*>(0x8D8DF8EE); }
int GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0x594FEEC4); }
int GRAPHICS::_0x03C44E4B() { return invoke<int>(0x03C44E4B); }
void GRAPHICS::PUSH_TIMECYCLE_MODIFIER() { invoke<void*>(0x7E082045); }
void GRAPHICS::POP_TIMECYCLE_MODIFIER() { invoke<void*>(0x79D7D235); }
void GRAPHICS::_0x85BA15A4(int p0) { invoke<void*>(0x85BA15A4, p0); }
void GRAPHICS::_0x9559BB38(int p0) { invoke<void*>(0x9559BB38, p0); }
void GRAPHICS::_0x554BA16E(int p0) { invoke<void*>(0x554BA16E, p0); }
void GRAPHICS::_0xE8F538B5(int p0, int p1) { invoke<void*>(0xE8F538B5, p0, p1); }
void GRAPHICS::_0x805BAB08(int p0) { invoke<void*>(0x805BAB08, p0); }
void GRAPHICS::_0x908A335E(int p0) { invoke<void*>(0x908A335E, p0); }
void GRAPHICS::_0x6776720A() { invoke<void*>(0x6776720A); }
int GRAPHICS::REQUEST_SCALEFORM_MOVIE(char* p0) { return invoke<int>(0xC67E3DCB, p0); }
int GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, bool unk) { return invoke<int>(0x7B48E696, scaleform, red, green, blue, alpha, unk); }
int GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID() { return invoke<int>(0x02DBF2D7); }
int GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(int scaleform, const char *functionName) { return invoke<int>(0x215ABBE8, scaleform, functionName); }
void GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(int p0) { invoke<void*>(0x716777CB, p0); }
void GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(float p0) { invoke<void*>(0x9A01FFDA, p0); }
void GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bool p0) { invoke<void*>(0x0D4AE8CB, p0); }
void GRAPHICS::_BEGIN_TEXT_COMPONENT(char *componentType) { invoke<void*>(0x3AC9CB55, componentType); }
void GRAPHICS::_END_TEXT_COMPONENT() { invoke<void*>(0x386CE0B8); }
int GRAPHICS::_0x7CC8057D(int p0) { return invoke<int>(0x7CC8057D, p0); }
int GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(int p0) { return invoke<int>(0xDDFB6448, p0); }
int GRAPHICS::_0x1DFE8D8A(int p0) { return invoke<int>(0x1DFE8D8A, p0); }
void GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int p0) { invoke<void*>(0x5FED3BA1, p0); }
void GRAPHICS::_0x18C9DE8D(int p0, int p1) { invoke<void*>(0x18C9DE8D, p0, p1); }
void GRAPHICS::DRAW_SCALEFORM_MOVIE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x48DA6A58, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void GRAPHICS::_0x7B48E696(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x7B48E696, p0, p1, p2, p3, p4); }
void GRAPHICS::_0x9C59FC06(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x9C59FC06, p0, p1, p2, p3, p4, p5); }
void GRAPHICS::_0xC4F63A89(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13) { invoke<void*>(0xC4F63A89, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
void GRAPHICS::_0x899933C8(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13) { invoke<void*>(0x899933C8, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
void GRAPHICS::_0x7AB77B57(int p0, int p1) { invoke<void*>(0x7AB77B57, p0, p1); }
void GRAPHICS::_0x557EDA1D(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x557EDA1D, p0, p1, p2, p3, p4, p5, p6); }
void GRAPHICS::_0x91A7FCEB(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x91A7FCEB, p0, p1, p2, p3, p4, p5, p6); }
void GRAPHICS::_0x6EAF56DE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0x6EAF56DE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
int GRAPHICS::_0x5D66CE1E(int p0, int p1) { return invoke<int>(0x5D66CE1E, p0, p1); }
int GRAPHICS::_0x215ABBE8(int p0, int p1) { return invoke<int>(0x215ABBE8, p0, p1); }
int GRAPHICS::_0xF6015178(int p0) { return invoke<int>(0xF6015178, p0); }
int GRAPHICS::_0x5E219B67(int p0) { return invoke<int>(0x5E219B67, p0); }
void GRAPHICS::_0x02DBF2D7() { invoke<void*>(0x02DBF2D7); }
int GRAPHICS::_0x2F38B526() { return invoke<int>(0x2F38B526); }
int GRAPHICS::_0x5CD7C3C0(int p0) { return invoke<int>(0x5CD7C3C0, p0); }
int GRAPHICS::_0x2CFB0E6D(int p0) { return invoke<int>(0x2CFB0E6D, p0); }
int GRAPHICS::SITTING_TV(int p0) { return invoke<int>(0x516862EB, p0); }
void GRAPHICS::_0x716777CB(int p0) { invoke<void*>(0x716777CB, p0); }
void GRAPHICS::_0x9A01FFDA(int p0) { invoke<void*>(0x9A01FFDA, p0); }
void GRAPHICS::_0x0D4AE8CB(int p0) { invoke<void*>(0x0D4AE8CB, p0); }
void GRAPHICS::_0x3AC9CB55(int p0) { invoke<void*>(0x3AC9CB55, p0); }
void GRAPHICS::_0x386CE0B8() { invoke<void*>(0x386CE0B8); }
void GRAPHICS::_0x2E80DB52() { invoke<void*>(0x2E80DB52); }
void GRAPHICS::_0x4DAAD55B(int p0) { invoke<void*>(0x4DAAD55B, p0); }
void GRAPHICS::_0xCCBF0334(int p0) { invoke<void*>(0xCCBF0334, p0); }
int GRAPHICS::_0x91A081A1(int p0) { return invoke<int>(0x91A081A1, p0); }
void GRAPHICS::_0x83A9811D(int p0) { invoke<void*>(0x83A9811D, p0); }
void GRAPHICS::_0x7AF85862(int p0) { invoke<void*>(0x7AF85862, p0); }
int GRAPHICS::_0x79B43255(int p0) { return invoke<int>(0x79B43255, p0); }
void GRAPHICS::_0x03D87600(int p0) { invoke<void*>(0x03D87600, p0); }
int GRAPHICS::_0xE9183D3A(int p0) { return invoke<int>(0xE9183D3A, p0); }
void GRAPHICS::SET_TV_CHANNEL(int p0) { invoke<void*>(0x41A8A627, p0); }
int GRAPHICS::GET_TV_CHANNEL() { return invoke<int>(0x6B96145A); }
void GRAPHICS::SET_TV_VOLUME(int p0) { invoke<void*>(0xF3504F4D, p0); }
int GRAPHICS::GET_TV_VOLUME() { return invoke<int>(0x39555CF0); }
void GRAPHICS::DRAW_TV_CHANNEL(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x8129EF89, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void GRAPHICS::_0xB262DE67(int p0, int p1, int p2) { invoke<void*>(0xB262DE67, p0, p1, p2); }
void GRAPHICS::_0x78C4DCBE(int p0, int p1, int p2) { invoke<void*>(0x78C4DCBE, p0, p1, p2); }
void GRAPHICS::_0xCBE7068F(int p0) { invoke<void*>(0xCBE7068F, p0); }
int GRAPHICS::_0x4D1EB0FB(int p0) { return invoke<int>(0x4D1EB0FB, p0); }
void GRAPHICS::_0x796DE696(int p0) { invoke<void*>(0x796DE696, p0); }
void GRAPHICS::_0xD99EC000(int p0) { invoke<void*>(0xD99EC000, p0); }
void GRAPHICS::ENABLE_MOVIE_SUBTITLES(int p0) { invoke<void*>(0xC2DEBA3D, p0); }
int GRAPHICS::_0xE40A0F1A() { return invoke<int>(0xE40A0F1A); }
int GRAPHICS::_0x2E7D9B98(int p0) { return invoke<int>(0x2E7D9B98, p0); }
int GRAPHICS::_0x9A0E3BFE(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x9A0E3BFE, p0, p1, p2, p3, p4, p5); }
int GRAPHICS::_0x6BBDE6CD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x6BBDE6CD, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void GRAPHICS::_0x431AA036() { invoke<void*>(0x431AA036); }
void GRAPHICS::_0x24A7A7F6(int p0) { invoke<void*>(0x24A7A7F6, p0); }
void GRAPHICS::_0xA1CB6C94(int p0) { invoke<void*>(0xA1CB6C94, p0); }
void GRAPHICS::_0x3B637AA7(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { invoke<void*>(0x3B637AA7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
void GRAPHICS::_0xDF552973(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void*>(0xDF552973, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
void GRAPHICS::_0x1D980479(char* p0, int p1, int p2) { invoke<void*>(0x1D980479, p0, p1, p2); }
void GRAPHICS::_0x06BB5CDA(int p0) { invoke<void*>(0x06BB5CDA, p0); }
int GRAPHICS::_0x089D5921(int p0) { return invoke<int>(0x089D5921, p0); }
void GRAPHICS::_0x4E6D875B() { invoke<void*>(0x4E6D875B); }

int STATS::_0x84BDD475(int p0) { return invoke<int>(0x84BDD475, p0); }
int STATS::STAT_LOAD(int p0) { return invoke<int>(0x9E5629F4, p0); }
int STATS::STAT_SAVE(int p0, int p1, int p2) { return invoke<int>(0xE10A7CA4, p0, p1, p2); }
void STATS::_0xC62406A6(int p0) { invoke<void*>(0xC62406A6, p0); }
int STATS::STAT_LOAD_PENDING(int p0) { return invoke<int>(0x4E9AC983, p0); }
int STATS::STAT_SAVE_PENDING() { return invoke<int>(0xC3FD3822); }
int STATS::_0xA3407CA3() { return invoke<int>(0xA3407CA3); }
int STATS::STAT_DELETE_SLOT(int p0) { return invoke<int>(0x2F171B94, p0); }
int STATS::_0x7A299C13(int p0) { return invoke<int>(0x7A299C13, p0); }
int STATS::_0x0BF0F4B2(int p0) { return invoke<int>(0x0BF0F4B2, p0); }
int STATS::_0xCE6B62B5(int p0) { return invoke<int>(0xCE6B62B5, p0); }
void STATS::_0xCE7A2411(int p0) { invoke<void*>(0xCE7A2411, p0); }
int STATS::_0x22804C20(int p0) { return invoke<int>(0x22804C20, p0); }
void STATS::_0x395D18B1(int p0) { invoke<void*>(0x395D18B1, p0); }
int STATS::_0xED7000C8() { return invoke<int>(0xED7000C8); }
int STATS::_0x099FCC86() { return invoke<int>(0x099FCC86); }
int STATS::STAT_SET_INT(int statName, int value, int save) { return invoke<int>(0xC9CC1C5C, statName, value, save); }
int STATS::STAT_SET_FLOAT(int statName, float value, int save) { return invoke<int>(0x6CEA96F2, statName, value, save); }
int STATS::STAT_SET_BOOL(int statName, int value, int save) { return invoke<int>(0x55D79DFB, statName, value, save); }
int STATS::_0xC1224AA7(int p0, int p1, int p2) { return invoke<int>(0xC1224AA7, p0, p1, p2); }
int STATS::STAT_SET_DATE(int p0, int p1, int p2, int p3) { return invoke<int>(0x36BE807B, p0, p1, p2, p3); }
int STATS::STAT_SET_STRING(int statName, char* value, int save) { return invoke<int>(0xB1EF2E21, statName, value, save); }
int STATS::STAT_SET_POS(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x1192C9A3, p0, p1, p2, p3, p4); }
int STATS::STAT_SET_MASKED_INT(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x2CBAA739, p0, p1, p2, p3, p4); }
int STATS::STAT_SET_USER_ID(int p0, int p1, int p2) { return invoke<int>(0xDBE78ED7, p0, p1, p2); }
int STATS::_0xA286F015(int p0, int p1) { return invoke<int>(0xA286F015, p0, p1); }
int STATS::STAT_GET_INT(int statHash, int* valuePointer, int p2) { return invoke<int>(0x1C6FE43E, statHash, valuePointer, p2); }
int STATS::STAT_GET_FLOAT(int statHash, float* valuePointer, int p2) { return invoke<int>(0xFCBDA612, statHash, valuePointer, p2); }
int STATS::STAT_GET_BOOL(int statHash, int* valuePointer, int p2) { return invoke<int>(0x28A3DD2B, statHash, valuePointer, p2); }
int STATS::STAT_GET_DATE(int p0, int p1, int p2, int p3) { return invoke<int>(0xD762D16C, p0, p1, p2, p3); }
int STATS::STAT_GET_STRING(int p0, int p1) { return invoke<int>(0x10CE4BDE, p0, p1); }
int STATS::STAT_GET_POS(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xC846ECCE, p0, p1, p2, p3, p4); }
int STATS::STAT_GET_MASKED_INT(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xE9D9B70F, p0, p1, p2, p3, p4); }
int STATS::STAT_GET_USER_ID(int p0) { return invoke<int>(0xE2E8B6BA, p0); }
int STATS::_0x1544B29F(int p0) { return invoke<int>(0x1544B29F, p0); }
int STATS::_0x3507D253(int p0, int p1) { return invoke<int>(0x3507D253, p0, p1); }
void STATS::STAT_INCREMENT(char* statName, int Value) { invoke<void*>(0xDFC5F71E, statName, Value); }
int STATS::_0x46F21343() { return invoke<int>(0x46F21343); }
int STATS::_0x02F283CE() { return invoke<int>(0x02F283CE); }
int STATS::_0xC4110917(int p0, int p1, int p2) { return invoke<int>(0xC4110917, p0, p1, p2); }
void STATS::_0x343B27E2(int p0) { invoke<void*>(0x343B27E2, p0); }
void STATS::_0xE3247582(int p0) { invoke<void*>(0xE3247582, p0); }
int STATS::_0xFD66A429(int p0) { return invoke<int>(0xFD66A429, p0); }
int STATS::_0x9B431236(int p0) { return invoke<int>(0x9B431236, p0); }
int STATS::_0x347B4436(int p0) { return invoke<int>(0x347B4436, p0); }
int STATS::_0x2C1D6C31(int p0) { return invoke<int>(0x2C1D6C31, p0); }
void STATS::_0x24DD4929(int p0, int p1) { invoke<void*>(0x24DD4929, p0, p1); }
int STATS::_0xDFC25D66(int p0) { return invoke<int>(0xDFC25D66, p0); }
int STATS::_0xCA160BCC(int p0) { return invoke<int>(0xCA160BCC, p0); }
int STATS::_0xB5BF87B2(int p0, int p1, int p2, int p3) { return invoke<int>(0xB5BF87B2, p0, p1, p2, p3); }
int STATS::_0x1F938864(int p0, int p1, int p2, int p3) { return invoke<int>(0x1F938864, p0, p1, p2, p3); }
int STATS::_0x3F8E893B(int p0, int p1, int p2, int p3) { return invoke<int>(0x3F8E893B, p0, p1, p2, p3); }
int STATS::_0xFB93C5A2(int p0, int p1, int p2, int p3) { return invoke<int>(0xFB93C5A2, p0, p1, p2, p3); }
int STATS::STAT_GET_BOOL_MASKED(int p0, int p1, int p2) { return invoke<int>(0x6ACE1B7D, p0, p1, p2); }
int STATS::STAT_SET_BOOL_MASKED(int p0, int p1, int p2, int p3) { return invoke<int>(0x7842C4D6, p0, p1, p2, p3); }
void STATS::_0x61ECC465(int p0, int p1) { invoke<void*>(0x61ECC465, p0, p1); }
void STATS::PLAYSTATS_NPC_INVITE(int p0) { invoke<void*>(0x598C06F3, p0); }
void STATS::PLAYSTATS_AWARD_XP(int p0, int p1, int p2) { invoke<void*>(0x8770017B, p0, p1, p2); }
void STATS::PLAYSTATS_RANK_UP(int p0) { invoke<void*>(0x56AFB9F5, p0); }
void STATS::_0x896CDF8D() { invoke<void*>(0x896CDF8D); }
void STATS::_0x1A66945F(int p0, int p1) { invoke<void*>(0x1A66945F, p0, p1); }
void STATS::_0xC960E161(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xC960E161, p0, p1, p2, p3, p4); }
void STATS::PLAYSTATS_MISSION_STARTED(int p0, int p1, int p2, int p3) { invoke<void*>(0x3AAB699C, p0, p1, p2, p3); }
void STATS::PLAYSTATS_MISSION_OVER(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x5B90B5FF, p0, p1, p2, p3, p4, p5); }
void STATS::PLAYSTATS_MISSION_CHECKPOINT(int p0, int p1, int p2, int p3) { invoke<void*>(0xCDC52280, p0, p1, p2, p3); }
void STATS::_0xAC2C7C63(int p0, int p1, int p2, int p3) { invoke<void*>(0xAC2C7C63, p0, p1, p2, p3); }
void STATS::_0x413539BC(int p0, int p1, int p2, int p3) { invoke<void*>(0x413539BC, p0, p1, p2, p3); }
void STATS::PLAYSTATS_RACE_CHECKPOINT(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x580D5508, p0, p1, p2, p3, p4); }
int STATS::_0x489E27E7(int p0, int p1) { return invoke<int>(0x489E27E7, p0, p1); }
void STATS::PLAYSTATS_MATCH_STARTED(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x2BDE85C1, p0, p1, p2, p3, p4, p5, p6); }
void STATS::PLAYSTATS_SHOP_ITEM(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xA4746384, p0, p1, p2, p3, p4); }
void STATS::_0x6602CED6(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x6602CED6, p0, p1, p2, p3, p4, p5); }
void STATS::_0x759E0EC9(int p0, int p1, int p2, int p3) { invoke<void*>(0x759E0EC9, p0, p1, p2, p3); }
void STATS::_0x62073DF7(int p0, int p1, int p2, int p3) { invoke<void*>(0x62073DF7, p0, p1, p2, p3); }
void STATS::_0x30558CFD(int p0, int p1, int p2) { invoke<void*>(0x30558CFD, p0, p1, p2); }
void STATS::_0x06CE3692(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0x06CE3692, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void STATS::_0x8D5C7B37(int p0) { invoke<void*>(0x8D5C7B37, p0); }
void STATS::_0x37D152BB(int p0, int p1) { invoke<void*>(0x37D152BB, p0, p1); }
void STATS::PLAYSTATS_FRIEND_ACTIVITY(int p0, int p1) { invoke<void*>(0xD1FA1BDB, p0, p1); }
void STATS::PLAYSTATS_ODDJOB_DONE(int p0, int p1, int p2) { invoke<void*>(0xFE14A8EA, p0, p1, p2); }
void STATS::PLAYSTATS_PROP_CHANGE(int p0, int p1, int p2, int p3) { invoke<void*>(0x25740A1D, p0, p1, p2, p3); }
void STATS::PLAYSTATS_CLOTH_CHANGE(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x3AFF9E58, p0, p1, p2, p3, p4); }
void STATS::_0x79716890(int p0, int p1, int p2) { invoke<void*>(0x79716890, p0, p1, p2); }
void STATS::PLAYSTATS_CHEAT_APPLIED(int p0) { invoke<void*>(0x345166F3, p0); }
void STATS::_0x04181752(int p0, int p1, int p2, int p3) { invoke<void*>(0x04181752, p0, p1, p2, p3); }
void STATS::_0x31002201(int p0, int p1, int p2, int p3) { invoke<void*>(0x31002201, p0, p1, p2, p3); }
void STATS::_0xDDD1F1F3(int p0, int p1, int p2, int p3) { invoke<void*>(0xDDD1F1F3, p0, p1, p2, p3); }
void STATS::_0x66FEB701(int p0, int p1) { invoke<void*>(0x66FEB701, p0, p1); }
void STATS::_0x9E2B9522(int p0) { invoke<void*>(0x9E2B9522, p0); }
int STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(int p0, int p1) { return invoke<int>(0x0A56EE34, p0, p1); }
int STATS::LEADERBOARDS_GET_COLUMN_ID(int p0, int p1, int p2) { return invoke<int>(0x3821A334, p0, p1, p2); }
int STATS::LEADERBOARDS_GET_COLUMN_TYPE(int p0, int p1, int p2) { return invoke<int>(0x6F2820F4, p0, p1, p2); }
int STATS::LEADERBOARDS_READ_CLEAR_ALL() { return invoke<int>(0x233E058A); }
int STATS::LEADERBOARDS_READ_CLEAR(int p0, int p1, int p2) { return invoke<int>(0x7090012F, p0, p1, p2); }
int STATS::LEADERBOARDS_READ_PENDING(int p0, int p1, int p2) { return invoke<int>(0xEEB8BF5C, p0, p1, p2); }
int STATS::_0x1789437B() { return invoke<int>(0x1789437B); }
int STATS::LEADERBOARDS_READ_SUCCESSFUL(int p0, int p1, int p2) { return invoke<int>(0x3AC5B2F1, p0, p1, p2); }
int STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xBD91B136, p0, p1, p2, p3, p4, p5); }
int STATS::LEADERBOARDS2_READ_BY_HANDLE(int p0, int p1) { return invoke<int>(0x6B553408, p0, p1); }
int STATS::LEADERBOARDS2_READ_BY_ROW(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xCA931F34, p0, p1, p2, p3, p4, p5, p6); }
int STATS::LEADERBOARDS2_READ_BY_RANK(int p0, int p1, int p2) { return invoke<int>(0x1B03F59F, p0, p1, p2); }
int STATS::LEADERBOARDS2_READ_BY_RADIUS(int p0, int p1, int p2) { return invoke<int>(0xC5B7E685, p0, p1, p2); }
int STATS::LEADERBOARDS2_READ_BY_SCORE_INT(int p0, int p1, int p2) { return invoke<int>(0xAC020C18, p0, p1, p2); }
int STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(int p0, int p1, int p2) { return invoke<int>(0xC678B29F, p0, p1, p2); }
int STATS::_0x9BEC3401(int p0, int p1, int p2) { return invoke<int>(0x9BEC3401, p0, p1, p2); }
int STATS::_0xC977D6E2(int p0) { return invoke<int>(0xC977D6E2, p0); }
void STATS::_0xF2DB6A82() { invoke<void*>(0xF2DB6A82); }
int STATS::_0x766A74FE(int p0, int p1) { return invoke<int>(0x766A74FE, p0, p1); }
int STATS::_0x6B90E730(int p0, int p1) { return invoke<int>(0x6B90E730, p0, p1); }
int STATS::_0x509A286F(int p0, int p1) { return invoke<int>(0x509A286F, p0, p1); }
int STATS::LEADERBOARDS2_WRITE_DATA(int p0) { return invoke<int>(0x5F9DF634, p0); }
void STATS::_0x7524E27B(int p0, int p1, int p2) { invoke<void*>(0x7524E27B, p0, p1, p2); }
void STATS::_0x1C5CCC3A(int p0, int p1, int p2) { invoke<void*>(0x1C5CCC3A, p0, p1, p2); }
int STATS::LEADERBOARDS_CACHE_DATA_ROW(int p0) { return invoke<int>(0x44F7D82B, p0); }
void STATS::LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<void*>(0x87F498C1); }
void STATS::_0x88AE9667(int p0) { invoke<void*>(0x88AE9667, p0); }
int STATS::LEADERBOARDS_GET_CACHE_EXISTS(int p0) { return invoke<int>(0xFC8A71F3, p0); }
int STATS::LEADERBOARDS_GET_CACHE_TIME(int p0) { return invoke<int>(0xEDF02302, p0); }
int STATS::_0xCE7CB520(int p0) { return invoke<int>(0xCE7CB520, p0); }
int STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(int p0, int p1, int p2) { return invoke<int>(0xA11289EC, p0, p1, p2); }
void STATS::_0x4AC39C6C(int p0, int p1, int p2) { invoke<void*>(0x4AC39C6C, p0, p1, p2); }
void STATS::_0x3E69E7C3(int p0, int p1, int p2) { invoke<void*>(0x3E69E7C3, p0, p1, p2); }
void STATS::_0x2FFD2FA5(int p0, int p1, int p2, int p3) { invoke<void*>(0x2FFD2FA5, p0, p1, p2, p3); }
int STATS::_0x23D70C39() { return invoke<int>(0x23D70C39); }
void STATS::_0x0AD43306() { invoke<void*>(0x0AD43306); }
void STATS::_0xC7DE5C30() { invoke<void*>(0xC7DE5C30); }
void STATS::_0xA3DAC790(int p0) { invoke<void*>(0xA3DAC790, p0); }
void STATS::_0x726FAE66(int p0) { invoke<void*>(0x726FAE66, p0); }
void STATS::_0xF03895A4(int p0) { invoke<void*>(0xF03895A4, p0); }
void STATS::_0x4C39CF10(int p0, int p1) { invoke<void*>(0x4C39CF10, p0, p1); }
void STATS::_0x2180AE13(int p0, int p1) { invoke<void*>(0x2180AE13, p0, p1); }
void STATS::_0xEE292B91(int p0, int p1) { invoke<void*>(0xEE292B91, p0, p1); }
void STATS::_0xA063CABD() { invoke<void*>(0xA063CABD); }
int STATS::_0x62C19A3D(int p0, int p1) { return invoke<int>(0x62C19A3D, p0, p1); }
void STATS::_0x3B4EF322() { invoke<void*>(0x3B4EF322); }
int STATS::_0x54E775E0() { return invoke<int>(0x54E775E0); }
int STATS::_0xE3F0D62D(int p0) { return invoke<int>(0xE3F0D62D, p0); }

void BRAIN::ADD_SCRIPT_TO_RANDOM_PED(int p0, int p1, int p2, int p3) { invoke<void*>(0xECC76C3D, p0, p1, p2, p3); }
void BRAIN::REGISTER_OBJECT_SCRIPT_BRAIN(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xB6BCC608, p0, p1, p2, p3, p4, p5); }
int BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(int p0) { return invoke<int>(0xBA4CAA56, p0); }
void BRAIN::REGISTER_WORLD_POINT_SCRIPT_BRAIN(int p0, int p1, int p2) { invoke<void*>(0x725D91F7, p0, p1, p2); }
int BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<int>(0x2CF305A0); }
void BRAIN::ENABLE_SCRIPT_BRAIN_SET(int p0) { invoke<void*>(0x2765919F, p0); }
void BRAIN::DISABLE_SCRIPT_BRAIN_SET(int p0) { invoke<void*>(0xFBD13FAD, p0); }
void BRAIN::_0x19B27825() { invoke<void*>(0x19B27825); }
void BRAIN::_0xF3A3AB08() { invoke<void*>(0xF3A3AB08); }
void BRAIN::_0x949FE53E(int p0) { invoke<void*>(0x949FE53E, p0); }
void BRAIN::_0x29CE8BAA(int p0) { invoke<void*>(0x29CE8BAA, p0); }

void MOBILE::CREATE_MOBILE_PHONE(int p0) { invoke<void*>(0x5BBC5E23, p0); }
void MOBILE::DESTROY_MOBILE_PHONE() { invoke<void*>(0x1A65037B); }
void MOBILE::SET_MOBILE_PHONE_SCALE(int p0) { invoke<void*>(0x09BCF1BE, p0); }
void MOBILE::SET_MOBILE_PHONE_ROTATION(int p0, int p1, int p2, int p3) { invoke<void*>(0x209C28CF, p0, p1, p2, p3); }
void MOBILE::GET_MOBILE_PHONE_ROTATION(int p0, int p1) { invoke<void*>(0x17A29F23, p0, p1); }
void MOBILE::SET_MOBILE_PHONE_POSITION(int p0, int p1, int p2) { invoke<void*>(0x841800B3, p0, p1, p2); }
void MOBILE::GET_MOBILE_PHONE_POSITION(int p0) { invoke<void*>(0xB2E1E1A0, p0); }
void MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(int p0) { invoke<void*>(0x29828690, p0); }
int MOBILE::CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<int>(0x5F978584); }
void MOBILE::CELL_CAM_ACTIVATE(int p0, int p1) { invoke<void*>(0x234C1AE9, p0, p1); }
void MOBILE::_0x4479B304(int p0) { invoke<void*>(0x4479B304, p0); }
void MOBILE::_0xC273BB4D(int p0) { invoke<void*>(0xC273BB4D, p0); }
void MOBILE::_0x66DCD9D2(int p0) { invoke<void*>(0x66DCD9D2, p0); }
int MOBILE::CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(int p0) { return invoke<int>(0xBEA88097, p0); }
void MOBILE::GET_MOBILE_PHONE_RENDER_ID(int p0) { invoke<void*>(0x88E4FECE, p0); }

int APP::APP_DATA_VALID() { return invoke<int>(0x72BDE002); }
int APP::APP_GET_INT(int p0) { return invoke<int>(0x2942AAD2, p0); }
int APP::APP_GET_FLOAT(int p0) { return invoke<int>(0xD87F3A1C, p0); }
int APP::APP_GET_STRING(int p0) { return invoke<int>(0x849CEB80, p0); }
void APP::APP_SET_INT(int p0, int p1) { invoke<void*>(0x1B509C32, p0, p1); }
void APP::APP_SET_FLOAT(int p0, int p1) { invoke<void*>(0xF3076135, p0, p1); }
void APP::APP_SET_STRING(int p0, int p1) { invoke<void*>(0x23DF19A8, p0, p1); }
void APP::APP_SET_APP(int p0) { invoke<void*>(0x8BAC4146, p0); }
void APP::APP_SET_BLOCK(int p0) { invoke<void*>(0xC2D54DD9, p0); }
void APP::APP_CLEAR_BLOCK() { invoke<void*>(0xDAB86A18); }
void APP::APP_CLOSE_APP() { invoke<void*>(0x03767C7A); }
void APP::APP_CLOSE_BLOCK() { invoke<void*>(0xED97B202); }
int APP::_0xD368BA15() { return invoke<int>(0xD368BA15); }
int APP::APP_HAS_SYNCED_DATA(int p0) { return invoke<int>(0x1DE2A63D, p0); }
void APP::APP_SAVE_DATA() { invoke<void*>(0x84A3918D); }
int APP::_0x784D550B() { return invoke<int>(0x784D550B); }
int APP::APP_DELETE_APP_DATA(int p0) { return invoke<int>(0x2A2FBD1C, p0); }

void TIME::SET_CLOCK_TIME(int p0, int p1, int p2) { invoke<void*>(0x26F6AF14, p0, p1, p2); }
void TIME::PAUSE_CLOCK(int p0) { invoke<void*>(0xB02D6124, p0); }
void TIME::_0x57B8DA7C(int p0, int p1, int p2) { invoke<void*>(0x57B8DA7C, p0, p1, p2); }
void TIME::ADD_TO_CLOCK_TIME(int p0, int p1, int p2) { invoke<void*>(0xCC40D20D, p0, p1, p2); }
int TIME::GET_CLOCK_HOURS() { return invoke<int>(0x7EF8316F); }
int TIME::GET_CLOCK_MINUTES() { return invoke<int>(0x94AAC486); }
int TIME::GET_CLOCK_SECONDS() { return invoke<int>(0x099C927E); }
void TIME::SET_CLOCK_DATE(int p0, int p1, int p2) { invoke<void*>(0x96891C94, p0, p1, p2); }
int TIME::GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0x84E4A289); }
int TIME::GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0xC7A5ACB7); }
int TIME::GET_CLOCK_MONTH() { return invoke<int>(0x3C48A3D5); }
int TIME::GET_CLOCK_YEAR() { return invoke<int>(0xB8BECF15); }
int TIME::_0x3B74095C() { return invoke<int>(0x3B74095C); }
void TIME::GET_POSIX_TIME(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xE15A5281, p0, p1, p2, p3, p4, p5); }
void TIME::GET_LOCAL_TIME(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x124BCFA2, p0, p1, p2, p3, p4, p5); }


void PATHFIND::SET_ROADS_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void*>(0xEBC7B918, p0, p1, p2, p3, p4, p5, p6, p7); }
void PATHFIND::SET_ROADS_IN_ANGLED_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0xBD088F4B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void PATHFIND::SET_PED_PATHS_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x2148EA84, p0, p1, p2, p3, p4, p5, p6); }
int PATHFIND::GET_SAFE_COORD_FOR_PED(float x, float y, float z, int p3, int* outVector, int p5) { return invoke<int>(0xB370270A, x, y, z, p3, outVector, p5); }
int PATHFIND::GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, float* nodeX, int p4, float p5, float p6) { return invoke<int>(0x6F5F1E6C, x, y, z, nodeX, p4, p5, p6); }
int PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x04B5F15B, p0, p1, p2, p3, p4, p5); }
int PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x8BD5759B, p0, p1, p2, p3, p4, p5, p6, p7); }
int PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0xF125BFCC, p0, p1, p2, p3, p4, p5, p6, p7); }
int PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0x3F358BEA, p0, p1, p2, p3, p4, p5, p6); }
int PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<int>(0x7349C856, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
int PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0xC1AEB88D, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { return invoke<int>(0x928A4DEC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
int PATHFIND::GET_VEHICLE_NODE_PROPERTIES(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xCC90110B, p0, p1, p2, p3, p4); }
int PATHFIND::IS_VEHICLE_NODE_ID_VALID(int p0) { return invoke<int>(0x57DFB1EF, p0); }
void PATHFIND::GET_VEHICLE_NODE_POSITION(int p0, int p1) { invoke<void*>(0xE38E252D, p0, p1); }
int PATHFIND::_0xEE4B1219(int p0) { return invoke<int>(0xEE4B1219, p0); }
int PATHFIND::_0x56737A3C(int p0) { return invoke<int>(0x56737A3C, p0); }
int PATHFIND::GET_CLOSEST_ROAD(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { return invoke<int>(0x567B0E11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
int PATHFIND::LOAD_ALL_PATH_NODES(int p0) { return invoke<int>(0xC66E28C3, p0); }
void PATHFIND::_0xD6A3B458(int p0) { invoke<void*>(0xD6A3B458, p0); }
int PATHFIND::_0x86E80A17(int p0, int p1, int p2, int p3) { return invoke<int>(0x86E80A17, p0, p1, p2, p3); }
int PATHFIND::_0x2CDA5012(int p0, int p1, int p2, int p3) { return invoke<int>(0x2CDA5012, p0, p1, p2, p3); }
void PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x86AC4A85, p0, p1, p2, p3, p4, p5); }
void PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x9DB5D209, p0, p1, p2, p3, p4, p5, p6); }
void PATHFIND::_0x3C5085E4(int p0) { invoke<void*>(0x3C5085E4, p0); }
void PATHFIND::_0xD0F51299(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0xD0F51299, p0, p1, p2, p3, p4, p5, p6); }
void PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x3F1ABDA4, p0, p1, p2, p3, p4, p5); }
int PATHFIND::GET_RANDOM_VEHICLE_NODE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0xAD1476EA, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void PATHFIND::GET_STREET_NAME_AT_COORD(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xDEBEEFCF, p0, p1, p2, p3, p4); }
int PATHFIND::GENERATE_DIRECTIONS_TO_COORD(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xED35C094, p0, p1, p2, p3, p4, p5, p6); }
void PATHFIND::SET_IGNORE_NO_GPS_FLAG(int p0) { invoke<void*>(0xB72CF194, p0); }
void PATHFIND::_0x90DF7A4C(int p0) { invoke<void*>(0x90DF7A4C, p0); }
void PATHFIND::SET_GPS_DISABLED_ZONE(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0x720B8073, p0, p1, p2, p3, p4, p5); }
int PATHFIND::_0x4B770634() { return invoke<int>(0x4B770634); }
int PATHFIND::_0x286F82CC() { return invoke<int>(0x286F82CC); }
int PATHFIND::_0xF6422F9A(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xF6422F9A, p0, p1, p2, p3, p4); }
int PATHFIND::IS_POINT_ON_ROAD(int p0, int p1, int p2, int p3) { return invoke<int>(0xCF198055, p0, p1, p2, p3); }
void PATHFIND::ADD_NAVMESH_REQUIRED_REGION(int p0, int p1, int p2) { invoke<void*>(0x12B086EA, p0, p1, p2); }
void PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<void*>(0x637BB680); }
void PATHFIND::DISABLE_NAVMESH_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x6E37F132, p0, p1, p2, p3, p4, p5, p6); }
int PATHFIND::ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<int>(0x34C4E789); }
int PATHFIND::IS_NAVMESH_LOADED_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x4C2BA99E, p0, p1, p2, p3, p4, p5); }
int PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x2952BA56, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void PATHFIND::UPDATE_NAVMESH_BLOCKING_OBJECT(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0x4E9776D0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(int p0) { invoke<void*>(0x098602B0, p0); }
int PATHFIND::_0x4B67D7EE(int p0) { return invoke<int>(0x4B67D7EE, p0); }
int PATHFIND::_0x3FE8C5A0(int p0, int p1) { return invoke<int>(0x3FE8C5A0, p0, p1); }
int PATHFIND::_0x3ED21C90(int p0, int p1, int p2, int p3) { return invoke<int>(0x3ED21C90, p0, p1, p2, p3); }
int PATHFIND::_0xA07C5B7D(int p0, int p1) { return invoke<int>(0xA07C5B7D, p0, p1); }
int PATHFIND::_0x76751DD4(int p0, int p1, int p2, int p3) { return invoke<int>(0x76751DD4, p0, p1, p2, p3); }
int PATHFIND::CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xB114489B, p0, p1, p2, p3, p4, p5); }

int CONTROLS::IS_CONTROL_ENABLED(int Index, int Control) { return invoke<int>(0x9174AF84, Index, Control); }
int CONTROLS::IS_CONTROL_PRESSED(int Index, int Control) { return invoke<int>(0x517A4384, Index, Control); }
int CONTROLS::IS_CONTROL_RELEASED(int Index, int Control) { return invoke<int>(0x1F91A06E, Index, Control); }
int CONTROLS::IS_CONTROL_JUST_PRESSED(int Index, int Control) { return invoke<int>(0x4487F579, Index, Control); }
int CONTROLS::IS_CONTROL_JUST_RELEASED(int Index, int Control) { return invoke<int>(0x2314444B, Index, Control); }
int CONTROLS::GET_CONTROL_VALUE(int p0, int p1) { return invoke<int>(0xC526F3C6, p0, p1); }
int CONTROLS::GET_CONTROL_NORMAL(int p0, int p1) { return invoke<int>(0x5DE226A5, p0, p1); }
int CONTROLS::_0xC49343BB(int p0, int p1) { return invoke<int>(0xC49343BB, p0, p1); }
int CONTROLS::IS_DISABLED_CONTROL_PRESSED(int Index, int Control) { return invoke<int>(0x32A93544, Index, Control); }
int CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(int Index, int Control) { return invoke<int>(0xEE6ABD32, Index, Control); }
int CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(int Index, int Control) { return invoke<int>(0xD6A679E1, Index, Control); }
int CONTROLS::GET_DISABLED_CONTROL_NORMAL(int p0, int p1) { return invoke<int>(0x66FF4FAA, p0, p1); }
int CONTROLS::_0xF2A65A4C(int p0, int p1) { return invoke<int>(0xF2A65A4C, p0, p1); }
int CONTROLS::_0x0E8EF929(int p0) { return invoke<int>(0x0E8EF929, p0); }
int CONTROLS::_0x3551727A(int p0, int p1, int p2) { return invoke<int>(0x3551727A, p0, p1, p2); }
int CONTROLS::_0x3EE71F6A(int p0, int p1, int p2) { return invoke<int>(0x3EE71F6A, p0, p1, p2); }
void CONTROLS::SET_PAD_SHAKE(int p0, int p1, int p2) { invoke<void*>(0x5D38BD2F, p0, p1, p2); }
void CONTROLS::STOP_PAD_SHAKE(int p0) { invoke<void*>(0x8F75657E, p0); }
void CONTROLS::_0x7D65EB6E(int p0, int p1) { invoke<void*>(0x7D65EB6E, p0, p1); }
void CONTROLS::SET_CONTROL_SHAKE(int p0, int p1, int p2) { invoke<void*>(0xF63D817A, p0, p1, p2); }
int CONTROLS::IS_LOOK_INVERTED() { return invoke<int>(0x313434B2); }
int CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0x81802053); }
void CONTROLS::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(int p0) { invoke<void*>(0xA86BD91F, p0); }
void CONTROLS::SET_INPUT_EXCLUSIVE(int Index, int Control) { invoke<void*>(0x4E8E29E6, Index, Control); }
void CONTROLS::DISABLE_CONTROL_ACTION(int Index, int Control) { invoke<void*>(0x3800C0DC, Index, Control); }
void CONTROLS::ENABLE_CONTROL_ACTION(int Index, int Control) { invoke<void*>(0xD2753551, Index, Control); }
void CONTROLS::DISABLE_ALL_CONTROL_ACTIONS(int Index) { invoke<void*>(0x16753CF4, Index); }
void CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(int Index) { invoke<void*>(0xFC2F119F, Index); }
int CONTROLS::_0xD2C80B2E(char* p0) { return invoke<int>(0xD2C80B2E, p0); }
int CONTROLS::_0xBBFC9050(int p0) { return invoke<int>(0xBBFC9050, p0); }
void CONTROLS::_0x42140FF9() { invoke<void*>(0x42140FF9); }
void CONTROLS::_0x2CEDE6C5(int p0) { invoke<void*>(0x2CEDE6C5, p0); }

void DATAFILE::_0x621388FF(int p0) { invoke<void*>(0x621388FF, p0); }
int DATAFILE::_0xB41064A4(int p0) { return invoke<int>(0xB41064A4, p0); }
int DATAFILE::_0x9DB63CFF(int p0) { return invoke<int>(0x9DB63CFF, p0); }
int DATAFILE::_0xF09157B0(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xF09157B0, p0, p1, p2, p3, p4, p5, p6); }
int DATAFILE::_0xD96860FC(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xD96860FC, p0, p1, p2, p3, p4); }
int DATAFILE::_0x459F2683(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0x459F2683, p0, p1, p2, p3, p4, p5, p6); }
int DATAFILE::_0xDBB83E2B(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xDBB83E2B, p0, p1, p2, p3, p4); }
int DATAFILE::_0xBB6321BD(int p0, int p1, int p2) { return invoke<int>(0xBB6321BD, p0, p1, p2); }
int DATAFILE::_0xE8D56DA2(int p0) { return invoke<int>(0xE8D56DA2, p0); }
int DATAFILE::_0xCB6A351E(int p0, int p1) { return invoke<int>(0xCB6A351E, p0, p1); }
int DATAFILE::_0xA4D1B30E(int p0) { return invoke<int>(0xA4D1B30E, p0); }
int DATAFILE::_0xB8515B2F(int p0) { return invoke<int>(0xB8515B2F, p0); }
int DATAFILE::_0x660C468E(int p0) { return invoke<int>(0x660C468E, p0); }
void DATAFILE::DATAFILE_CREATE() { invoke<void*>(0x95F8A221); }
void DATAFILE::DATAFILE_DELETE() { invoke<void*>(0xDEF31B0A); }
void DATAFILE::_0x4E03F632() { invoke<void*>(0x4E03F632); }
void DATAFILE::_0xF11F956F() { invoke<void*>(0xF11F956F); }
int DATAFILE::PRELOAD_FIND() { return invoke<int>(0x86DDF9C2); }
int DATAFILE::_0x768CBB35(int p0) { return invoke<int>(0x768CBB35, p0); }
int DATAFILE::_0x0B4087F7(int p0) { return invoke<int>(0x0B4087F7, p0); }
int DATAFILE::_0x5DCD0796() { return invoke<int>(0x5DCD0796); }
void DATAFILE::_0x9B29D99B(int p0, int p1, int p2) { invoke<void*>(0x9B29D99B, p0, p1, p2); }
void DATAFILE::_0xEFCF554A(int p0, int p1, int p2) { invoke<void*>(0xEFCF554A, p0, p1, p2); }
void DATAFILE::_0xE972CACF(int p0, int p1, int p2) { invoke<void*>(0xE972CACF, p0, p1, p2); }
void DATAFILE::_0xD437615C(int p0, int p1, int p2) { invoke<void*>(0xD437615C, p0, p1, p2); }
void DATAFILE::_0x75FC6C3C(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x75FC6C3C, p0, p1, p2, p3, p4); }
int DATAFILE::_0x96A8E05F(int p0, int p1) { return invoke<int>(0x96A8E05F, p0, p1); }
int DATAFILE::_0x03939B8D(int p0, int p1) { return invoke<int>(0x03939B8D, p0, p1); }
int DATAFILE::_0x8876C872(int p0, int p1) { return invoke<int>(0x8876C872, p0, p1); }
int DATAFILE::_0xA6C68693(int p0, int p1) { return invoke<int>(0xA6C68693, p0, p1); }
int DATAFILE::_0xA92C1AF4(int p0, int p1) { return invoke<int>(0xA92C1AF4, p0, p1); }
int DATAFILE::_0x942160EC(int p0, int p1) { return invoke<int>(0x942160EC, p0, p1); }
Vector3 DATAFILE::_0xE84A127A(int p0, int p1) { return invoke<Vector3>(0xE84A127A, p0, p1); }
int DATAFILE::_0xC9C13D8D(int p0, int p1) { return invoke<int>(0xC9C13D8D, p0, p1); }
int DATAFILE::_0x1F2F7D00(int p0, int p1) { return invoke<int>(0x1F2F7D00, p0, p1); }
int DATAFILE::_0x2678342A(int p0, int p1) { return invoke<int>(0x2678342A, p0, p1); }
void DATAFILE::_0x08174B90(int p0, int p1) { invoke<void*>(0x08174B90, p0, p1); }
void DATAFILE::_0xF29C0B36(int p0, int p1) { invoke<void*>(0xF29C0B36, p0, p1); }
void DATAFILE::_0xE4302123(int p0, int p1) { invoke<void*>(0xE4302123, p0, p1); }
void DATAFILE::_0xF3C01350(int p0, int p1) { invoke<void*>(0xF3C01350, p0, p1); }
void DATAFILE::_0x16F464B6(int p0, int p1, int p2, int p3) { invoke<void*>(0x16F464B6, p0, p1, p2, p3); }
int DATAFILE::_0xC174C71B(int p0) { return invoke<int>(0xC174C71B, p0); }
int DATAFILE::_0xA2E5F921(int p0, int p1) { return invoke<int>(0xA2E5F921, p0, p1); }
int DATAFILE::_0xBB120CFC(int p0, int p1) { return invoke<int>(0xBB120CFC, p0, p1); }
int DATAFILE::FOCUS_USE_SPLINE(int p0, int p1) { return invoke<int>(0x08AD2CC2, p0, p1); }
int DATAFILE::OVERIDE_TEXTURENAMES(int p0, int p1) { return invoke<int>(0x93F985A6, p0, p1); }
Vector3 DATAFILE::_0x80E3DA55(int p0, int p1) { return invoke<Vector3>(0x80E3DA55, p0, p1); }
int DATAFILE::_0xECE81278(int p0, int p1) { return invoke<int>(0xECE81278, p0, p1); }
int DATAFILE::_0xA8A21766(int p0) { return invoke<int>(0xA8A21766, p0); }
int DATAFILE::_0xFA2402C8(int p0, int p1) { return invoke<int>(0xFA2402C8, p0, p1); }

int FIRE::START_SCRIPT_FIRE(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xE7529357, p0, p1, p2, p3, p4); }
void FIRE::REMOVE_SCRIPT_FIRE(int p0) { invoke<void*>(0x6B21FE26, p0); }
int FIRE::START_ENTITY_FIRE(int entity) { return invoke<int>(0x8928428E, entity); }
void FIRE::STOP_ENTITY_FIRE(int entity) { invoke<void*>(0xCE8C9066, entity); }
int FIRE::IS_ENTITY_ON_FIRE(int p0) { return invoke<int>(0x8C73E64F, p0); }
int FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(int p0, int p1, int p2, int p3) { return invoke<int>(0x654D93B7, p0, p1, p2, p3); }
void FIRE::STOP_FIRE_IN_RANGE(int p0, int p1, int p2, int p3) { invoke<void*>(0x725C7205, p0, p1, p2, p3); }
int FIRE::GET_CLOSEST_FIRE_POS(int p0, int p1, int p2, int p3) { return invoke<int>(0xC4977B47, p0, p1, p2, p3); }
void FIRE::ADD_EXPLOSION(Vector3 pos, int ExplosionType, float ExplosionRadius, int isAudible, int isVisible, float CameraShake) { invoke<void*>(0x10AF5258, pos, ExplosionType, ExplosionRadius, isAudible, isVisible, CameraShake); }
void FIRE::ADD_OWNED_EXPLOSION(int Handle, Vector3 pos, int ExlosionType, float ExplosionRadius, int IsAudible, int IsVisible, float CamerShake) { invoke<void*>(0x27EE0D67, Handle, pos, ExlosionType, ExplosionRadius, IsAudible, IsVisible, CamerShake); }
void FIRE::_0xCF358946(float* XCoord, float* YCoord, float* ZCoord, int unk, int ExplsionFX, float ExlosionRadius, int isAudible, int isVisible, float unk2) { invoke<void*>(0xCF358946, XCoord, YCoord, ZCoord, unk, ExplsionFX, ExlosionRadius, isAudible, isVisible, unk2); }
int FIRE::IS_EXPLOSION_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xFB40075B, p0, p1, p2, p3, p4, p5, p6); }
int FIRE::IS_EXPLOSION_IN_SPHERE(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xD455A7F3, p0, p1, p2, p3, p4); }
int FIRE::IS_EXPLOSION_IN_ANGLED_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x0128FED9, p0, p1, p2, p3, p4, p5, p6, p7); }
int FIRE::_0xAEC0D176(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0xAEC0D176, p0, p1, p2, p3, p4, p5, p6, p7); }

void DECISIONEVENT::SET_DECISION_MAKER(int p0, int p1) { invoke<void*>(0x19CEAC9E, p0, p1); }
void DECISIONEVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(int p0, int p1) { invoke<void*>(0x07ABD94D, p0, p1); }
void DECISIONEVENT::_0x57506EA6(int p0, int p1) { invoke<void*>(0x57506EA6, p0, p1); }
void DECISIONEVENT::_0x62A3161D(int p0, int p1) { invoke<void*>(0x62A3161D, p0, p1); }
int DECISIONEVENT::ADD_SHOCKING_EVENT_AT_POSITION(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x0B30F779, p0, p1, p2, p3, p4); }
int DECISIONEVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(int p0, int p1, int p2) { return invoke<int>(0xA81B5B71, p0, p1, p2); }
int DECISIONEVENT::IS_SHOCKING_EVENT_IN_SPHERE(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x2F98823E, p0, p1, p2, p3, p4); }
int DECISIONEVENT::REMOVE_SHOCKING_EVENT(int p0) { return invoke<int>(0xF82D5A87, p0); }
void DECISIONEVENT::REMOVE_ALL_SHOCKING_EVENTS(int p0) { invoke<void*>(0x64DF6282, p0); }
void DECISIONEVENT::_0xA0CE89C8() { invoke<void*>(0xA0CE89C8); }
void DECISIONEVENT::_0x4CC674B5() { invoke<void*>(0x4CC674B5); }
void DECISIONEVENT::_0xA0FDCB82(int p0) { invoke<void*>(0xA0FDCB82, p0); }
void DECISIONEVENT::_0x80340396() { invoke<void*>(0x80340396); }

int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0xC9018181, x, y, z); }
int ZONE::_0x8EC68304(int p0) { return invoke<int>(0x8EC68304, p0); }
int ZONE::GET_ZONE_POPSCHEDULE(int p0) { return invoke<int>(0x20AB2FC9, p0); }
char* ZONE::GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<char*>(0x7875CE91, x, y, z); }
void ZONE::SET_ZONE_ENABLED(int p0, int p1) { invoke<void*>(0x04E21B03, p0, p1); }
int ZONE::GET_ZONE_SCUMMINESS(int p0) { return invoke<int>(0xB2FB5C4C, p0); }
void ZONE::_0x3F0A3680(int p0, int p1) { invoke<void*>(0x3F0A3680, p0, p1); }
void ZONE::_0x7A72A24E(int p0) { invoke<void*>(0x7A72A24E, p0); }
int ZONE::_0xB5C5C99B(int p0, int p1, int p2) { return invoke<int>(0xB5C5C99B, p0, p1, p2); }

int ROPE::ADD_ROPE(float position_x, float position_y, float position_z, float angle_x, float angle_y, float angle_z, float length, int type, float max_length, float min_length, float p10, int p11, int p12, int p13, float p14, int breakable, int p16) { return invoke<int>(0xA592EC74, position_x, position_y, position_z, angle_x, angle_y, angle_z, length, type, max_length, min_length, p10, p11, p12, p13, p14, breakable, p16); }
void ROPE::DELETE_ROPE(int rope) { invoke<void*>(0x748D72AF, rope); }
void ROPE::DELETE_CHILD_ROPE(int rope) { invoke<void*>(0xB19B4706, rope); }
int ROPE::DOES_ROPE_EXIST(int rope) { return invoke<int>(0x66E4A3AC, rope); }
void ROPE::_0x51523B8C(int p0, int p1) { invoke<void*>(0x51523B8C, p0, p1); }
void ROPE::LOAD_ROPE_DATA(int rope, char* rope_preset) { invoke<void*>(0x9E8F1644, rope, rope_preset); }
void ROPE::PIN_ROPE_VERTEX(int rople, int vertex, float x, float y, float z) { invoke<void*>(0xAE1D101B, rople, vertex, x, y, z); }
void ROPE::UNPIN_ROPE_VERTEX(int rope, int vertex) { invoke<void*>(0xB30B552F, rope, vertex); }
int ROPE::GET_ROPE_VERTEX_COUNT(int rope) { return invoke<int>(0x5131CD2C, rope); }
void ROPE::ATTACH_ENTITIES_TO_ROPE(int rope, int ent1, int ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, int p10, int p11, int p12, int p13) { invoke<void*>(0x7508668F, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); }
void ROPE::ATTACH_ROPE_TO_ENTITY(int rope, int entity, float x, float y, float z, int p5) { invoke<void*>(0xB25D9536, rope, entity, x, y, z, p5); }
void ROPE::DETACH_ROPE_FROM_ENTITY(int rope, int entity) { invoke<void*>(0x3E720BEE, rope, entity); }
void ROPE::_0xEAF291A0(int p0) { invoke<void*>(0xEAF291A0, p0); }
void ROPE::_0x80DB77A7(int p0, int p1) { invoke<void*>(0x80DB77A7, p0, p1); }
void ROPE::_0xC67D5CF6(int p0, int p1) { invoke<void*>(0xC67D5CF6, p0, p1); }
int ROPE::_0x7A18BB9C(int p0) { return invoke<int>(0x7A18BB9C, p0); }
Vector3 ROPE::GET_ROPE_LAST_VERTEX_COORD(int rope) { return invoke<Vector3>(0x91F6848B, rope); }
Vector3 ROPE::GET_ROPE_VERTEX_COORD(int rope, int vertex) { return invoke<Vector3>(0x84374452, rope, vertex); }
void ROPE::_0x5187BED3(int p0) { invoke<void*>(0x5187BED3, p0); }
void ROPE::_0x46826B53(int p0) { invoke<void*>(0x46826B53, p0); }
void ROPE::_0xFC0DB4C3(int p0) { invoke<void*>(0xFC0DB4C3, p0); }
void ROPE::_0x2EEDB18F(int p0) { invoke<void*>(0x2EEDB18F, p0); }
void ROPE::_0x43E92628(int p0) { invoke<void*>(0x43E92628, p0); }
void ROPE::ROPE_LOAD_TEXTURES() { invoke<void*>(0xBA97CE91); }
int ROPE::_0x5FDC1047() { return invoke<int>(0x5FDC1047); }
void ROPE::ROPE_UNLOAD_TEXTURES() { invoke<void*>(0x584463E0); }
int ROPE::_0x67522E25(int p0) { return invoke<int>(0x67522E25, p0); }
void ROPE::_0x106BA127(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13) { invoke<void*>(0x106BA127, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
void ROPE::_0x7C6F7668(int p0, int p1, int p2) { invoke<void*>(0x7C6F7668, p0, p1, p2); }
void ROPE::_0x686672DD(int p0, int p1) { invoke<void*>(0x686672DD, p0, p1); }
int ROPE::_0xFD309DC8(int p0) { return invoke<int>(0xFD309DC8, p0); }
void ROPE::ROPE_FORCE_LENGTH(int rope, float length) { invoke<void*>(0xABF3130F, rope, length); }
void ROPE::ROPE_RESET_LENGTH(int rope, float length) { invoke<void*>(0xC8A423A3, rope, length); }
void ROPE::_0xA2A5C9FE(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0xA2A5C9FE, p0, p1, p2, p3, p4, p5, p6); }
void ROPE::SET_DAMPING(int p0, int p1, int p2) { invoke<void*>(0xCFB37773, p0, p1, p2); }
void ROPE::ACTIVATE_PHYSICS(int rope) { invoke<void*>(0x031711B8, rope); }
void ROPE::_0x59910AB2(int p0, int p1, int p2, int p3) { invoke<void*>(0x59910AB2, p0, p1, p2, p3); }
Vector3 ROPE::_0x49A11F0D(int p0) { return invoke<Vector3>(0x49A11F0D, p0); }
void ROPE::_0xA5B55421(int p0) { invoke<void*>(0xA5B55421, p0); }
void ROPE::BREAK_ENTITY_GLASS(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) { invoke<void*>(0xD0E0402F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
void ROPE::SET_DISABLE_BREAKING(int rope, int enabled) { invoke<void*>(0xEE77C326, rope, enabled); }
void ROPE::_0x97269DC8(int p0, int p1) { invoke<void*>(0x97269DC8, p0, p1); }

int GET_WATER_HEIGHT(float x, float y, float p2, float p3) { return invoke<int>(0xD864E17C, x, y, p2, p3); }
int WATER::GET_WATER_HEIGHT_NO_WAVES(int p0, int p1, int p2, int p3) { return invoke<int>(0x262017F8, p0, p1, p2, p3); }
int WATER::_0xAA4AE00C(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { return invoke<int>(0xAA4AE00C, p0, p1, p2, p3, p4, p5, p6); }
int WATER::_0x4A962D55(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<int>(0x4A962D55, p0, p1, p2, p3, p4, p5, p6, p7); }
int WATER::_0x4C71D143(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x4C71D143, p0, p1, p2, p3, p4); }
void WATER::MODIFY_WATER(float p0, float p1, float p2, int p3) { invoke<void*>(0xC49E005A, p0, p1, p2, p3); }

int WORLDPROBE::_0xEFAF4BA6(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0xEFAF4BA6, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int WORLDPROBE::_0x8251485D(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x8251485D, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int WORLDPROBE::_0xCEEAD94B(int p0, int p1, int p2) { return invoke<int>(0xCEEAD94B, p0, p1, p2); }
int WORLDPROBE::_0x249BC876(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12) { return invoke<int>(0x249BC876, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
int WORLDPROBE::_0x13BC46C0(int p0, int p1, int p2) { return invoke<int>(0x13BC46C0, p0, p1, p2); }
int WORLDPROBE::_0x591EA833(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<int>(0x591EA833, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
int WORLDPROBE::_0x4559460A(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<int>(0x4559460A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
int WORLDPROBE::_0xF3C2875A(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xF3C2875A, p0, p1, p2, p3, p4); }
int WORLDPROBE::_0x4301E10C(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x4301E10C, p0, p1, p2, p3, p4, p5); }
void WORLDPROBE::_0xEC2AAF06(int p0) { invoke<void*>(0xEC2AAF06, p0); }

int NETWORK::NETWORK_IS_SIGNED_IN() { return invoke<int>(0xADD0B40F); }
int NETWORK::NETWORK_IS_SIGNED_ONLINE() { return invoke<int>(0x6E5BDCE2); }
int NETWORK::_0x3FB40673() { return invoke<int>(0x3FB40673); }
int NETWORK::NETWORK_IS_CLOUD_AVAILABLE() { return invoke<int>(0xC7FF5AFC); }
int NETWORK::_0x66EC713F() { return invoke<int>(0x66EC713F); }
int NETWORK::_0x358D1D77() { return invoke<int>(0x358D1D77); }
int NETWORK::NETWORK_IS_HOST() { return invoke<int>(0xE46AC10F); }
int NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<int>(0xEF63BFDF); }
int NETWORK::_0x1F88819D(int p0) { return invoke<int>(0x1F88819D, p0); }
int NETWORK::_0x2D817A5E(int p0, int p1) { return invoke<int>(0x2D817A5E, p0, p1); }
int NETWORK::_0xBB54AA3D(int p0, int p1, int p2) { return invoke<int>(0xBB54AA3D, p0, p1, p2); }
int NETWORK::_0xA79E5B05(int p0, int p1, int p2) { return invoke<int>(0xA79E5B05, p0, p1, p2); }
int NETWORK::_0xEB864288() { return invoke<int>(0xEB864288); }
int NETWORK::_0xAB07CBBE() { return invoke<int>(0xAB07CBBE); }
int NETWORK::_0x60E1FEDF() { return invoke<int>(0x60E1FEDF); }
void NETWORK::NETWORK_BAIL() { invoke<void*>(0x87D79A04); }
void NETWORK::_0x96E28FE2() { invoke<void*>(0x96E28FE2); }
int NETWORK::_0xA520B982(int p0) { return invoke<int>(0xA520B982, p0); }
int NETWORK::_0x05518C0F() { return invoke<int>(0x05518C0F); }
int NETWORK::NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<int>(0x4A23B9C9); }
int NETWORK::NETWORK_SESSION_ENTER(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x543CD2BE, p0, p1, p2, p3, p4, p5); }
int NETWORK::_0x4E53202A(int p0, int p1, int p2, int p3) { return invoke<int>(0x4E53202A, p0, p1, p2, p3); }
int NETWORK::_0xD7624E6B(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xD7624E6B, p0, p1, p2, p3, p4); }
int NETWORK::_0x3F75CC38(int p0, int p1, int p2, int p3) { return invoke<int>(0x3F75CC38, p0, p1, p2, p3); }
int NETWORK::NETWORK_SESSION_HOST(int p0, int p1, int p2) { return invoke<int>(0x6716460F, p0, p1, p2); }
int NETWORK::_0x8AC9EA19(int p0, int p1) { return invoke<int>(0x8AC9EA19, p0, p1); }
int NETWORK::NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int p1) { return invoke<int>(0x26864403, p0, p1); }
int NETWORK::_0x56E75FE4() { return invoke<int>(0x56E75FE4); }
int NETWORK::_0xA95299B9() { return invoke<int>(0xA95299B9); }
int NETWORK::_0x3D2C1916() { return invoke<int>(0x3D2C1916); }
int NETWORK::_0xDB67785D() { return invoke<int>(0xDB67785D); }
int NETWORK::NETWORK_SESSION_END(int p0, int p1) { return invoke<int>(0xBCACBEA2, p0, p1); }
void NETWORK::NETWORK_SESSION_KICK_PLAYER(int p0) { invoke<void*>(0x1E20138A, p0); }
int NETWORK::_0x8A559D26(int p0) { return invoke<int>(0x8A559D26, p0); }
void NETWORK::_0x3C3E2AB6(int p0) { invoke<void*>(0x3C3E2AB6, p0); }
void NETWORK::_0x5F29A7E0(int p0, int p1) { invoke<void*>(0x5F29A7E0, p0, p1); }
int NETWORK::_0x36EAD960(int p0) { return invoke<int>(0x36EAD960, p0); }
void NETWORK::_0x5BE529F7(int p0) { invoke<void*>(0x5BE529F7, p0); }
void NETWORK::_0x454C7B67(int p0) { invoke<void*>(0x454C7B67, p0); }
void NETWORK::_0xE5961511(int p0) { invoke<void*>(0xE5961511, p0); }
void NETWORK::_0xAE396263(int p0) { invoke<void*>(0xAE396263, p0); }
void NETWORK::_0x913FD7D6(int p0) { invoke<void*>(0x913FD7D6, p0); }
void NETWORK::_0xB3D9A67F(int p0) { invoke<void*>(0xB3D9A67F, p0); }
void NETWORK::_0x6CC062FC(int p0) { invoke<void*>(0x6CC062FC, p0); }
void NETWORK::_0x57F9BC83() { invoke<void*>(0x57F9BC83); }
void NETWORK::_0xF3768F90(int p0) { invoke<void*>(0xF3768F90, p0); }
void NETWORK::_0x0EC62629(int p0, int p1) { invoke<void*>(0x0EC62629, p0, p1); }
void NETWORK::_0x5E557307() { invoke<void*>(0x5E557307); }
void NETWORK::_0x74E8C53E(int p0, int p1, int p2) { invoke<void*>(0x74E8C53E, p0, p1, p2); }
void NETWORK::_0x959E43A3(int p0) { invoke<void*>(0x959E43A3, p0); }
int NETWORK::_0x7771AB83(int p0) { return invoke<int>(0x7771AB83, p0); }
int NETWORK::_0xA13045D4(int p0, int p1, int p2, int p3) { return invoke<int>(0xA13045D4, p0, p1, p2, p3); }
int NETWORK::NETWORK_IS_FINDING_GAMERS() { return invoke<int>(0xA6DAA79F); }
int NETWORK::_0xBEDC4503() { return invoke<int>(0xBEDC4503); }
int NETWORK::NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<int>(0xF4B80C7E); }
int NETWORK::NETWORK_GET_FOUND_GAMER(int p0, int p1) { return invoke<int>(0xA08C9141, p0, p1); }
void NETWORK::NETWORK_CLEAR_FOUND_GAMERS() { invoke<void*>(0x6AA9A154); }
int NETWORK::_0x42BD0780(int p0) { return invoke<int>(0x42BD0780, p0); }
int NETWORK::_0xBEB98840() { return invoke<int>(0xBEB98840); }
int NETWORK::_0x08029970() { return invoke<int>(0x08029970); }
int NETWORK::_0xC871E745() { return invoke<int>(0xC871E745); }
int NETWORK::_0xB5ABC4B4(int p0, int p1) { return invoke<int>(0xB5ABC4B4, p0, p1); }
void NETWORK::_0x3F7EDBBD() { invoke<void*>(0x3F7EDBBD); }
void NETWORK::NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() { invoke<void*>(0x3D6360B5); }
void NETWORK::NETWORK_SESSION_CANCEL_INVITE() { invoke<void*>(0x20317535); }
void NETWORK::_0x3FD49D3B() { invoke<void*>(0x3FD49D3B); }
int NETWORK::NETWORK_HAS_PENDING_INVITE() { return invoke<int>(0x0C207D6E); }
int NETWORK::_0xFBBAC350() { return invoke<int>(0xFBBAC350); }
int NETWORK::_0x0907A6BF() { return invoke<int>(0x0907A6BF); }
int NETWORK::_0x6A0BEA60() { return invoke<int>(0x6A0BEA60); }
void NETWORK::NETWORK_SESSION_GET_INVITER(int p0) { invoke<void*>(0xE9C6B3FD, p0); }
int NETWORK::_0x3EA9D44C() { return invoke<int>(0x3EA9D44C); }
void NETWORK::NETWORK_SUPPRESS_INVITE(int p0) { invoke<void*>(0x323DC78C, p0); }
void NETWORK::NETWORK_BLOCK_INVITES(int p0) { invoke<void*>(0xD156FD1A, p0); }
void NETWORK::_0x32B7A076() { invoke<void*>(0x32B7A076); }
void NETWORK::_0x0FCE995D(int p0) { invoke<void*>(0x0FCE995D, p0); }
void NETWORK::_0xA639DCA2(int p0) { invoke<void*>(0xA639DCA2, p0); }
int NETWORK::_0x70ED476A() { return invoke<int>(0x70ED476A); }
void NETWORK::_0x50507BED() { invoke<void*>(0x50507BED); }
void NETWORK::NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) { invoke<void*>(0xF3B1CA85, p0); }
void NETWORK::NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<void*>(0xC692F86A); }
int NETWORK::NETWORK_IS_GAME_IN_PROGRESS() { return invoke<int>(0x09B88E3E); }
int NETWORK::NETWORK_IS_SESSION_ACTIVE() { return invoke<int>(0x715CB8C4); }
int NETWORK::NETWORK_IS_IN_SESSION() { return invoke<int>(0x4BC4105E); }
int NETWORK::NETWORK_IS_SESSION_STARTED() { return invoke<int>(0x9D854A37); }
int NETWORK::NETWORK_IS_SESSION_BUSY() { return invoke<int>(0x8592152D); }
int NETWORK::NETWORK_CAN_SESSION_END() { return invoke<int>(0xE1FCCDBA); }
void NETWORK::_0x7017257D(int p0) { invoke<void*>(0x7017257D, p0); }
int NETWORK::_0x4977AC28() { return invoke<int>(0x4977AC28); }
void NETWORK::_0xE6EEF8AF(int p0) { invoke<void*>(0xE6EEF8AF, p0); }
void NETWORK::_0x6BB93227(int p0, int p1) { invoke<void*>(0x6BB93227, p0, p1); }
int NETWORK::_0xE642F2FD() { return invoke<int>(0xE642F2FD); }
void NETWORK::NETWORK_SESSION_VOICE_HOST() { invoke<void*>(0x345C2980); }
void NETWORK::NETWORK_SESSION_VOICE_LEAVE() { invoke<void*>(0xE566C7DA); }
void NETWORK::_0x9DFD89E6(int p0) { invoke<void*>(0x9DFD89E6, p0); }
void NETWORK::NETWORK_SET_KEEP_FOCUSPOINT(int p0, int p1) { invoke<void*>(0x075321B5, p0, p1); }
void NETWORK::_0x6EFC2FD0(int p0) { invoke<void*>(0x6EFC2FD0, p0); }
int NETWORK::_0x60AA4AA1() { return invoke<int>(0x60AA4AA1); }
int NETWORK::_0x132CA01E() { return invoke<int>(0x132CA01E); }
int NETWORK::NETWORK_SEND_TEXT_MESSAGE(char* Text, int* FreeMemPointer) { return invoke<int>(0xAFFEA720, Text, FreeMemPointer); }
void NETWORK::NETWORK_SET_ACTIVITY_SPECTATOR(int p0) { invoke<void*>(0xFC9AD060, p0); }
int NETWORK::NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<int>(0xAF329720); }
void NETWORK::NETWORK_SET_ACTIVITY_SPECTATOR_MAX(int p0) { invoke<void*>(0x74E0BC0A, p0); }
int NETWORK::NETWORK_GET_ACTIVITY_PLAYER_NUM(int p0) { return invoke<int>(0x31F951FD, p0); }
int NETWORK::NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(int p0) { return invoke<int>(0x58F1DF7D, p0); }
int NETWORK::NETWORK_HOST_TRANSITION(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x146764FB, p0, p1, p2, p3, p4, p5); }
int NETWORK::_0x2FF65C0B(int p0, int p1, int p2, int p3) { return invoke<int>(0x2FF65C0B, p0, p1, p2, p3); }
int NETWORK::_0x47D61C99(int p0, int p1, int p2, int p3) { return invoke<int>(0x47D61C99, p0, p1, p2, p3); }
int NETWORK::_0x5CE60A11(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x5CE60A11, p0, p1, p2, p3, p4, p5); }
int NETWORK::_0x0D7E5CF9() { return invoke<int>(0x0D7E5CF9); }
void NETWORK::_0x36A5F2DA() { invoke<void*>(0x36A5F2DA); }
int NETWORK::_0x95FFACF8() { return invoke<int>(0x95FFACF8); }
int NETWORK::_0xB97A966B() { return invoke<int>(0xB97A966B); }
void NETWORK::_0x7EF353E1(int p0) { invoke<void*>(0x7EF353E1, p0); }
void NETWORK::_0xF60986FC(int p0) { invoke<void*>(0xF60986FC, p0); }
void NETWORK::NETWORK_SET_TRANSITION_CREATOR_HANDLE(int p0) { invoke<void*>(0x1DD01FE7, p0); }
void NETWORK::NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<void*>(0x8BB336F7); }
int NETWORK::NETWORK_INVITE_GAMERS_TO_TRANSITION(int p0, int p1) { return invoke<int>(0x5332E645, p0, p1); }
void NETWORK::NETWORK_SET_GAMER_INVITED_TO_TRANSITION(int p0) { invoke<void*>(0x17F1C69D, p0); }
int NETWORK::NETWORK_LEAVE_TRANSITION() { return invoke<int>(0x3A3599B7); }
int NETWORK::NETWORK_LAUNCH_TRANSITION() { return invoke<int>(0xE3570BA2); }
void NETWORK::_0xB59D74CA() { invoke<void*>(0xB59D74CA); }
int NETWORK::NETWORK_DO_TRANSITION_TO_GAME(int p0, int p1) { return invoke<int>(0x1B2114D2, p0, p1); }
int NETWORK::NETWORK_DO_TRANSITION_TO_NEW_GAME(int p0, int p1, int p2) { return invoke<int>(0x58AFBE63, p0, p1, p2); }
int NETWORK::NETWORK_DO_TRANSITION_TO_FREEMODE(int p0, int p1, int p2, int p3) { return invoke<int>(0xC7CB8ADF, p0, p1, p2, p3); }
int NETWORK::NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xAD13375E, p0, p1, p2, p3, p4); }
int NETWORK::NETWORK_IS_TRANSITION_TO_GAME() { return invoke<int>(0x17146B2B); }
int NETWORK::NETWORK_GET_TRANSITION_MEMBERS(int p0, int p1) { return invoke<int>(0x31F19263, p0, p1); }
void NETWORK::_0xCEE79711(int p0, int p1) { invoke<void*>(0xCEE79711, p0, p1); }
void NETWORK::_0xE0C28DB5(int p0, int p1, int p2) { invoke<void*>(0xE0C28DB5, p0, p1, p2); }
int NETWORK::NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x468B0884, p0, p1, p2, p3, p4); }
int NETWORK::NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(int p0) { return invoke<int>(0x03383F57, p0); }
int NETWORK::NETWORK_IS_TRANSITION_HOST() { return invoke<int>(0x0C0900BC); }
int NETWORK::NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(int p0) { return invoke<int>(0x0E2854C4, p0); }
int NETWORK::NETWORK_GET_TRANSITION_HOST(int p0) { return invoke<int>(0x73098D40, p0); }
int NETWORK::NETWORK_IS_IN_TRANSITION() { return invoke<int>(0xC3CDB626); }
int NETWORK::NETWORK_IS_TRANSITION_STARTED() { return invoke<int>(0x7917E111); }
int NETWORK::NETWORK_IS_TRANSITION_BUSY() { return invoke<int>(0xA357A2C6); }
int NETWORK::_0x8262C70E() { return invoke<int>(0x8262C70E); }
void NETWORK::_0xC71E607B() { invoke<void*>(0xC71E607B); }
void NETWORK::_0x82D32D07() { invoke<void*>(0x82D32D07); }
int NETWORK::_0xC901AA9F() { return invoke<int>(0xC901AA9F); }
void NETWORK::_0xCCA9C022(int p0) { invoke<void*>(0xCCA9C022, p0); }
void NETWORK::_0x1E5F6AEF(int p0, int p1) { invoke<void*>(0x1E5F6AEF, p0, p1); }
void NETWORK::_0x0532DDD2(int p0) { invoke<void*>(0x0532DDD2, p0); }
int NETWORK::NETWORK_HAS_PLAYER_STARTED_TRANSITION(int p0) { return invoke<int>(0x4ABD1E59, p0); }
int NETWORK::_0xCDEBCCE7(int p0) { return invoke<int>(0xCDEBCCE7, p0); }
int NETWORK::NETWORK_JOIN_TRANSITION(int p0) { return invoke<int>(0xB054EC4B, p0); }
int NETWORK::_0x4F41DF6B(int p0) { return invoke<int>(0x4F41DF6B, p0); }
int NETWORK::NETWORK_IS_ACTIVITY_SESSION() { return invoke<int>(0x577DAA8A); }
void NETWORK::_0x18F03AFD(int p0) { invoke<void*>(0x18F03AFD, p0); }
int NETWORK::_0x8B99B72B(int p0, int p1, int p2, int p3) { return invoke<int>(0x8B99B72B, p0, p1, p2, p3); }
int NETWORK::_0x877C0E1C(int p0, int p1, int p2, int p3) { return invoke<int>(0x877C0E1C, p0, p1, p2, p3); }
int NETWORK::_0x5E832444(int p0) { return invoke<int>(0x5E832444, p0); }
int NETWORK::_0x3FDA00F3() { return invoke<int>(0x3FDA00F3); }
int NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(int p0) { return invoke<int>(0xE5DA4CED, p0); }
int NETWORK::_0x93C665FA(int p0) { return invoke<int>(0x93C665FA, p0); }
int NETWORK::_0xD50DF46C(int p0) { return invoke<int>(0xD50DF46C, p0); }
int NETWORK::_0x19EC65D9(int p0) { return invoke<int>(0x19EC65D9, p0); }
int NETWORK::NETWORK_GET_PRESENCE_INVITE_HANDLE(int p0, int p1) { return invoke<int>(0xB2451429, p0, p1); }
int NETWORK::_0xC5E0C989(int p0) { return invoke<int>(0xC5E0C989, p0); }
int NETWORK::_0xA4302183(int p0) { return invoke<int>(0xA4302183, p0); }
int NETWORK::_0x51B2D848(int p0) { return invoke<int>(0x51B2D848, p0); }
int NETWORK::_0x4677C656(int p0) { return invoke<int>(0x4677C656, p0); }
int NETWORK::_0xF5E3401C(int p0) { return invoke<int>(0xF5E3401C, p0); }
int NETWORK::_0x7D593B4C(int p0) { return invoke<int>(0x7D593B4C, p0); }
int NETWORK::_0xE96CFE7D() { return invoke<int>(0xE96CFE7D); }
int NETWORK::_0xAB969F00() { return invoke<int>(0xAB969F00); }
int NETWORK::_0x3242F952() { return invoke<int>(0x3242F952); }
void NETWORK::_0x9773F36A() { invoke<void*>(0x9773F36A); }
void NETWORK::NETWORK_REMOVE_TRANSITION_INVITE(int p0) { invoke<void*>(0xFDE84CB7, p0); }
void NETWORK::_0xF7134E73() { invoke<void*>(0xF7134E73); }
void NETWORK::_0xC47352E7() { invoke<void*>(0xC47352E7); }
int NETWORK::NETWORK_INVITE_GAMERS(int p0, int p1, int p2, int p3) { return invoke<int>(0x52FB8074, p0, p1, p2, p3); }
int NETWORK::_0xEC651BC0(int p0) { return invoke<int>(0xEC651BC0, p0); }
int NETWORK::NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(int p0) { return invoke<int>(0x72BA00CE, p0); }
int NETWORK::NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(int p0) { return invoke<int>(0xFD95899E, p0); }
void NETWORK::_0x0808D4CC(int p0, int p1) { invoke<void*>(0x0808D4CC, p0, p1); }
void NETWORK::_0x11378777(int p0) { invoke<void*>(0x11378777, p0); }
int NETWORK::FILLOUT_PM_PLAYER_LIST(int p0, int p1, int p2) { return invoke<int>(0xCE40F423, p0, p1, p2); }
int NETWORK::FILLOUT_PM_PLAYER_LIST_WITH_NAMES(int p0, int p1, int p2, int p3) { return invoke<int>(0xB8DF604E, p0, p1, p2, p3); }
int NETWORK::USING_NETWORK_WEAPONTYPE(int p0) { return invoke<int>(0xF49C1533, p0); }
int NETWORK::_0xA812B6CB() { return invoke<int>(0xA812B6CB); }
int NETWORK::_0xF30E5814(int p0, int p1) { return invoke<int>(0xF30E5814, p0, p1); }
int NETWORK::_0xC6609191() { return invoke<int>(0xC6609191); }
int NETWORK::_0x51367B34(int p0) { return invoke<int>(0x51367B34, p0); }
int NETWORK::NETWORK_IS_IN_PARTY() { return invoke<int>(0xF9D7D67D); }
int NETWORK::NETWORK_IS_PARTY_MEMBER(int p0) { return invoke<int>(0x1D0C929D, p0); }
int NETWORK::_0x9156EFC0() { return invoke<int>(0x9156EFC0); }
int NETWORK::_0x8FA6EE0E() { return invoke<int>(0x8FA6EE0E); }
void NETWORK::_0x7F70C15A() { invoke<void*>(0x7F70C15A); }
void NETWORK::_0x8179C48A(int p0) { invoke<void*>(0x8179C48A, p0); }
void NETWORK::_0x41702C8A(int p0) { invoke<void*>(0x41702C8A, p0); }
int NETWORK::_0x208DD848() { return invoke<int>(0x208DD848); }
int NETWORK::_0xF9B6426D(int p0, int p1) { return invoke<int>(0xF9B6426D, p0, p1); }
int NETWORK::NETWORK_PLAYER_IS_CHEATER() { return invoke<int>(0xA51DC214); }
int NETWORK::_0x1720ABA6() { return invoke<int>(0x1720ABA6); }
int NETWORK::_0xA19708E3() { return invoke<int>(0xA19708E3); }
int NETWORK::_0xF9A51B92(int p0, int p1, int p2) { return invoke<int>(0xF9A51B92, p0, p1, p2); }
int NETWORK::_0x4C2C6B6A(int p0, int p1, int p2) { return invoke<int>(0x4C2C6B6A, p0, p1, p2); }
void NETWORK::_0x4818ACD0(int p0, int p1) { invoke<void*>(0x4818ACD0, p0, p1); }
void NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int p0, int p1, int p2) { invoke<void*>(0x470810ED, p0, p1, p2); }
int NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<int>(0xD9BF6549); }
int NETWORK::_0xCCD8C02D() { return invoke<int>(0xCCD8C02D); }
int NETWORK::_0x3E25A3C5() { return invoke<int>(0x3E25A3C5); }
int NETWORK::NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0x2BE9235A); }
void NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int p0, int p1) { invoke<void*>(0xDAF3B0AE, p0, p1); }
void NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int p0, int p1) { invoke<void*>(0xBE3D32B4, p0, p1); }
void NETWORK::_0xA71A1D2A() { invoke<void*>(0xA71A1D2A); }
int NETWORK::_0x0B739F53() { return invoke<int>(0x0B739F53); }
int NETWORK::NETWORK_GET_PLAYER_INDEX(int Handle) { return invoke<int>(0xBE1C1506, Handle); }
int NETWORK::NETWORK_GET_PARTICIPANT_INDEX(int p0) { return invoke<int>(0xC4D91094, p0); }
int NETWORK::_0x40DBF464(int p0) { return invoke<int>(0x40DBF464, p0); }
int NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xF7952E62); }
int NETWORK::NETWORK_IS_PLAYER_CONNECTED(int p0) { return invoke<int>(0x168EE2C2, p0); }
int NETWORK::_0xF4F13B06() { return invoke<int>(0xF4F13B06); }
int NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<int>(0x4E2C348B, p0); }
int NETWORK::NETWORK_IS_PLAYER_ACTIVE(int p0) { return invoke<int>(0x43657B17, p0); }
int NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(int p0) { return invoke<int>(0xB08B6992, p0); }
int NETWORK::NET_BUT() { return invoke<int>(0x6970BA94); }
int NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<int>(0x89EA7B54); }
int NETWORK::NETWORK_GET_HOST_OF_SCRIPT(int p0, int p1, int p2) { return invoke<int>(0x9C95D0BB, p0, p1, p2); }
void NETWORK::NETWORK_SET_MISSION_FINISHED() { invoke<void*>(0x3083FAD7); }
int NETWORK::NETWORK_IS_SCRIPT_ACTIVE(int p0, int p1, int p2, int p3) { return invoke<int>(0x4A65250C, p0, p1, p2, p3); }
int NETWORK::_0x8F7D9F46(int p0, int p1, int p2) { return invoke<int>(0x8F7D9F46, p0, p1, p2); }
int NETWORK::_0xDB8B5D71() { return invoke<int>(0xDB8B5D71); }
int NETWORK::_0xCEA55F4C(int p0, int p1, int p2) { return invoke<int>(0xCEA55F4C, p0, p1, p2); }
void NETWORK::_0x8DCFE77D() { invoke<void*>(0x8DCFE77D); }
void NETWORK::_0x331D9A27() { invoke<void*>(0x331D9A27); }
int NETWORK::PARTICIPANT_ID() { return invoke<int>(0x9C35A221); }
int NETWORK::PARTICIPANT_ID_TO_INT() { return invoke<int>(0x907498B0); }
int NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(int p0, int p1) { return invoke<int>(0x4FCA6436, p0, p1); }
int NETWORK::_0x28A45454(int p0, int p1, int p2) { return invoke<int>(0x28A45454, p0, p1, p2); }
int NETWORK::NETWORK_GET_ENTITY_KILLER_OF_PLAYER(int p0, int p1) { return invoke<int>(0xA7E7E04F, p0, p1); }
void NETWORK::NETWORK_RESURRECT_LOCAL_PLAYER(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xF1F9D4B4, p0, p1, p2, p3, p4, p5); }
void NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int p0) { invoke<void*>(0xFEA9B85C, p0); }
int NETWORK::NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<int>(0x8DE13B36); }
void NETWORK::_0x8D27280E(int p0, int p1) { invoke<void*>(0x8D27280E, p0, p1); }
void NETWORK::_0xB72F086D(int p0) { invoke<void*>(0xB72F086D, p0); }
int NETWORK::_0xEDA68956(int p0) { return invoke<int>(0xEDA68956, p0); }
int NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(int p0) { return invoke<int>(0x9E35DAB6, p0); }
int NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(int p0) { return invoke<int>(0x5B912C3F, p0); }
int NETWORK::_0xD7F934F4(int p0) { return invoke<int>(0xD7F934F4, p0); }
int NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(int p0) { return invoke<int>(0x813353ED, p0); }
void NETWORK::_0x31A630A4(int p0) { invoke<void*>(0x31A630A4, p0); }
void NETWORK::_0x5C645F64(int p0) { invoke<void*>(0x5C645F64, p0); }
int NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(int p0) { return invoke<int>(0xB8D2C99E, p0); }
int NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(int p0) { return invoke<int>(0x1E2E3177, p0); }
int NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netID) { return invoke<int>(0x9262A60A, netID); }
int NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(int entity) { return invoke<int>(0x92E77D21, entity); }
int NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(int entity) { return invoke<int>(0xA05FEBD7, entity); }
int NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(int p0) { return invoke<int>(0xF60DAAF6, p0); }
int NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(int entity) { return invoke<int>(0x005FD797, entity); }
int NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(int p0) { return invoke<int>(0xF7784FC8, p0); }
int NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(int p0) { return invoke<int>(0x136326EC, p0); }
int NETWORK::VEH_TO_NET(int vehicle) { return invoke<int>(0xF17634EB, vehicle); }
int NETWORK::PED_TO_NET(int  ped) { return invoke<int>(0x86A0B759, ped); }
int NETWORK::OBJ_TO_NET(int object) { return invoke<int>(0x1E05F29F, object); }
int NETWORK::NET_TO_VEH(int p0) { return invoke<int>(0x7E02FAEA, p0); }
int NETWORK::NET_TO_PED(int p0) { return invoke<int>(0x87717DD4, p0); }
int NETWORK::NET_TO_OBJ(int p0) { return invoke<int>(0x27AA14D8, p0); }
int NETWORK::NET_TO_ENT(int p0) { return invoke<int>(0x5E149683, p0); }
void NETWORK::NETWORK_GET_LOCAL_HANDLE(int p0, int p1) { invoke<void*>(0x08023B16, p0, p1); }
void NETWORK::NETWORK_HANDLE_FROM_USER_ID(int p0, int p1, int p2) { invoke<void*>(0x74C2C1B7, p0, p1, p2); }
void NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(int p0, int p1, int p2) { invoke<void*>(0x9BFC9FE2, p0, p1, p2); }
void NETWORK::NETWORK_HANDLE_FROM_PLAYER(int Handle, int* FreeMemPointer, int p2) { invoke<void*>(0xD3498917, Handle, FreeMemPointer, p2); }
void NETWORK::NETWORK_HANDLE_FROM_FRIEND(int p0, int p1, int p2) { invoke<void*>(0x3B0BB3A3, p0, p1, p2); }
int NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(int p0) { return invoke<int>(0xEBA00C2A, p0); }
int NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<int>(0xF000828E); }
int NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<int>(0x89C2B5EA); }
int NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(int p0) { return invoke<int>(0xA18A1B26, p0); }
int NETWORK::NETWORK_ARE_HANDLES_THE_SAME(int p0, int p1) { return invoke<int>(0x45975AE3, p0, p1); }
int NETWORK::NETWORK_IS_HANDLE_VALID(int p0, int p1) { return invoke<int>(0xF0996C6E, p0, p1); }
int NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(int p0) { return invoke<int>(0x2E96EF1E, p0); }
int NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(int p0) { return invoke<int>(0x62EF0A63, p0); }
int NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(int p0) { return invoke<int>(0x59127716, p0); }
void NETWORK::NETWORK_SHOW_PROFILE_UI(int p0) { invoke<void*>(0xF00A20B0, p0); }
int NETWORK::NETWORK_GET_GAME_REGION() { return invoke<int>(0xEE4D173E); }
int NETWORK::NETWORK_PLAYER_GET_NAME(int p0) { return invoke<int>(0xCE48F260, p0); }
int NETWORK::_0x4EC0D983(int p0, int p1) { return invoke<int>(0x4EC0D983, p0, p1); }
int NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(int player) { return invoke<int>(0xF6659045, player); }
int NETWORK::_0xD265B049(int p0) { return invoke<int>(0xD265B049, p0); }
int NETWORK::NETWORK_IS_INACTIVE_PROFILE(int p0) { return invoke<int>(0x95481343, p0); }
int NETWORK::NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0x048171BC); }
int NETWORK::NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xA396ACDE); }
int NETWORK::NETWORK_GET_FRIEND_NAME(int p0) { return invoke<int>(0x97420B6D, p0); }
int NETWORK::NETWORK_IS_FRIEND_ONLINE(int p0) { return invoke<int>(0xE0A42430, p0); }
int NETWORK::NETWORK_IS_FRIEND_IN_SAME_TITLE(int p0) { return invoke<int>(0xC54365C2, p0); }
int NETWORK::NETWORK_IS_FRIEND_IN_MULTIPLAYER(int p0) { return invoke<int>(0x400BDDD9, p0); }
int NETWORK::NETWORK_IS_FRIEND(int p0) { return invoke<int>(0x2DA4C282, p0); }
int NETWORK::NETWORK_IS_PENDING_FRIEND(int p0) { return invoke<int>(0x5C85FF81, p0); }
int NETWORK::NETWORK_IS_ADDING_FRIEND() { return invoke<int>(0xBB7EC8C4); }
int NETWORK::NETWORK_ADD_FRIEND(int p0, int p1) { return invoke<int>(0x20E5B3EE, p0, p1); }
int NETWORK::CLEAR_PLAYER_BAILED_FROM_PLAYERICLE(int p0) { return invoke<int>(0x94AE7172, p0); }
int NETWORK::GET_OBJ_ENTITY(int p0) { return invoke<int>(0xB802B671, p0); }
int NETWORK::NETWORK_CAN_SET_WAYPOINT() { return invoke<int>(0x009E68F3); }
int NETWORK::_0x5C0AB2A9(int p0) { return invoke<int>(0x5C0AB2A9, p0); }
int NETWORK::_0x9A176B6E() { return invoke<int>(0x9A176B6E); }
int NETWORK::NETWORK_HAS_HEADSET() { return invoke<int>(0xA7DC5657); }
void NETWORK::_0x5C05B7E1(int p0) { invoke<void*>(0x5C05B7E1, p0); }
int NETWORK::VEHICLE_NET_ATTACH_CHAR_TO_CHAR_PHYSICALLY() { return invoke<int>(0xAC00A5BE); }
int NETWORK::NETWORK_GAMER_HAS_HEADSET(int p0) { return invoke<int>(0xD036DA4A, p0); }
int NETWORK::NETWORK_IS_GAMER_TALKING(int p0) { return invoke<int>(0x99B58DBC, p0); }
int NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(int p0) { return invoke<int>(0xD05EB7F6, p0); }
int NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(int p0) { return invoke<int>(0x001B4046, p0); }
int NETWORK::_0x7685B333(int p0) { return invoke<int>(0x7685B333, p0); }
int NETWORK::_0x3FDCC8D7(int p0) { return invoke<int>(0x3FDCC8D7, p0); }
int NETWORK::_0xD19B312C(int p0) { return invoke<int>(0xD19B312C, p0); }
int NETWORK::NETWORK_IS_PLAYER_TALKING(int p0) { return invoke<int>(0xDA9FD9DB, p0); }
int NETWORK::NETWORK_PLAYER_HAS_HEADSET(int p0) { return invoke<int>(0x451FB6B6, p0); }
int NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME(int p0) { return invoke<int>(0x7A21050E, p0); }
int NETWORK::NETWORK_AM_I_MUTED_BY_PLAYER(int p0) { return invoke<int>(0xE128F2B0, p0); }
int NETWORK::NETWORK_IS_PLAYER_BLOCKED_BY_ME(int p0) { return invoke<int>(0xAE4F4560, p0); }
int NETWORK::NETWORK_AM_I_BLOCKED_BY_PLAYER(int p0) { return invoke<int>(0x953EF45E, p0); }
int NETWORK::NETWORK_GET_PLAYER_LOUDNESS(int p0) { return invoke<int>(0xF2F67014, p0); }
void NETWORK::NETWORK_SET_TALKER_PROXIMITY(int p0) { invoke<void*>(0x67555C66, p0); }
int NETWORK::NETWORK_GET_TALKER_PROXIMITY() { return invoke<int>(0x19991ADD); }
void NETWORK::NETWORK_SET_VOICE_ACTIVE(int p0) { invoke<void*>(0x8011247F, p0); }
void NETWORK::_0x1A3EA6CD(int p0) { invoke<void*>(0x1A3EA6CD, p0); }
void NETWORK::_0xCAB21090(int p0) { invoke<void*>(0xCAB21090, p0); }
void NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(int p0) { invoke<void*>(0x3813019A, p0); }
void NETWORK::_0xC8CC9E75(int p0, int p1) { invoke<void*>(0xC8CC9E75, p0, p1); }
void NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(int p0) { invoke<void*>(0xA0FD42D3, p0); }
void NETWORK::_0xC9DDA85B(int p0) { invoke<void*>(0xC9DDA85B, p0); }
void NETWORK::_0xD33AFF79(int p0) { invoke<void*>(0xD33AFF79, p0); }
void NETWORK::_0x4FFEFE43(int p0) { invoke<void*>(0x4FFEFE43, p0); }
void NETWORK::_0x74EE2D8B(int p0, int p1) { invoke<void*>(0x74EE2D8B, p0, p1); }
void NETWORK::_0x2F98B405(int p0) { invoke<void*>(0x2F98B405, p0); }
void NETWORK::_0x95F1C60D(int p0, int p1) { invoke<void*>(0x95F1C60D, p0, p1); }
void NETWORK::_0x1BCD3DDF(int p0) { invoke<void*>(0x1BCD3DDF, p0); }
void NETWORK::NETWORK_SET_VOICE_CHANNEL(int p0) { invoke<void*>(0x3974879F, p0); }
void NETWORK::_0x9ECF722A() { invoke<void*>(0x9ECF722A); }
void NETWORK::IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(int p0, int p1, int p2) { invoke<void*>(0xF1E84832, p0, p1, p2); }
void NETWORK::_0x7F9B9052() { invoke<void*>(0x7F9B9052); }
void NETWORK::_0x7BBEA8CF(int p0) { invoke<void*>(0x7BBEA8CF, p0); }
void NETWORK::_0xE797A4B6(int p0) { invoke<void*>(0xE797A4B6, p0); }
void NETWORK::_0x92268BB5(int p0, int p1, int p2) { invoke<void*>(0x92268BB5, p0, p1, p2); }
void NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<void*>(0x92B7351C); }
void NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(int p0) { invoke<void*>(0x6BAF95FA, p0); }
void NETWORK::NETWORK_SET_RICH_PRESENCE(int p0, int p1, int p2, int p3) { invoke<void*>(0x932A6CED, p0, p1, p2, p3); }
void NETWORK::_0x017E6777(int p0, int p1) { invoke<void*>(0x017E6777, p0, p1); }
int NETWORK::_0xE1F86C6A() { return invoke<int>(0xE1F86C6A); }
void NETWORK::_0xBE6A30C3(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void*>(0xBE6A30C3, p0, p1, p2, p3, p4, p5); }
void NETWORK::_0x22E03AD0(int p0, int p1) { invoke<void*>(0x22E03AD0, p0, p1); }
void NETWORK::_0xCEAE5AFC(int p0) { invoke<void*>(0xCEAE5AFC, p0); }
int NETWORK::_0xF5F4BD95() { return invoke<int>(0xF5F4BD95); }
int NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(int p0) { return invoke<int>(0xAB8319A3, p0); }
int NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(int p0, int p1, int p2) { return invoke<int>(0x6EE4A282, p0, p1, p2); }
int NETWORK::_0x54E79E9C(int p0, int p1) { return invoke<int>(0x54E79E9C, p0, p1); }
void NETWORK::_0xF633805A(int p0, int p1, int p2) { invoke<void*>(0xF633805A, p0, p1, p2); }
int NETWORK::_0x807B3450() { return invoke<int>(0x807B3450); }
int NETWORK::_0x3369DD1F(int p0, int p1) { return invoke<int>(0x3369DD1F, p0, p1); }
int NETWORK::NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(int p0) { return invoke<int>(0x8E8CB520, p0); }
int NETWORK::NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(int p0) { return invoke<int>(0x1FDB590F, p0); }
int NETWORK::_0x83ED8E08() { return invoke<int>(0x83ED8E08); }
int NETWORK::_0x40202867(int p0) { return invoke<int>(0x40202867, p0); }
int NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_COUNT(int p0) { return invoke<int>(0x25924010, p0); }
int NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_VALID(int p0, int p1) { return invoke<int>(0x48914F6A, p0, p1); }
int NETWORK::NETWORK_CLAN_GET_MEMBERSHIP(int p0, int p1, int p2) { return invoke<int>(0xCDC4A590, p0, p1, p2); }
int NETWORK::NETWORK_CLAN_JOIN(int p0) { return invoke<int>(0x79C916C5, p0); }
int NETWORK::_0xBDA90BAC(int p0, int p1) { return invoke<int>(0xBDA90BAC, p0, p1); }
int NETWORK::_0x8E952B12(int p0, int p1) { return invoke<int>(0x8E952B12, p0, p1); }
int NETWORK::_0x966C90FD() { return invoke<int>(0x966C90FD); }
int NETWORK::_0xBA672146(int p0, int p1) { return invoke<int>(0xBA672146, p0, p1); }
int NETWORK::_0x7963FA4D(int p0) { return invoke<int>(0x7963FA4D, p0); }
int NETWORK::_0x88B13CDC(int p0, int p1) { return invoke<int>(0x88B13CDC, p0, p1); }
void NETWORK::_0xD6E3D5EA(int p0) { invoke<void*>(0xD6E3D5EA, p0); }
int NETWORK::_0xE22445DA() { return invoke<int>(0xE22445DA); }
void NETWORK::_0x455DDF5C() { invoke<void*>(0x455DDF5C); }
int NETWORK::_0x89DB0EC7(int p0, int p1) { return invoke<int>(0x89DB0EC7, p0, p1); }
int NETWORK::_0xA4EF02F3() { return invoke<int>(0xA4EF02F3); }
int NETWORK::_0x068A054E() { return invoke<int>(0x068A054E); }
int NETWORK::_0x9B8631EB(int p0, int p1) { return invoke<int>(0x9B8631EB, p0, p1); }
void NETWORK::SET_NETWORK_ID_CAN_MIGRATE(int p0, int p1) { invoke<void*>(0x47C8E5FF, p0, p1); }
void NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int NetID, int DoesExist) { invoke<void*>(0x68D486B2, NetID, DoesExist); }
void NETWORK::_0x4D15FDB1(int p0, int p1, int p2) { invoke<void*>(0x4D15FDB1, p0, p1, p2); }
void NETWORK::NETWORK_SET_ENTITY_CAN_BLEND(int p0, int p1) { invoke<void*>(0xDE8C0DB8, p0, p1); }
void NETWORK::_0x09CBC4B0(int p0, int p1) { invoke<void*>(0x09CBC4B0, p0, p1); }
void NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int p0, int p1, int p2) { invoke<void*>(0x199E75EF, p0, p1, p2); }
void NETWORK::_0x00AE4E17(int p0, int p1) { invoke<void*>(0x00AE4E17, p0, p1); }
int NETWORK::_0xEA5176C0(int p0) { return invoke<int>(0xEA5176C0, p0); }
void NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(int p0, int p1) { invoke<void*>(0x59F3479B, p0, p1); }
void NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(int p0) { invoke<void*>(0x764F6222, p0); }
void NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(int p0) { invoke<void*>(0x324B56DB, p0); }
void NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(int p0, int p1) { invoke<void*>(0x18227209, p0, p1); }
void NETWORK::SET_PLAYER_VISIBLE_LOCALLY(int p0, int p1) { invoke<void*>(0xBA2BB4B4, p0, p1); }
void NETWORK::FADE_OUT_LOCAL_PLAYER(int p0) { invoke<void*>(0x8FA7CEBD, p0); }
void NETWORK::NETWORK_FADE_OUT_ENTITY(int p0, int p1, int p2) { invoke<void*>(0x47EDEE56, p0, p1, p2); }
void NETWORK::NETWORK_FADE_IN_ENTITY(int p0, int p1) { invoke<void*>(0x9B9FCD02, p0, p1); }
int NETWORK::IS_PLAYER_IN_CUTSCENE(int p0) { return invoke<int>(0xE0A619BD, p0); }
void NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(int p0, int p1, int p2) { invoke<void*>(0xDBFB067B, p0, p1, p2); }
void NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(int p0) { invoke<void*>(0x51ADCC5F, p0); }
void NETWORK::SET_ENTITY_LOCALLY_VISIBLE(int p0) { invoke<void*>(0x235A57B3, p0); }
int NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int p0) { return invoke<int>(0x597063BA, p0); }
void NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int p0, int p1) { invoke<void*>(0x95D07BA5, p0, p1); }
int NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(int p0, int p1, int p2, int p3) { return invoke<int>(0x23C5274E, p0, p1, p2, p3); }
int NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xE9FCFB32, p0, p1, p2, p3, p4); }
void NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(int p0) { invoke<void*>(0x391DF4F3, p0); }
void NETWORK::RESERVE_NETWORK_MISSION_PEDS(int p0) { invoke<void*>(0x54998C37, p0); }
void NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(int p0) { invoke<void*>(0x5062875E, p0); }
int NETWORK::CAN_REGISTER_MISSION_OBJECTS(int p0) { return invoke<int>(0x7F85DFDE, p0); }
int NETWORK::CAN_REGISTER_MISSION_PEDS(int p0) { return invoke<int>(0xCCAA5CE9, p0); }
int NETWORK::CAN_REGISTER_MISSION_VEHICLES(int p0) { return invoke<int>(0x818B6830, p0); }
int NETWORK::CAN_REGISTER_MISSION_ENTITIES(int p0, int p1, int p2, int p3) { return invoke<int>(0x83794008, p0, p1, p2, p3); }
int NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(int p0) { return invoke<int>(0x16A80CD6, p0); }
int NETWORK::GET_NUM_RESERVED_MISSION_PEDS(int p0) { return invoke<int>(0x6C25975C, p0); }
int NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(int p0) { return invoke<int>(0xA9A308F3, p0); }
int NETWORK::_0x603FA104(int p0) { return invoke<int>(0x603FA104, p0); }
int NETWORK::_0xD8FEC4F8(int p0) { return invoke<int>(0xD8FEC4F8, p0); }
int NETWORK::_0x20527695(int p0) { return invoke<int>(0x20527695, p0); }
int NETWORK::_0x8687E285() { return invoke<int>(0x8687E285); }
int NETWORK::_0x744AC008() { return invoke<int>(0x744AC008); }
int NETWORK::_0xC3A12135() { return invoke<int>(0xC3A12135); }
int NETWORK::_0x6A036061() { return invoke<int>(0x6A036061); }
int NETWORK::GET_NETWORK_TIME() { return invoke<int>(0x998103C2); }
int NETWORK::_0x98AA48E5() { return invoke<int>(0x98AA48E5); }
int NETWORK::_0x4538C4A2() { return invoke<int>(0x4538C4A2); }
int NETWORK::GET_TIME_OFFSET(int p0, int p1) { return invoke<int>(0x2E079AE6, p0, p1); }
int NETWORK::_0x50EF8FC6(int p0, int p1) { return invoke<int>(0x50EF8FC6, p0, p1); }
int NETWORK::_0xBBB6DF61(int p0, int p1) { return invoke<int>(0xBBB6DF61, p0, p1); }
int NETWORK::_0x8B4D1C06(int p0, int p1) { return invoke<int>(0x8B4D1C06, p0, p1); }
int NETWORK::GET_TIME_DIFFERENCE(int p0, int p1) { return invoke<int>(0x5666A837, p0, p1); }
int NETWORK::_0x8218944E(int p0) { return invoke<int>(0x8218944E, p0); }
int NETWORK::_0xF2FDF2E0() { return invoke<int>(0xF2FDF2E0); }
void NETWORK::_0xBB7CCE49(int p0, int p1) { invoke<void*>(0xBB7CCE49, p0, p1); }
void NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(int p0, int p1) { invoke<void*>(0x5C4C8458, p0, p1); }
void NETWORK::_0x54058F5F(int p0, int p1, int p2) { invoke<void*>(0x54058F5F, p0, p1, p2); }
void NETWORK::_0xA7E36020(int p0) { invoke<void*>(0xA7E36020, p0); }
void NETWORK::_0x64235620(int p0, int p1) { invoke<void*>(0x64235620, p0, p1); }
int NETWORK::NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<int>(0x3EAD9DB8); }
void NETWORK::NETWORK_SET_IN_MP_CUTSCENE(int p0, int p1, int p2) { invoke<void*>(0x8434CB43, p0, p1, p2); }
int NETWORK::NETWORK_IS_IN_MP_CUTSCENE() { return invoke<int>(0x4BB33316); }
int NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(int p0) { return invoke<int>(0x56F961E4, p0); }
void NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(int p0, int p1) { invoke<void*>(0x2C30912D, p0, p1); }
void NETWORK::_0xEA235081(int p0, int p1) { invoke<void*>(0xEA235081, p0, p1); }
void NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(int p0) { invoke<void*>(0x4DD46DAE, p0); }
int NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { return invoke<int>(0xB06FE3FE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void*>(0xB386713E, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void*>(0x10DD636C, p0, p1, p2, p3, p4, p5, p6); }
void NETWORK::_0xBFFE8B5C(int p0, int p1, int p2) { invoke<void*>(0xBFFE8B5C, p0, p1, p2); }
void NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int p0, int p1, int p2) { invoke<void*>(0x3FE5B222, p0, p1, p2); }
void NETWORK::NETWORK_START_SYNCHRONISED_SCENE(int p0) { invoke<void*>(0xA9DFDC40, p0); }
void NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(int p0) { invoke<void*>(0x97B1CDF6, p0); }
int NETWORK::_0x16AED87B(int p0) { return invoke<int>(0x16AED87B, p0); }
int NETWORK::_0x0679CE71(int p0, int p1) { return invoke<int>(0x0679CE71, p0, p1); }
int NETWORK::_0xC62E77B3(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0xC62E77B3, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
int NETWORK::_0x74D6B13C(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { return invoke<int>(0x74D6B13C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
int NETWORK::_0x90700C7D(int p0) { return invoke<int>(0x90700C7D, p0); }
void NETWORK::_0x44BFB619() { invoke<void*>(0x44BFB619); }
void NETWORK::NETWORK_GET_RESPAWN_RESULT(int p0, int p1, int p2) { invoke<void*>(0xDDFE9FBC, p0, p1, p2); }
int NETWORK::_0x03287FD2(int p0) { return invoke<int>(0x03287FD2, p0); }
void NETWORK::_0x408A9436() { invoke<void*>(0x408A9436); }
void NETWORK::_0xFFB2ADA1(int p0, int p1) { invoke<void*>(0xFFB2ADA1, p0, p1); }
void NETWORK::NETWORK_END_TUTORIAL_SESSION() { invoke<void*>(0xBA57E53E); }
int NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<int>(0x34DD7B28); }
int NETWORK::_0x755A2B3E() { return invoke<int>(0x755A2B3E); }
int NETWORK::_0xA003C40B() { return invoke<int>(0xA003C40B); }
int NETWORK::_0x5E1020CC(int p0) { return invoke<int>(0x5E1020CC, p0); }
int NETWORK::_0xE66A0B40(int p0, int p1) { return invoke<int>(0xE66A0B40, p0, p1); }
void NETWORK::_0x72052DB3(int p0, int p1) { invoke<void*>(0x72052DB3, p0, p1); }
int NETWORK::_0xB0313590(int p0) { return invoke<int>(0xB0313590, p0); }
void NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(int Hours, int Minutes, int Seconds) { invoke<void*>(0xC077BCD6, Hours, Minutes, Seconds); }
void NETWORK::_0xC4AEAF49() { invoke<void*>(0xC4AEAF49); }
int NETWORK::_0x2465296D() { return invoke<int>(0x2465296D); }
int NETWORK::NETWORK_ADD_ENTITY_AREA(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x51030E5B, p0, p1, p2, p3, p4, p5); }
int NETWORK::_0x4C2C2B12(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x4C2C2B12, p0, p1, p2, p3, p4, p5); }
int NETWORK::NETWORK_REMOVE_ENTITY_AREA(int p0) { return invoke<int>(0xEAB97F25, p0); }
int NETWORK::_0x69956127(int p0) { return invoke<int>(0x69956127, p0); }
int NETWORK::_0xCB1CD6D3(int p0) { return invoke<int>(0xCB1CD6D3, p0); }
int NETWORK::_0xC6D53AA0(int p0) { return invoke<int>(0xC6D53AA0, p0); }
void NETWORK::_0x155465EE(int p0, int p1) { invoke<void*>(0x155465EE, p0, p1); }
int NETWORK::_0x29532731() { return invoke<int>(0x29532731); }
void NETWORK::_0xD760CAD5() { invoke<void*>(0xD760CAD5); }
int NETWORK::_0x231CFD12() { return invoke<int>(0x231CFD12); }
int NETWORK::NETWORK_DOES_TUNABLE_EXIST(int p0, int p1) { return invoke<int>(0x9FCE9C9A, p0, p1); }
int NETWORK::_0xE4B3726A(int p0, int p1, int p2) { return invoke<int>(0xE4B3726A, p0, p1, p2); }
int NETWORK::_0x41E8912A(int p0, int p1, int p2) { return invoke<int>(0x41E8912A, p0, p1, p2); }
int NETWORK::_0x8A04E1FE(int p0, int p1) { return invoke<int>(0x8A04E1FE, p0, p1); }
int NETWORK::_0xA78571CA(int p0) { return invoke<int>(0xA78571CA, p0); }
int NETWORK::_0x053BB329() { return invoke<int>(0x053BB329); }
void NETWORK::NETWORK_RESET_BODY_TRACKER() { invoke<void*>(0x3914463F); }
int NETWORK::_0x17CBC608() { return invoke<int>(0x17CBC608); }
int NETWORK::_0xBFAA349B(int p0) { return invoke<int>(0xBFAA349B, p0); }
int NETWORK::_0xBEB7281A(int p0, int p1) { return invoke<int>(0xBEB7281A, p0, p1); }
int NETWORK::NETWORK_EXPLODE_VEHICLE(int p0, int p1, int p2, int p3) { return invoke<int>(0x0E1B38AE, p0, p1, p2, p3); }
void NETWORK::_0xBC54371B(int p0) { invoke<void*>(0xBC54371B, p0); }
void NETWORK::_0x644141C5(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x644141C5, p0, p1, p2, p3, p4); }
void NETWORK::NETWORK_SET_PROPERTY_ID(int p0) { invoke<void*>(0x5A74E873, p0); }
void NETWORK::_0x38BC35C8() { invoke<void*>(0x38BC35C8); }
void NETWORK::_0x53C9563C(int p0) { invoke<void*>(0x53C9563C, p0); }
void NETWORK::_0x6B97075B(int p0) { invoke<void*>(0x6B97075B, p0); }
int NETWORK::_0x965EA007() { return invoke<int>(0x965EA007); }
int NETWORK::_0xEEFC8A55() { return invoke<int>(0xEEFC8A55); }
void NETWORK::_0x866D1B67(int p0) { invoke<void*>(0x866D1B67, p0); }
int NETWORK::_0xED4A272F() { return invoke<int>(0xED4A272F); }
int NETWORK::_0x4ACF110C(int p0) { return invoke<int>(0x4ACF110C, p0); }
int NETWORK::_0x1AA3A0D5(int p0) { return invoke<int>(0x1AA3A0D5, p0); }
int NETWORK::_0x37877757(int p0) { return invoke<int>(0x37877757, p0); }
int NETWORK::_0x1CF89DA5(int p0) { return invoke<int>(0x1CF89DA5, p0); }
int NETWORK::_0x16E53875(int p0, int p1) { return invoke<int>(0x16E53875, p0, p1); }
void NETWORK::_0x365C50EE(int p0, int p1) { invoke<void*>(0x365C50EE, p0, p1); }
int NETWORK::_0x25E2DBA9() { return invoke<int>(0x25E2DBA9); }
void NETWORK::SET_STORE_ENABLED(int p0) { invoke<void*>(0xC1F6443B, p0); }
int NETWORK::_0x1FDC75DC(int p0) { return invoke<int>(0x1FDC75DC, p0); }
void NETWORK::_0xCA7A0A49() { invoke<void*>(0xCA7A0A49); }
int NETWORK::_0x44A58B0A(int p0) { return invoke<int>(0x44A58B0A, p0); }
int NETWORK::_0xD32FA11F() { return invoke<int>(0xD32FA11F); }
void NETWORK::_0xA7FA70AE() { invoke<void*>(0xA7FA70AE); }
void NETWORK::_0xCC7DCE24() { invoke<void*>(0xCC7DCE24); }
int NETWORK::_0x70F6D3AD() { return invoke<int>(0x70F6D3AD); }
int NETWORK::_0x2B7B57B3(int p0) { return invoke<int>(0x2B7B57B3, p0); }
int NETWORK::_0xBAF52DD8(int p0) { return invoke<int>(0xBAF52DD8, p0); }
int NETWORK::_0x9B9AFFF1(int p0) { return invoke<int>(0x9B9AFFF1, p0); }
void NETWORK::_0xC38E9DB0() { invoke<void*>(0xC38E9DB0); }
int NETWORK::_0x32A4EB22() { return invoke<int>(0x32A4EB22); }
int NETWORK::_0x9262744C() { return invoke<int>(0x9262744C); }
int NETWORK::_0x08243B79(int p0, int p1) { return invoke<int>(0x08243B79, p0, p1); }
int NETWORK::_0x798D6C27() { return invoke<int>(0x798D6C27); }
int NETWORK::_0xE69E8D0D() { return invoke<int>(0xE69E8D0D); }
int NETWORK::_0x742075FE() { return invoke<int>(0x742075FE); }
int NETWORK::_0xCE569932() { return invoke<int>(0xCE569932); }
int NETWORK::_0x82146BE9() { return invoke<int>(0x82146BE9); }
void NETWORK::_0x133FF2D5() { invoke<void*>(0x133FF2D5); }
int NETWORK::_0xCBA7242F(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xCBA7242F, p0, p1, p2, p3, p4, p5); }
int NETWORK::_0xDED82A6E(int p0, int p1, int p2) { return invoke<int>(0xDED82A6E, p0, p1, p2); }
int NETWORK::_0x40CF0783(int p0, int p1, int p2, int p3) { return invoke<int>(0x40CF0783, p0, p1, p2, p3); }
int NETWORK::_0x4609D596(int p0, int p1, int p2, int p3) { return invoke<int>(0x4609D596, p0, p1, p2, p3); }
int NETWORK::_0x4C2C0D1F(int p0, int p1, int p2, int p3) { return invoke<int>(0x4C2C0D1F, p0, p1, p2, p3); }
int NETWORK::_0x9EFBD5D1(int p0, int p1, int p2, int p3) { return invoke<int>(0x9EFBD5D1, p0, p1, p2, p3); }
int NETWORK::_0xA6D8B798(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xA6D8B798, p0, p1, p2, p3, p4); }
int NETWORK::_0x67E74842(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x67E74842, p0, p1, p2, p3, p4); }
int NETWORK::SET_BALANCE_ADD_MACHINE(int p0, int p1) { return invoke<int>(0xE123C7AC, p0, p1); }
int NETWORK::SET_BALANCE_ADD_MACHINES(int p0, int p1, int p2) { return invoke<int>(0x22C33603, p0, p1, p2); }
int NETWORK::_0x37F5BD93(int p0, int p1, int p2, int p3) { return invoke<int>(0x37F5BD93, p0, p1, p2, p3); }
int NETWORK::_0x1CFB3F51(int p0, int p1, int p2, int p3) { return invoke<int>(0x1CFB3F51, p0, p1, p2, p3); }
int NETWORK::_0x87D1E6BD(int p0, int p1, int p2, int p3) { return invoke<int>(0x87D1E6BD, p0, p1, p2, p3); }
void NETWORK::_0x021D5A94() { invoke<void*>(0x021D5A94); }
int NETWORK::_0x4908A514() { return invoke<int>(0x4908A514); }
int NETWORK::_0x50296140() { return invoke<int>(0x50296140); }
int NETWORK::_0x3970B0DA() { return invoke<int>(0x3970B0DA); }
int NETWORK::_0xC1487110() { return invoke<int>(0xC1487110); }
int NETWORK::_0xCC2356E3() { return invoke<int>(0xCC2356E3); }
int NETWORK::_0x2DE69817() { return invoke<int>(0x2DE69817); }
int NETWORK::_0x81BD8D3B() { return invoke<int>(0x81BD8D3B); }
int NETWORK::_0x8E1D8F78() { return invoke<int>(0x8E1D8F78); }
void NETWORK::_0x0D35DD93() { invoke<void*>(0x0D35DD93); }
int NETWORK::_0x8F3137E6(int p0) { return invoke<int>(0x8F3137E6, p0); }
int NETWORK::_0xB9137BA7(int p0) { return invoke<int>(0xB9137BA7, p0); }
int NETWORK::_0x9FEEAA9C(int p0) { return invoke<int>(0x9FEEAA9C, p0); }
int NETWORK::_0x5E8A7559(int p0) { return invoke<int>(0x5E8A7559, p0); }
int NETWORK::_0x331AEABF(int p0) { return invoke<int>(0x331AEABF, p0); }
int NETWORK::_0x0E5E8E5C(int p0) { return invoke<int>(0x0E5E8E5C, p0); }
int NETWORK::_0xA5A0C695(int p0) { return invoke<int>(0xA5A0C695, p0); }
int NETWORK::_0x91534C6E(int p0) { return invoke<int>(0x91534C6E, p0); }
int NETWORK::_0x744A9EA5(int p0, int p1) { return invoke<int>(0x744A9EA5, p0, p1); }
void NETWORK::_0xA19A238D(int p0, int p1) { invoke<void*>(0xA19A238D, p0, p1); }
int NETWORK::_0xFF7D44E6(int p0, int p1) { return invoke<int>(0xFF7D44E6, p0, p1); }
int NETWORK::_0xA2C5BD9D(int p0) { return invoke<int>(0xA2C5BD9D, p0); }
int NETWORK::_0xA850DDE1(int p0) { return invoke<int>(0xA850DDE1, p0); }
int NETWORK::_0x8F6754AE(int p0) { return invoke<int>(0x8F6754AE, p0); }
int NETWORK::_0x1E34953F(int p0, int p1) { return invoke<int>(0x1E34953F, p0, p1); }
int NETWORK::_0x771FE190(int p0, int p1) { return invoke<int>(0x771FE190, p0, p1); }
int NETWORK::_0x3276D9D3(int p0, int p1) { return invoke<int>(0x3276D9D3, p0, p1); }
int NETWORK::_0x41A0FB02(int p0, int p1) { return invoke<int>(0x41A0FB02, p0, p1); }
int NETWORK::_0x11DC0F27(int p0) { return invoke<int>(0x11DC0F27, p0); }
int NETWORK::_0x0DEB3F5A(int p0) { return invoke<int>(0x0DEB3F5A, p0); }
int NETWORK::_0x84315226(int p0, int p1) { return invoke<int>(0x84315226, p0, p1); }
int NETWORK::_0x38FC2EEB(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x38FC2EEB, p0, p1, p2, p3, p4); }
int NETWORK::_0x1C4F9FDB(int p0) { return invoke<int>(0x1C4F9FDB, p0); }
int NETWORK::_0xA69AE16C(int p0) { return invoke<int>(0xA69AE16C, p0); }
int NETWORK::_0xF50BC67A(int p0) { return invoke<int>(0xF50BC67A, p0); }
int NETWORK::_0xB3BBD241(int p0) { return invoke<int>(0xB3BBD241, p0); }
int NETWORK::_0x70A2845C(int p0, int p1) { return invoke<int>(0x70A2845C, p0, p1); }
int NETWORK::_0x346B506C(int p0) { return invoke<int>(0x346B506C, p0); }
void NETWORK::_0x0095DB71() { invoke<void*>(0x0095DB71); }
int NETWORK::_0xAD334B40(int p0, int p1, int p2) { return invoke<int>(0xAD334B40, p0, p1, p2); }
int NETWORK::_0x980D45D7(int p0, int p1, int p2) { return invoke<int>(0x980D45D7, p0, p1, p2); }
int NETWORK::_0x48CCC328(int p0, int p1, int p2) { return invoke<int>(0x48CCC328, p0, p1, p2); }
int NETWORK::_0x8E664EFD() { return invoke<int>(0x8E664EFD); }
int NETWORK::_0x611E0BE2() { return invoke<int>(0x611E0BE2); }
int NETWORK::_0xF0211AC1() { return invoke<int>(0xF0211AC1); }
int NETWORK::_0x1F0DD8AF() { return invoke<int>(0x1F0DD8AF); }
void NETWORK::_0x405ECA16() { invoke<void*>(0x405ECA16); }
int NETWORK::_0x9567392B(int p0, int p1) { return invoke<int>(0x9567392B, p0, p1); }
int NETWORK::_0xF79FFF3C() { return invoke<int>(0xF79FFF3C); }
int NETWORK::_0xA7F3F82B() { return invoke<int>(0xA7F3F82B); }
int NETWORK::_0x410C61D1() { return invoke<int>(0x410C61D1); }
int NETWORK::_0x0D4F845D(int p0) { return invoke<int>(0x0D4F845D, p0); }
void NETWORK::_0xE13C1F7F() { invoke<void*>(0xE13C1F7F); }
void NETWORK::_0x213C6D36(int p0) { invoke<void*>(0x213C6D36, p0); }
void NETWORK::_0x511E6F50(int p0) { invoke<void*>(0x511E6F50, p0); }
int NETWORK::_0xB4668B23(int p0) { return invoke<int>(0xB4668B23, p0); }
int NETWORK::_0x30B51753(int p0, int p1, int p2) { return invoke<int>(0x30B51753, p0, p1, p2); }
int NETWORK::_0x02DAD93F() { return invoke<int>(0x02DAD93F); }
int NETWORK::_0x2D947814(int p0) { return invoke<int>(0x2D947814, p0); }
int NETWORK::_0x37A28C26() { return invoke<int>(0x37A28C26); }
int NETWORK::_0x11E8B5CD() { return invoke<int>(0x11E8B5CD); }
int NETWORK::_0x429AEAB3() { return invoke<int>(0x429AEAB3); }
int NETWORK::TEXTURE_DOWNLOAD_REQUEST(int p0, int p1, int p2, int p3) { return invoke<int>(0xAD546CC3, p0, p1, p2, p3); }
int NETWORK::_0x1856D008(int p0, int p1, int p2) { return invoke<int>(0x1856D008, p0, p1, p2); }
int NETWORK::_0x68C9AF69(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x68C9AF69, p0, p1, p2, p3, p4, p5); }
void NETWORK::TEXTURE_DOWNLOAD_RELEASE(int p0) { invoke<void*>(0xEE8D9E70, p0); }
int NETWORK::_0xE4547765(int p0) { return invoke<int>(0xE4547765, p0); }
int NETWORK::TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<int>(0xA40EF65A, p0); }
int NETWORK::_0x03225BA3(int p0) { return invoke<int>(0x03225BA3, p0); }
int NETWORK::_0x4DEBC227() { return invoke<int>(0x4DEBC227); }
int NETWORK::_0x5C065D55() { return invoke<int>(0x5C065D55); }
int NETWORK::_0x0CA1167F() { return invoke<int>(0x0CA1167F); }
int NETWORK::_0x424C6E27() { return invoke<int>(0x424C6E27); }
int NETWORK::_0xD3BBE42F() { return invoke<int>(0xD3BBE42F); }
int NETWORK::_0xBDBB5948() { return invoke<int>(0xBDBB5948); }
int NETWORK::_0x97287D68() { return invoke<int>(0x97287D68); }
int NETWORK::_0xC6EA802E() { return invoke<int>(0xC6EA802E); }
int NETWORK::_0xFD261E30(int p0) { return invoke<int>(0xFD261E30, p0); }
int NETWORK::_0x8570DD34(int p0, int p1, int p2) { return invoke<int>(0x8570DD34, p0, p1, p2); }
void NETWORK::_0x273C6180() { invoke<void*>(0x273C6180); }
void NETWORK::_0x371BBA08() { invoke<void*>(0x371BBA08); }
void NETWORK::_0xA100CC97(int p0) { invoke<void*>(0xA100CC97, p0); }
void NETWORK::_0xBB2D33D3(int p0, int p1) { invoke<void*>(0xBB2D33D3, p0, p1); }

int NETWORKCASH::NETWORK_CHECK_RECEIVE_PLAYER_CASH(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0xD6B69D67, p0, p1, p2, p3, p4); }
void NETWORKCASH::NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int p0, int p1) { invoke<void*>(0xC6047FDB, p0, p1); }
void NETWORKCASH::NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int p0, int p1) { invoke<void*>(0x4ED71C1A, p0, p1); }
void NETWORKCASH::NETWORK_EARN_FROM_BOUNTY(int p0, int p1, int p2, int p3) { invoke<void*>(0x127F2DAE, p0, p1, p2, p3); }
int NETWORKCASH::_0x5AA379D9(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x5AA379D9, p0, p1, p2, p3, p4); }
void NETWORKCASH::NETWORK_BUY_ITEM(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void*>(0xA07B6368, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void NETWORKCASH::NETWORK_SPENT_BUY_WANTEDLEVEL(int p0, int p1, int p2, int p3) { invoke<void*>(0xE7CB4F95, p0, p1, p2, p3); }
void NETWORKCASH::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x4E665BB2, p0, p1, p2, p3, p4); }
void NETWORKCASH::NETWORK_SPENT_CALL_PLAYER(int p0, int p1, int p2, int p3) { invoke<void*>(0x1A89B5FC, p0, p1, p2, p3); }
void NETWORKCASH::NETWORK_SPENT_BOUNTY(int p0, int p1, int p2) { invoke<void*>(0x3401FC96, p0, p1, p2); }
int NETWORKCASH::_0xC5D8B1E9(int p0, int p1) { return invoke<int>(0xC5D8B1E9, p0, p1); }
int NETWORKCASH::_0x6F1C592C() { return invoke<int>(0x6F1C592C); }
int NETWORKCASH::_0x8B755993(int p0) { return invoke<int>(0x8B755993, p0); }
int NETWORKCASH::_0x8F266745(int p0) { return invoke<int>(0x8F266745, p0); }
int NETWORKCASH::_0x531E4892(int p0) { return invoke<int>(0x531E4892, p0); }
int NETWORKCASH::_0xB96C7ABE(int p0) { return invoke<int>(0xB96C7ABE, p0); }
void NETWORKCASH::_0x66DA9935(int p0, int p1) { invoke<void*>(0x66DA9935, p0, p1); }
void NETWORKCASH::NETWORK_DELETE_CHARACTER(int p0, int p1, int p2) { invoke<void*>(0xA9F7E9C3, p0, p1, p2); }
void NETWORKCASH::_0x19F0C471(int p0) { invoke<void*>(0x19F0C471, p0); }
int NETWORKCASH::_0xA27B9FE8() { return invoke<int>(0xA27B9FE8); }
void NETWORKCASH::_0x07C92F21(int p0, int p1, int p2, int p3) { invoke<void*>(0x07C92F21, p0, p1, p2, p3); }
int NETWORKCASH::_0x8474E6F0(int p0, int p1, int p2) { return invoke<int>(0x8474E6F0, p0, p1, p2); }
int NETWORKCASH::_0xE3802533(int p0) { return invoke<int>(0xE3802533, p0); }
void NETWORKCASH::NETWORK_EARN_FROM_PICKUP(int amount) { invoke<void*>(0x70A0ED62, amount); }
void NETWORKCASH::_0x33C20BC4(int p0) { invoke<void*>(0x33C20BC4, p0); }
void NETWORKCASH::_0x30B3EC0A(int p0) { invoke<void*>(0x30B3EC0A, p0); }
void NETWORKCASH::_0xEAF04923(int p0) { invoke<void*>(0xEAF04923, p0); }
void NETWORKCASH::NETWORK_EARN_FROM_BETTING(int p0, int p1) { invoke<void*>(0xA0F7F07C, p0, p1); }
void NETWORKCASH::NETWORK_EARN_FROM_JOB(int amount, int p1) { invoke<void*>(0x0B6997FC, amount, p1); }
void NETWORKCASH::_0x5E81F55C(int p0, int p1) { invoke<void*>(0x5E81F55C, p0, p1); }
void NETWORKCASH::_0x2BEFB6C4(int p0, int p1, int p2) { invoke<void*>(0x2BEFB6C4, p0, p1, p2); }
void NETWORKCASH::_0xF11FC458(int p0, int p1) { invoke<void*>(0xF11FC458, p0, p1); }
void NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS(int p0) { invoke<void*>(0xE6B90E9C, p0); }
void NETWORKCASH::NETWORK_EARN_FROM_PROPERTY(int p0, int p1) { invoke<void*>(0x9BE4F7E1, p0, p1); }
void NETWORKCASH::_0x866004A8(int p0, int p1) { invoke<void*>(0x866004A8, p0, p1); }
void NETWORKCASH::_0xCC068380(int p0) { invoke<void*>(0xCC068380, p0); }
void NETWORKCASH::NETWORK_EARN_FROM_ROCKSTAR(int p0) { invoke<void*>(0x5A3733CC, p0); }
void NETWORKCASH::NETWORK_EARN_FROM_VEHICLE(int p0, int p1) { invoke<void*>(0xF803589D, p0, p1); }
void NETWORKCASH::_0x96B8BEE8(int p0, int p1) { invoke<void*>(0x96B8BEE8, p0, p1); }
void NETWORKCASH::NETWORK_SPENT_TAXI(int p0, int p1, int p2) { invoke<void*>(0x1F3DB3E3, p0, p1, p2); }
void NETWORKCASH::_0xBE70849B(int p0, int p1, int p2) { invoke<void*>(0xBE70849B, p0, p1, p2); }
void NETWORKCASH::_0x451A2644(int p0, int p1, int p2) { invoke<void*>(0x451A2644, p0, p1, p2); }
void NETWORKCASH::_0x224A3488(int p0, int p1, int p2, int p3) { invoke<void*>(0x224A3488, p0, p1, p2, p3); }
void NETWORKCASH::NETWORK_SPENT_BETTING(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xF8A07513, p0, p1, p2, p3, p4); }
void NETWORKCASH::_0x8957038E(int p0, int p1, int p2, int p3) { invoke<void*>(0x8957038E, p0, p1, p2, p3); }
void NETWORKCASH::NETWORK_BUY_HEALTHCARE(int p0, int p1, int p2) { invoke<void*>(0x832150E5, p0, p1, p2); }
void NETWORKCASH::NETWORK_BUY_AIRSTRIKE(int p0, int p1, int p2) { invoke<void*>(0x40470683, p0, p1, p2); }
void NETWORKCASH::_0x047547D4(int p0, int p1, int p2) { invoke<void*>(0x047547D4, p0, p1, p2); }
void NETWORKCASH::NETWORK_SPENT_AMMO_DROP(int p0, int p1, int p2) { invoke<void*>(0x4B643076, p0, p1, p2); }
void NETWORKCASH::NETWORK_BUY_BOUNTY(int p0, int p1, int p2, int p3) { invoke<void*>(0xCB89CBE0, p0, p1, p2, p3); }
void NETWORKCASH::NETWORK_BUY_PROPERTY(int p0, int p1, int p2, int p3) { invoke<void*>(0x7D479AAB, p0, p1, p2, p3); }
void NETWORKCASH::NETWORK_SPENT_HELI_PICKUP(int p0, int p1, int p2) { invoke<void*>(0x27EEBCAB, p0, p1, p2); }
void NETWORKCASH::NETWORK_SPENT_BOAT_PICKUP(int p0, int p1, int p2) { invoke<void*>(0xB241CABD, p0, p1, p2); }
void NETWORKCASH::_0xDE7D398C(int p0, int p1, int p2) { invoke<void*>(0xDE7D398C, p0, p1, p2); }
void NETWORKCASH::NETWORK_SPENT_CASH_DROP(int p0, int p1, int p2) { invoke<void*>(0x87BD1D11, p0, p1, p2); }
void NETWORKCASH::_0xE792C4A5(int p0, int p1, int p2) { invoke<void*>(0xE792C4A5, p0, p1, p2); }
void NETWORKCASH::_0xE6AAA0D5(int p0, int p1, int p2) { invoke<void*>(0xE6AAA0D5, p0, p1, p2); }
void NETWORKCASH::_0x99CF02C4(int p0, int p1, int p2) { invoke<void*>(0x99CF02C4, p0, p1, p2); }
void NETWORKCASH::_0x20DDCF2F(int p0, int p1, int p2) { invoke<void*>(0x20DDCF2F, p0, p1, p2); }
void NETWORKCASH::_0x2F7836E2(int p0, int p1, int p2) { invoke<void*>(0x2F7836E2, p0, p1, p2); }
void NETWORKCASH::NETWORK_SPENT_CARWASH(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x8283E028, p0, p1, p2, p3, p4); }
void NETWORKCASH::NETWORK_SPENT_CINEMA(int p0, int p1, int p2, int p3) { invoke<void*>(0x1100CAF5, p0, p1, p2, p3); }
void NETWORKCASH::NETWORK_SPENT_TELESCOPE(int p0, int p1, int p2) { invoke<void*>(0xAE7FF044, p0, p1, p2); }
void NETWORKCASH::NETWORK_SPENT_HOLDUPS(int p0, int p1, int p2) { invoke<void*>(0x1B3803B1, p0, p1, p2); }
void NETWORKCASH::_0x7E97C92C(int p0, int p1, int p2) { invoke<void*>(0x7E97C92C, p0, p1, p2); }
void NETWORKCASH::_0x78436D07(int p0, int p1, int p2) { invoke<void*>(0x78436D07, p0, p1, p2); }
void NETWORKCASH::_0x5AEE2FC1(int p0, int p1, int p2) { invoke<void*>(0x5AEE2FC1, p0, p1, p2); }
void NETWORKCASH::_0x54198922(int p0, int p1, int p2) { invoke<void*>(0x54198922, p0, p1, p2); }
void NETWORKCASH::_0x3D96A21C(int p0, int p1, int p2, int p3) { invoke<void*>(0x3D96A21C, p0, p1, p2, p3); }
void NETWORKCASH::_0x2E51C61C(int p0, int p1, int p2) { invoke<void*>(0x2E51C61C, p0, p1, p2); }
void NETWORKCASH::_0xD57A5125(int p0, int p1, int p2) { invoke<void*>(0xD57A5125, p0, p1, p2); }
void NETWORKCASH::_0xD9622D64(int p0, int p1, int p2, int p3) { invoke<void*>(0xD9622D64, p0, p1, p2, p3); }
int NETWORKCASH::_0x16184FB5() { return invoke<int>(0x16184FB5); }
int NETWORKCASH::_0x4F5B781C(int p0) { return invoke<int>(0x4F5B781C, p0); }
int NETWORKCASH::_0xADF8F882() { return invoke<int>(0xADF8F882); }
int NETWORKCASH::NETWORK_CAN_RECEIVE_PLAYER_CASH(int p0, int p1, int p2, int p3) { return invoke<int>(0x41F5F10E, p0, p1, p2, p3); }

int DLC1::_0x71D0CF3E(int p0) { return invoke<int>(0x71D0CF3E, p0); }
int DLC1::_0x2E9D628C(int p0, int p1, int p2) { return invoke<int>(0x2E9D628C, p0, p1, p2); }
void DLC1::INIT_SHOP_PED_COMPONENT(int p0) { invoke<void*>(0xB818C7FC, p0); }
void DLC1::INIT_SHOP_PED_PROP(int p0) { invoke<void*>(0xF5659E50, p0); }
int DLC1::_0xC937FF3D(int p0, int p1, int p2, int p3) { return invoke<int>(0xC937FF3D, p0, p1, p2, p3); }
int DLC1::_0x594E862C(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x594E862C, p0, p1, p2, p3, p4, p5); }
void DLC1::GET_SHOP_PED_QUERY_COMPONENT(int p0, int p1) { invoke<void*>(0xC0718904, p0, p1); }
void DLC1::GET_SHOP_PED_COMPONENT(int p0, int p1) { invoke<void*>(0xB39677C5, p0, p1); }
void DLC1::GET_SHOP_PED_QUERY_PROP(int p0, int p1) { invoke<void*>(0x1D3C1466, p0, p1); }
void DLC1::GET_SHOP_PED_PROP(int p0, int p1) { invoke<void*>(0xDB0A7A58, p0, p1); }
int DLC1::_0xC8A4BF12(int p0, int p1, int p2, int p3) { return invoke<int>(0xC8A4BF12, p0, p1, p2, p3); }
int DLC1::_0x7D876DC0(int p0, int p1, int p2, int p3) { return invoke<int>(0x7D876DC0, p0, p1, p2, p3); }
int DLC1::_0x159751B4(int p0) { return invoke<int>(0x159751B4, p0); }
void DLC1::_0xE4FF7103(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0xE4FF7103, p0, p1, p2, p3, p4); }
int DLC1::_0xCE70F183(int p0) { return invoke<int>(0xCE70F183, p0); }
int DLC1::_0xC560D7C0(int p0) { return invoke<int>(0xC560D7C0, p0); }
void DLC1::GET_FORCED_COMPONENT(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x382C70BE, p0, p1, p2, p3, p4); }
void DLC1::GET_FORCED_PROP(int p0, int p1, int p2, int p3, int p4) { invoke<void*>(0x22DAE257, p0, p1, p2, p3, p4); }
int DLC1::_0x8E2C7FD5(int p0, int p1, int p2) { return invoke<int>(0x8E2C7FD5, p0, p1, p2); }
int DLC1::_0x1ECD23E7(int p0, int p1) { return invoke<int>(0x1ECD23E7, p0, p1); }
void DLC1::GET_SHOP_PED_QUERY_OUTFIT(int p0, int p1) { invoke<void*>(0x2F8013A1, p0, p1); }
void DLC1::_0xCAFE9209(int p0, int p1) { invoke<void*>(0xCAFE9209, p0, p1); }
int DLC1::GET_SHOP_PED_OUTFIT_PROP(int p0, int p1) { return invoke<int>(0x6C767148, p0, p1); }
int DLC1::_0x2798F56F(int p0) { return invoke<int>(0x2798F56F, p0); }
int DLC1::GET_SHOP_PED_OUTFIT_COMPONENT(int p0, int p1) { return invoke<int>(0x99EE4570, p0, p1); }
int DLC1::_0x6641A864(int p0, int p1, int p2) { return invoke<int>(0x6641A864, p0, p1, p2); }
int DLC1::_0x818534AC(int p0, int p1, int p2) { return invoke<int>(0x818534AC, p0, p1, p2); }
int DLC1::GET_NUM_DLC_VEHICLES() { return invoke<int>(0x8EAF9CF6); }
int DLC1::GET_DLC_VEHICLE_MODEL(int p0) { return invoke<int>(0xA2201E09, p0); }
int DLC1::GET_DLC_VEHICLE_DATA(int p0, int p1) { return invoke<int>(0xCF428FA4, p0, p1); }
int DLC1::GET_DLC_VEHICLE_FLAGS(int p0) { return invoke<int>(0xAB12738C, p0); }
int DLC1::_0x2B757E6C() { return invoke<int>(0x2B757E6C); }
int DLC1::GET_DLC_WEAPON_DATA(int p0, int p1) { return invoke<int>(0xD88EC8EA, p0, p1); }
int DLC1::_0x476B23A9(int p0) { return invoke<int>(0x476B23A9, p0); }
int DLC1::GET_DLC_WEAPON_COMPONENT_DATA(int p0, int p1, int p2) { return invoke<int>(0x4B83FCAF, p0, p1, p2); }
int DLC1::_0x06396058(int p0) { return invoke<int>(0x06396058, p0); }
int DLC1::_0x35BCA844(int p0) { return invoke<int>(0x35BCA844, p0); }
int DLC1::_0x59352658(int p0) { return invoke<int>(0x59352658, p0); }

int IS_DLC_PRESENT(int DlcHash) { return invoke<int>(0x1F321943, DlcHash); }
int DLC2::_0x881B1FDB() { return invoke<int>(0x881B1FDB); }
int DLC2::_0xC2169164() { return invoke<int>(0xC2169164); }
int DLC2::_0xF79A97F5() { return invoke<int>(0xF79A97F5); }
int DLC2::_0xF69B729C() { return invoke<int>(0xF69B729C); }
int DLC2::_0x517B601B() { return invoke<int>(0x517B601B); }
int DLC2::_0x6087C10C(int p0, int p1) { return invoke<int>(0x6087C10C, p0, p1); }

void SYSTEM::WAIT(int ms) { invoke<void*>(0x7715C03B, ms); }
int SYSTEM::START_NEW_SCRIPT(char* ScriptName, int StackSize) { return invoke<int>(0x3F166D0E, ScriptName, StackSize); }
int SYSTEM::START_NEW_SCRIPT_WITH_ARGS(char* ScriptName, int Args, int ArgCount, int StackSize) { return invoke<int>(0x4A2100E4, ScriptName, Args, ArgCount, StackSize); }
int SYSTEM::_NULL_START_NEW_SCRIPT(int p0, int StackSize) { return invoke<int>(0x8D15BE5D, p0, StackSize); }
int SYSTEM::_NULL_START_NEW_SCRIPT_WITH_ARGS(int p0, int p1, int p2, int p3) { return invoke<int>(0xE38A3AD4, p0, p1, p2, p3); }
int SYSTEM::TIMERA() { return invoke<int>(0x45C8C188); }
int SYSTEM::TIMERB() { return invoke<int>(0x330A9C0C); }
void SYSTEM::SETTIMERA(int TimerA) { invoke<void*>(0x35785333, TimerA); }
void SYSTEM::SETTIMERB(int TimerB) { invoke<void*>(0x27C1B7C6, TimerB); }
float SYSTEM::TIMESTEP() { return invoke<float>(0x50597EE2); }
float SYSTEM::SIN(float p0) { return invoke<float>(0xBF987F58, p0); }
float SYSTEM::COS(float p0) { return invoke<float>(0x00238FE9, p0); }
float SYSTEM::SQRT(float p0) { return invoke<float>(0x145C7701, p0); }
float SYSTEM::POW(float base, float exponent) { return invoke<float>(0x85D134F8, base, exponent); }
float SYSTEM::VMAG(float p0, float p1, float p2) { return invoke<float>(0x1FCF1ECD, p0, p1, p2); }
float SYSTEM::VMAG2(float p0, float p1, float p2) { return invoke<float>(0xE796E629, p0, p1, p2); }
float SYSTEM::VDIST(float X1, float Y1, float Z1, float X2, float Y2, float Z2) { return invoke<float>(0x3C08ECB7, X1, Y1, Z1, X2, Y2, Z2); }
float SYSTEM::VDIST2(float X1, float Y1, float Z1, float X2, float Y2, float Z2) { return invoke<float>(0xC85DEF1F, X1, Y1, Z1, X2, Y2, Z2); }
int SYSTEM::SHIFT_LEFT(int Value, int BitShift) { return invoke<int>(0x314CC6CD, Value, BitShift); }
int SYSTEM::SHIFT_RIGHT(int Value, int BitShift) { return invoke<int>(0x352633CA, Value, BitShift); }
int SYSTEM::FLOOR(float Value) { return invoke<int>(0x32E9BE04, Value); }
int SYSTEM::CEIL(float Value) { return invoke<int>(0xD536A1DF, Value); }
int SYSTEM::ROUND(float Value) { return invoke<int>(0x323B0E24, Value); }
float SYSTEM::TO_FLOAT(int Value) { return invoke<float>(0x67116627, Value); }

int _0xBBAEEF94(int p0, int p1, int p2) { return invoke<int>(0xBBAEEF94, p0, p1, p2); }
int DECORATOR::_0x8E101F5C(int p0, int p1, int p2) { return invoke<int>(0x8E101F5C, p0, p1, p2); }
int DECORATOR::_0xDB718B21(int p0, int p1, int p2) { return invoke<int>(0xDB718B21, p0, p1, p2); }
int DECORATOR::_0xDBCE51E0(int p0, int p1) { return invoke<int>(0xDBCE51E0, p0, p1); }
int DECORATOR::_0xDDDE59B5(int p0, int p1) { return invoke<int>(0xDDDE59B5, p0, p1); }
int DECORATOR::_0x74EF9C40(int p0, int p1) { return invoke<int>(0x74EF9C40, p0, p1); }
int DECORATOR::_0xE0E2640B(int p0, int p1) { return invoke<int>(0xE0E2640B, p0, p1); }
void DECORATOR::_0x68BD42A9(int p0, int p1) { invoke<void*>(0x68BD42A9, p0, p1); }
int DECORATOR::_0x7CF0971D(int p0, int p1) { return invoke<int>(0x7CF0971D, p0, p1); }
void DECORATOR::_0x7F3F1C02() { invoke<void*>(0x7F3F1C02); }

int UNK_SC::_0x6BE5DF29() { return invoke<int>(0x6BE5DF29); }
int UNK_SC::_0x5ECF955D(int p0) { return invoke<int>(0x5ECF955D, p0); }
int UNK_SC::_0xD1ED1D48(int p0) { return invoke<int>(0xD1ED1D48, p0); }
int UNK_SC::_0x19EE0CCB(int p0) { return invoke<int>(0x19EE0CCB, p0); }
int UNK_SC::SC_INBOX_MESSAGE_GET_DATA_INT(int p0, int p1, int p2) { return invoke<int>(0x88068C7C, p0, p1, p2); }
int UNK_SC::SC_INBOX_MESSAGE_GET_DATA_FLOAT(int p0, int p1, int p2) { return invoke<int>(0x6A67FC31, p0, p1, p2); }
int UNK_SC::SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, int p1, int p2) { return invoke<int>(0x15607620, p0, p1, p2); }
int UNK_SC::_0xEBE420A4(int p0) { return invoke<int>(0xEBE420A4, p0); }
int UNK_SC::_0x2C959AF9(int p0) { return invoke<int>(0x2C959AF9, p0); }
void UNK_SC::_0x0B9A3512(int p0) { invoke<void*>(0x0B9A3512, p0); }
void UNK_SC::_0x75324674(int p0) { invoke<void*>(0x75324674, p0); }
int UNK_SC::SC_INBOX_MESSAGE_GET_UGCDATA(int p0, int p1) { return invoke<int>(0x88CA3BFC, p0, p1); }
int UNK_SC::_0x628F489B(int p0) { return invoke<int>(0x628F489B, p0); }
int UNK_SC::_0xAB3346B5(int p0, int p1) { return invoke<int>(0xAB3346B5, p0, p1); }
void UNK_SC::_0x095D5EBD(int p0, int p1) { invoke<void*>(0x095D5EBD, p0, p1); }
int UNK_SC::_0xDB75CDD1() { return invoke<int>(0xDB75CDD1); }
int UNK_SC::_0xC98160E1(int p0, int p1) { return invoke<int>(0xC98160E1, p0, p1); }
void UNK_SC::_0x2B240E0A(int p0, int p1) { invoke<void*>(0x2B240E0A, p0, p1); }
void UNK_SC::_0x9A703A2B(int p0) { invoke<void*>(0x9A703A2B, p0); }
void UNK_SC::_0xD094F11A() { invoke<void*>(0xD094F11A); }
void UNK_SC::_0xAF3C081B(int p0) { invoke<void*>(0xAF3C081B, p0); }
void UNK_SC::_0x2FB9F53C(int p0) { invoke<void*>(0x2FB9F53C, p0); }
int UNK_SC::_0x6C5738AB() { return invoke<int>(0x6C5738AB); }
int UNK_SC::_0x468668F0() { return invoke<int>(0x468668F0); }
int UNK_SC::_0x90C74343(int p0, int p1) { return invoke<int>(0x90C74343, p0, p1); }
int UNK_SC::_0x3ACE6D6B(int p0, int p1) { return invoke<int>(0x3ACE6D6B, p0, p1); }
int UNK_SC::_0x579B4510(int p0, int p1) { return invoke<int>(0x579B4510, p0, p1); }
int UNK_SC::_0xDF45B2A7(int p0) { return invoke<int>(0xDF45B2A7, p0); }
int UNK_SC::_0xDF084A6B(int p0, int p1) { return invoke<int>(0xDF084A6B, p0, p1); }
int UNK_SC::_0xFFED3676(int p0) { return invoke<int>(0xFFED3676, p0); }
int UNK_SC::_0xA796D7A7(int p0) { return invoke<int>(0xA796D7A7, p0); }
int UNK_SC::_0x09497F31(int p0) { return invoke<int>(0x09497F31, p0); }
int UNK_SC::_0x4D8A6521(int p0) { return invoke<int>(0x4D8A6521, p0); }
int UNK_SC::_0x7AA36406(int p0, int p1) { return invoke<int>(0x7AA36406, p0, p1); }
int UNK_SC::_0xF379DCE4(int p0) { return invoke<int>(0xF379DCE4, p0); }
int UNK_SC::_0x65D84665(int p0) { return invoke<int>(0x65D84665, p0); }
int UNK_SC::_0xD268255C(int p0) { return invoke<int>(0xD268255C, p0); }
int UNK_SC::_0xC96456BA() { return invoke<int>(0xC96456BA); }
int UNK_SC::_0x8E7AEEB7(int p0) { return invoke<int>(0x8E7AEEB7, p0); }
int UNK_SC::_0xE778B2A7(int p0, int p1, int p2) { return invoke<int>(0xE778B2A7, p0, p1, p2); }
int UNK_SC::_0xCE7D50A8(int p0, int p1, int p2) { return invoke<int>(0xCE7D50A8, p0, p1, p2); }
int UNK_SC::_0xD26CCA46(int p0, int p1) { return invoke<int>(0xD26CCA46, p0, p1); }
int UNK_SC::_0xA3EFE4A1(int p0) { return invoke<int>(0xA3EFE4A1, p0); }
int UNK_SC::_0x24D84334(int p0) { return invoke<int>(0x24D84334, p0); }
int UNK_SC::_0x8A023024(int p0, int p1) { return invoke<int>(0x8A023024, p0, p1); }
int UNK_SC::_0x1C65B038() { return invoke<int>(0x1C65B038); }
int UNK_SC::_0x4D4C37B3() { return invoke<int>(0x4D4C37B3); }
int UNK_SC::_0xAED95A6F(int p0, int p1) { return invoke<int>(0xAED95A6F, p0, p1); }
void UNK_SC::_0x486867E6() { invoke<void*>(0x486867E6); }


int UNK::_RETURN_ZERO() { return invoke<int>(0x106C8317); }
int UNK::_RETURN_ZERO2() { return invoke<int>(0xD87F3A9E); }
void UNK::_0xC0B971EA(int b) { invoke<void*>(0xC0B971EA, b); }
int UNK::_0x94BCAC7C() { return invoke<int>(0x94BCAC7C); }
void UNK::_0x7D90EEE5(int p0) { invoke<void*>(0x7D90EEE5, p0); }
int UNK::_0x734CFEDA() { return invoke<int>(0x734CFEDA); }
void UNK::_0x8C227332(int p0) { invoke<void*>(0x8C227332, p0); }
void UNK::_0x5C350D78(int p0) { invoke<void*>(0x5C350D78, p0); }