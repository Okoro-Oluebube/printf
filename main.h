#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(char *s);
int printf_s(va_list fList);
int printf_c(va_list flist);
void printf_nums(va_list fList);

#endif
