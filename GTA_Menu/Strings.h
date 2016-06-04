#ifndef STRINGC_H
#define STRINGC_H

typedef class string {
private:
	char _string[0x25];
public:
	string(char* a = "");
	string(const char* a = "");
	string(int a);
	string(float a);
	string(double a);
	string(bool a);
	int length();
	operator char*();
	operator const char*();
	string operator +(const string str2);
	string operator +=(const string str2);
	string operator =(const string str2);
	bool operator ==(const string str2);
	bool operator ==(const char* str2);
	bool contains(const string str2);
	char operator [](const int x);
} string_t;

#endif // !STRINGC_H