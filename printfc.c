#include "main.h"
#include <stddef.h>

/**
 * printf_c - Produces character output
 * @c: Character
 * @fList: Va list
 */
int printf_c(va_list fList)
{
	int len;
	char c = va_arg(fList, int);

	len = 0;
	/**
	 * if (c == NULL)
	*{
		*return (NULL);
	*}
	*else if (c == '%%c')
	*{
		*return ('%c');
	*}
	*else
	*{
		*return (c);
	*}
	*/
	write(1, &c, 1);
	len++;
	return (len);
}
