#include "main.h"
/**
 * hex_print - print number in hex begining with zero
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 * designed by WANDHE and NGANGA
 */
int hex_print(va_list arguments, char *buf, unsigned int ibuff)
{
	int int_input, i, isneg, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(arguments, int);
	isneg = 0;
	if (int_input == 0)
	{
		ibuff = buffer_handler(buf, '0', ibuff);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isneg = 1;
	}
	ibuff = buffer_handler(buf, '0', ibuff);
	ibuff = buffer_handler(buf, 'x', ibuff);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, int_input, isneg, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = char_array(binary, hexadecimal, 0, 8);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuff = buffer_handler(buf, hexadecimal[i], ibuff);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
