#include "Huds.h"
#include "Natives.h"

void draw_text(char* text, int font, float size, float x, float y, color_s color, ALIGN_V align, int layer) {
	switch (align) {
		case center: UI::SET_TEXT_CENTRE(true); break;
		case right:
			UI::SET_TEXT_RIGHT_JUSTIFY(true); 
			UI::SET_TEXT_WRAP(0, x);
			x = 0;
			break;
		default:
			break;
	}
	UI::SET_TEXT_FONT(font);
	UI::SET_TEXT_SCALE(size, size);
	UI::SET_TEXT_COLOUR(color.r, color.g, color.b, color.a);
	UI::SET_TEXT_OUTLINE();
	UI::_SET_TEXT_ENTRY("STRING");
	UI::_ADD_TEXT_COMPONENT_STRING(text);
	GRAPHICS::_0xADF81D24(layer);
	UI::_DRAW_TEXT(x, y);
}
void draw_rect(float x, float y, float width, float height, color_s color, int layer) {
	GRAPHICS::_0xADF81D24(layer);
	GRAPHICS::DRAW_RECT(x, y, width, height, color.r, color.g, color.b, color.a);
}
void draw_sprite(char* textureDict, char* textureName, float x, float y, float width, float height, color_s color, float rotation, int layer)
{
	GRAPHICS::_0xADF81D24(layer);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(textureDict, false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(textureDict))
		GRAPHICS::DRAW_SPRITE(textureDict, textureName, x, y, width, height, rotation, color.r, color.g, color.b, color.a);
}