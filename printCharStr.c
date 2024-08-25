#include "main.h"

/**
 * print_char - Format specifier c
 * @formatList: Va list
 * @len: Length of char
 */
void print_char(va_list formatList, int *len)
{
	char c = va_arg(formatList, int);

	write(1, &c, 1);
	(*len)++;
}

/**
 * print_string - Format specifier s
 * @formatList: Va list
 * @len: Length of string
 */
void print_string(va_list formatList, int *len)
{
	int i = 0;
	char *s = va_arg(formatList, char *);

	i = _strlen(s);
	write(1, s, i);
	(*len) += i;
}

/**
 * print_percent - Format Specifier %
 * @len: Length
 */
void print_percent(int *len)
{
	write(1, "%", 1);
	(*len)++;
}

/**
 * print_int - Format specifier d
 * @formatList: Va list
 * @len: Length
 */
void print_int(va_list formatList, int *len)
{
	int d = va_arg(formatList, int);
	char buffer[22]; /* to hold 20 bytes, sign and null terminator */
	int length;

	length = numLen(d, buffer);
	write(1, buffer, length);
	(*len) += length;
}

/**
 * print_integer - Format specifier i
 * @formatList: Va list
 * @len: Length
 */
void print_integer(va_list formatList, int *len)
{
	int i = va_arg(formatList, int);
	char buffer[22]; /* to hold 20 bytes, sign and null terminator */
	int length;

	length = numLen(i, buffer);
	write(1, buffer, length);
	(*len) += length;
}
