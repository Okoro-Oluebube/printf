#include "main.h"
/**
 * print_b --Formats the 'b' specifier.
 * @fList: Var arg.
 * Return: Nothing.
 */
void print_b(va_list fList)
{
	int num = va_arg(fList, int);
	char *s;
	char *d;

