#include "main.h"
/**
 * _printf - Produces output for format d & i
 * @format: Format specifier
 * Return: Integer
 */
int _printf(const char *format, ...)
{
	va_list fList;
	int len = _strlen, i;

	va_start(fList, format);
	while (*format != NULL)
	{
		if (*format != %)
		{
			write(1, format, 1);
			format++;
		}
		else if (*format == '%')
		{
			for (i = 0; i < format; i++;)
			{
				format[i]++;
				if (format[i] == d)
				{
					int d = va_arg(fList, int);

					write(1, d, 1);
					len++;
				}
				else if (format[i] == 'i')
				{
					int i = va_arg(fList, int);

					write(1, i, 1);
					len++;
				}
				else
				{
					write(1, format, 1);
					len++;
				}
				format++;
			}
		}
	}
	va_end(fList);
	return (i);
}
