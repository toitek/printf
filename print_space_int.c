#include "main.h"
/**
 * prinsint - prints int begining with space
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 * designed by WANDHE and NGANGA
 */
int prinsint(va_list arguments, char *buf, unsigned int ibuf)
{
	int int_input;
	unsigned int int_in, int_temp, i, div;

	int_input = va_arg(arguments, int);
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = buffer_handler(buf, '-', ibuf);
	}
	else
	{
		int_in = int_input;
		ibuf = buffer_handler(buf, ' ', ibuf);
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
		ibuf = buffer_handler(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i + 1);
}
