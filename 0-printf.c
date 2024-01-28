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

	while (s != '\0')
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

	va_start(fList, format);
	while (format != '\0')
	{
		if (format == '%')
		{
			*(++format);
			if (format == 'c')
			{
				vprintf("format, va_arg(fList, char *)");
			}
			else if (format == 's')
			{
				vprintf("format, va_arg(fList, char *)");
			}
			else if (format == '%')
			{
				vprintf("format, va_arg(fList, char *)");
			}
		}
		vprintf("format, fList");
		va_end(fList);
	}
	len = _strlen(format);
	return (len);
}
