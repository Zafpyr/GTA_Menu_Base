#include "Utils.h"
#include "Strings.h"

void sleep(usecond_t time)
{
	sys_timer_usleep(time * 1000);
}
int console_write(const char * s)
{
	uint32_t len;
	system_call_4(403, 0, (uint64_t)s, strlen(s), (uint64_t)&len);
	return_to_user_prog(int);
}
int32_t write_process_dex(void* destination, const void* source, size_t size)
{
	system_call_4(905, (uint64_t)sys_process_getpid(), (uint64_t)destination, (uint64_t)size, (uint64_t)source);
	return_to_user_prog(int32_t);
}
void write_process(void* destination, const void* source, size_t size)
{
	write_process_dex(destination, source, size);
}
void PatchInJump(int Address, int Destination)
{
	int FuncBytes[4];
	Destination = *(int*)Destination;
	FuncBytes[0] = 0x3D600000 + ((Destination >> 16) & 0xFFFF);
	if (Destination & 0x8000) FuncBytes[0] += 1;
	FuncBytes[1] = 0x396B0000 + (Destination & 0xFFFF);
	FuncBytes[2] = 0x7D6903A6;
	FuncBytes[3] = 0x4E800420;
	write_process((void*)Address, FuncBytes, 4 * 4);
}
double ipow(int base, int exp) {
	bool flag = 0;
	if (exp<0) { flag = 1; exp *= -1; }
	int result = 1;
	while (exp) {
		if (exp & 1) result *= base;
		exp >>= 1;
		base *= base;
	}
	if (flag == 0) return result;
	else return (1.0 / result);
}
void str_reverse(char str[], int length) {
	int start = 0;
	int end = length - 1;
	while (start < end)
	{
		std::swap(*(str + start), *(str + end));
		start++;
		end--;
	}
}
int _Snprintf[2] = { 0x14FE110, TOC };
int(*_snprintf)(char * s, size_t n, const char * format, ...) = (int(*)(char*, size_t, const char*, ...))&_Snprintf;
void itoa(char* str, int num) {
	_snprintf(str, sizeof(str), "%i", num);
}
void fntos(char* buffer, float input) {
	_snprintf(buffer, sizeof(buffer), "%f", input);
}
char* ftos(float input) {
	static char returnvalue[10];
	fntos(returnvalue, input);
	return returnvalue;
}
float fmod_(float a, float b) {
	int result = static_cast<int>(a / b);
	double mod = a - static_cast<float>(result) * b;
	return mod;
}
void wrap_num(float* x, float min, float max) {
	float m = max + 1 - min;
	*x = min + fmod_(m + fmod_(*x - min, m), m);
}
double floor_(double x) {
	return (double)(x < 0.0f ? ((int)x) - 1 : (int)x);
}
float round_(float x) {
	return (float)floor_(10 * x + 0.5f) / 10;
}
void null() { return; }
void Debug::Write(char* a) {
	console_write(a);
}
void Debug::WriteLine(char* a) {
	Write(a);
	Write("\n");
}
void Debug::operator <<(char* a) {
	Write(a);
}
sys_ppu_thread_t new_thread(void(*method)(uint64_t)) {
	sys_ppu_thread_t t_id;
	sys_ppu_thread_create(&t_id, method, 0, 0x10, 0x10, 0, "");
	return t_id;
}