#include "main.h"

/**
* _printf - Custom printf function
* @format: printf format argument
* Return: 0 Always on success
*/
int _printf(const char *format, ...)
{
	va_list formatList;
	int len = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(formatList, format);
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
			handle_f_s(&format, formatList);
		}
	}
	va_end(formatList);
	return (len);
}
