#include "main.h"
/**
 * prinlunt - prints a long unsigned integer
 * @arguments: number to print
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed.
 * designed by WANDHE and NGANGA
 */
int prinlunt(va_list arguments, char *buf, unsigned int ibuff)
{
	unsigned long int int_in, int_temp, i, div;

	int_in = va_arg(arguments, unsigned long int);
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
