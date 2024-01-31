#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(char *s);
void printf_s(va_list fList, char *s);

#endif
