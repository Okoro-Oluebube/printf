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
 * Return: Integer
 */
int _printf(const char *format, ...)
{
	va_list fList;
	int len = 0;

	va_start(fList, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			format++;
			len++;
		}
		else if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				print_c(fList);
			}
			else if (*format == 's')
			{
				print_s(fList);
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				len++;
			}
			format++;
		}
	}
	va_end(fList);
	return (len);
}
