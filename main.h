#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(char *s);
void printf_s(va_list fList, char *s);
void printf_c(va_list flist, char c);
void printf_nums(va_list fList, int num, unsigned int num);

#endif
