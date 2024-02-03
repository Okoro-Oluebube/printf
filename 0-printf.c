#include "main.h"
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
	int i, len = 0;

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
				char c = va_arg(fList, int);

				write(1, &c, 1);
				len++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(fList, char *);

				i = _strlen(s);
				write(1, s, i);
				len += i;
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
