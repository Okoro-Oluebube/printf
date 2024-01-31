#include "main.h"
#include <stddef.h>

/**
 * printf_c - Produces character output
 * @c: Character
 * @fList: Va list
 */
void printf_c(va_list fList, char c)
{
	char c = va_arg(fList, int);

	if (c == NULL)
	{
		return (NULL);
	}
	else if (c == '%%c')
	{
		return ('%c');
	}
	else
	{
		return (c);
	}
}
