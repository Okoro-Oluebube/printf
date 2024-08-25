#include "main.h"
/**
 * numLen - Number of digits in a string
 * @digit: digit
 * @buffer: Pointer to hold digits bytes
 * Return: The length of the string representation
 */
int numLen(int digit, char *buffer)
{
	int j;
	int i = 0;
	int is_neg = 0;

	if (digit == 0)
	{
		buffer[i++] = '0';
		return (i);
	}

	if (digit < 0)
	{
		is_neg = 1;
		digit = -digit;
	}

	while (digit > 0)
	{
		buffer[i++] = (digit % 10) + '0'; /* Convert to string in reverse */
		digit /= 10;
	}

	if (is_neg)
		buffer[i++] = '-';

	/* Reverse the string to get the correct order */
	for (j = 0; j < i / 2; j++)
	{
		char temp = buffer[j];

		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = temp;
	}
	buffer[i] = '\0';
	return (i);
}
