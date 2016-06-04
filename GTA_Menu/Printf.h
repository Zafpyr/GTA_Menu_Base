#ifndef PRINTF_H
#define PRINTF_H

#include <cell/cell_fs.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <inttypes.h>
#include <stddef.h>
#include <stdint.h>

#define PRINTF_MAX	128

#define VA_START(ap, last) va_start(ap, last)
#define VA_SHIFT(ap, value, type)

#define ULLONG unsigned long long int
#define UINTMAX_MAX ULLONG_MAX
#define UINTMAX_T ULLONG
#define LLONG long long int
#define INTMAX_T LLONG
#define UINTPTR_T unsigned long int
#define PTRDIFF_T long int
#define UPTRDIFF_T PTRDIFF_T
#define SSIZE_T size_t

#define MAX_CONVERT_LENGTH      43
#define PRINT_S_DEFAULT         0
#define PRINT_S_FLAGS           1
#define PRINT_S_WIDTH           2
#define PRINT_S_DOT             3
#define PRINT_S_PRECISION       4
#define PRINT_S_MOD             5
#define PRINT_S_CONV            6
#define PRINT_F_MINUS           (1 << 0)
#define PRINT_F_PLUS            (1 << 1)
#define PRINT_F_SPACE           (1 << 2)
#define PRINT_F_NUM             (1 << 3)
#define PRINT_F_ZERO            (1 << 4)
#define PRINT_F_QUOTE           (1 << 5)
#define PRINT_F_UP              (1 << 6)
#define PRINT_F_UNSIGNED        (1 << 7)
#define PRINT_F_TYPE_G          (1 << 8)
#define PRINT_F_TYPE_E          (1 << 9)
#define PRINT_C_CHAR            1
#define PRINT_C_SHORT           2
#define PRINT_C_LONG            3
#define PRINT_C_LLONG           4
#define PRINT_C_SIZE            6
#define PRINT_C_PTRDIFF         7
#define PRINT_C_INTMAX          8

#ifndef MAX
#define MAX(x, y) ((x >= y) ? x : y)
#endif
#ifndef CHARTOINT
#define CHARTOINT(ch) (ch - '0')
#endif
#ifndef ISDIGIT
#define ISDIGIT(ch) ('0' <= (unsigned char)ch && (unsigned char)ch <= '9')
#endif

#define OUTCHAR(str, len, size, ch) \
	do { \
		if (len + 1 < size) str[len] = ch; \
		(len)++; \
	} while (0)

#include <string.h>
namespace std
{
	static void fmtstr(char *, size_t *, size_t, const char *, int, int, int);
	static void fmtint(char *, size_t *, size_t, INTMAX_T, int, int, int, int);
	static void printsep(char *, size_t *, size_t);
	static int getnumsep(int);
	static int convert(UINTMAX_T, char *, size_t, int, int);
	int vsnprintf(char *str, size_t size, const char *format, va_list args);
	static void fmtstr(char *str, size_t *len, size_t size, const char *value, int width, int precision, int flags);
	static void fmtint(char *str, size_t *len, size_t size, INTMAX_T value, int base, int width, int precision, int flags);
	static void printsep(char *str, size_t *len, size_t size);
	static int getnumsep(int digits);
	static int convert(UINTMAX_T value, char *buf, size_t size, int base, int caps);
	int vsprintf(char *buf, const char *fmt, va_list args);
	int sprintf(char *buffer, const char *fmt, ...);
	int snprintf(char *buffer, size_t len, const char *fmt, ...);
	int printf(const char *fmt, ...);
};

#endif