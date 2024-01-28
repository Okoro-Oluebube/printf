#include "main.h"
#include <stdarg.h>

/**
 * _strlen - Number of char in a string
 * @s: String
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _printf - Produces output according to a format
 * @format: Format specifier
 * @...: Unknown arguments
 * Return: Integer
 */
int _printf(const char *format, ...)
{
	va_list fList;
	int len;
	int i = 0;

	va_start(fList, format);

	if (*format != '\0')
	{
		while (format[i])
		{
			if (i == 'c')
			{
				i = va_arg(fList, int);
					vprintf(i, fList);
			}
			if (i == 's')
			{
				i = va_arg(fList, char *);
					vprintf(i, fList);
			}
			if (i == '%')
				vprintf(i, fList);
		}
		va_end(fList);
	}
	len = _strlen(format);
	return (len);
}
