#include "main.h"
/**
 * prinhunt - prints a short unsigned integer
 * @arguments: number to print
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed.
 * designed by WANDHE and NGANGA
 */
int prinhunt(va_list arguments, char *buf, unsigned int ibuff)
{
	unsigned short int int_in, int_temp, i, div;

	int_in = va_arg(arguments, unsigned int);

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
	return (i);
}
