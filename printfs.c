#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * printf_s - Prints strings in custom printf
 * @s: string to be printed
 * @fList: Va list
 */
int printf_s(va_list fList)
{
	char *s = va_arg(fList, char *);
	int len;

	if (s == NULL)
	{
		return (-1);
	}
	/**
	 * else
	*{
		*else if (*s == '%%s')
		*{
			*putchar(s + '0');
		*}
		*else if (*s == '\0')
		*{
			*return (s);
		*}
		*else
		*{
			*return (-2);
		*}
	*}
	*for (i = 0; i < s; i++)
	*{
		*i = _strlen(s);
		*len += i;
	*}
	*/
	else
	{
		len = _strlen(s);
		write(1, s, len);
	}
	return (len);
}
