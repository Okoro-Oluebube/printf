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
	int len = 0, i;

	va_start(fList, format);
	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
	{
		return (-1);
	}
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
				printf_c(c);
				write(1, &c, 1);
				len++;
			}
			else if (*format == 's')
			{
				printf_s(s);
				write(1, s, i);
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				len++;
			}
			else
			{
				format--;
				write(1, format, 1);
			}
			format++;
		}
	}
	va_end(fList);
	return (len);
}
