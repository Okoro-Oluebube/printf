#include "main.h"
/**
 * print_c --Formats the 'c' specifier.
 * @fList: Var arg.
 * Return: Nothing.
 */
void print_c(va_list fList)
{
	char c = va_arg(fList, int);

	write(1, &c, 1);
}
