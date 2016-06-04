#ifndef HUDS_H
#define HUDS_H

typedef struct color_s {
	int r, g, b, a;
	color_s(int r = 255, int g = 255, int b = 255, int a = 255) {
		this->r = r;
		this->g = g;
		this->b = b;
		this->a = a;
	}
} color_t;
enum ALIGN_V {
	left,
	center,
	right
};

void draw_text(char* text, int font, float size, float x, float y, color_s color, ALIGN_V align = left, int layer = 0);
void draw_rect(float x, float y, float width, float height, color_s color, int layer = 0);
void draw_sprite(char* textureDict, char* textureName, float x, float y, float width, float height, color_s color, float rotation = 0, int layer = 0);

#endif // !HUDS_H
