#include "main.h"

/**
 * handle_f_s - Handles format specifiers s , c and %
 * @format: Pointer to the format pointer
 * @formatList: va_list
 */
void handle_f_s(const char **format, va_list formatList)
{
	int len = 0;
	char next_char = '\0';

	switch (**format)
	{
		case 'c':
		{
			print_char(formatList, &len);
			(*format)++;
			break;
		}
		case 's':
		{
			print_string(formatList, &len);
			(*format)++;
			break;
		}
		case '%':
		{
			(*format)++;
			next_char = **format;
			if (next_char == '%')
			{
				_putchar('%');
			}
			else
				print_percent(&len);
			break;
		}
		case 'd':
		{
			print_int(formatList, &len);
			(*format)++;
			break;
		}
		default:
			len++;
			break;
	}
}
