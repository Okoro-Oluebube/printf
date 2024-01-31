#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(char *s);
void print_s(va_list fList);
void print_c(va_list fList);
void print_b(va_list fList);



#endif
