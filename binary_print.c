#include "main.h"

/**
 * binary_print - prints decimal in binary
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed.
 * designed by WANDHE and NGANGA
 */
int binary_print(va_list arguments, char *buf, unsigned int ibuff)
{
	int int_inp, count, i, first_one, negative;
	char *binary;

	int_inp = va_arg(arguments, int);
	negative = 0;
	if (int_inp == 0)
	{
		ibuff = buffer_handler(buf, '0', ibuff);
		return (1);
	}
	if (int_inp < 0)
	{
		int_inp = (int_inp * -1) - 1;
		negative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, int_inp, negative, 32);
	first_one = 0;
	for (count = i = 0; binary[i]; i++)
	{
		if (first_one == 0 && binary[i] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			ibuff = buffer_handler(buf, binary[i], ibuff);
			count++;
		}
	}
	free(binary);
	return (count);
}
