#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(char *s);

/**
 * struct fm - A struct fm
 * @fm: The format specifier
 * @p: The function pointed to
 */

typedef struct fm
{
	char *fm;
	int (*p)(const char *format, ...);
} fmt;

#endif
