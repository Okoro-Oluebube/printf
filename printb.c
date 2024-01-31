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
	int i, j, k = 0, R;

	for (i = 0; num != 0; i++)
	{
		R = num % 2;
		num /= 2;
		d[i] = R;
	}
	d[i + 1] = 1;
	for (j = i; j <= 0; j--)
	{
		d[j] = s[k];
		write(1, s[k] + '0', 1);
	}
}
