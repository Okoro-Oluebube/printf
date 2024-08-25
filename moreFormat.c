#include "main.h"

/**
 * moreFormat - Handles format specifiers
 * @format: Pointer to the format pointer
 * @formatList: va_list
 */
void moreFormat(const char **format, va_list formatList)
{
	int len = 0;

	switch (**format)
	{
		case 'i':
		{
			print_integer(formatList, &len);
			(*format)++;
			break;
		}	
		default:
			len++;
			break;
	}
}
