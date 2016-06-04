#ifndef UTILS_H
#define UTILS_H
#include "Includes.h"

#define TOC 0x1C85330

void sleep(usecond_t time = 100);
int console_write(const char* s);
void PatchInJump(int Address, int Destination);
float fmod_(float a, float b);
void itoa(char* str, int num);
void fntos(char* buffer, float input);
char* ftos(float input);
float round_(float x);
void null();

typedef struct opd_s {
	int a, toc;
} opd_t;

#define RUN_MODULE(name, start) \
		SYS_MODULE_INFO(name, 0, 1, 1); \
		SYS_MODULE_START(start);

class Debug {
public:
	void Write(char* input);
	void WriteLine(char* input = "");
	void operator <<(char* input);
};
sys_ppu_thread_t new_thread(void(*method)(uint64_t));

void wrap_num(float* x, float min, float max);
template<typename T>
void wrap_num(T* ptr, T min, T max) {
	T range = max - min + 1;
	if (*ptr < min) *ptr += range * ((min - *ptr) / range + 1);
		*ptr = min + (*ptr - min) % range;
}

typedef struct Vector3 {
	float x, y, z;
	operator float*() {
		static float farray[3];
		farray[0] = x;
		farray[1] = y;
		farray[2] = z;
		return farray;
	}
	Vector3(float* v) {
		x = v[0];
		y = v[1];
		z = v[2];
	}
} Vec3;

#endif // !UTILS_H