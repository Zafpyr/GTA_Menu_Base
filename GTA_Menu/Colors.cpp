#include "Colors.h"

color_s black, white, red, green, blue, background_color, shader_color, pointer_color;
void init_colors() {
	black = color_s(0, 0, 0);
	white = color_s(255, 255, 255);
	red = color_s(255, 0, 0);
	green = color_s(0, 255, 0);
	blue = color_s(0, 0, 255);
	background_color = color_s(0x26, 0x26, 0x26, 200);
	shader_color = color_s(0x1A, 0x1A, 0x1A);
	pointer_color = black;
}