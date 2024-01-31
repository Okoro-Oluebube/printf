#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * printf_s - Prints strings in custom printf
 * @s: string to be printed
 * @fList: Va list
 */
void printf_s(va_list fList, char *s)
{
	char *s = va_arg(fList, char *);
	int len = 0;

	if (*s == NULL)
	{
		return (-1);
	}
	else
	{
		else if (*s == '%%s')
		{
			putchar(s + '0');
		}
		else if (*s == '\0')
		{
			return (s);
		}
		else
		{
			return (-2);
		}
	}
	for (; i < s; i++)
	{
		i = _strlen(s);
		len += i;
	}
}
