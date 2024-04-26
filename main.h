#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list formatList, int *len);
void print_string(va_list formatList, int *len);
void print_percent(int *len);
void handle_f_s(const char **format, va_list formatList);

#endif
