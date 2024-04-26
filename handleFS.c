#include "main.h"

/**
 * handle_f_s - Handles format specifiers s , c and %
 * @format: Pointer to the format pointer
 * @formatList: va_list
 */
void handle_f_s(const char **format, va_list formatList)
{
	 int len = 0;
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
			print_percent(&len);
			break;
		}
		default:
			len++;
			break;
	}
}
