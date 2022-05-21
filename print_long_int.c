#include "main.h"
/**
 * prinlint - prints a long integer
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed.
 * designed by WANDHE and NGANGA
 */
int prinlint(va_list arguments, char *buf, unsigned int ibuff)
{
	long int int_input;
	unsigned long int int_in, int_temp, i, div, isneg;

	int_input = va_arg(arguments, long int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuff = buffer_handler(buf, '-', ibuff);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuff = buffer_handler(buf, ((int_in / div) % 10) + '0', ibuff);
	}
	return (i + isneg);
}
