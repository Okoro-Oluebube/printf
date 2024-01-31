#include "main.h"
/**
 * print_s --Formats the 's' specifier.
 * @fList: Var arg.
 * Return: Nothing.
 */
void print_s(va_list fList)
{
	int i;
	char *s = va_arg(fList, char *);

	i = _strlen(s);
	write(1, s, i);
}
