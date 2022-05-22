#include "main.h"
/**
 * long_hex_print - prints a long decimal in hexadecimal
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 * designed by WANDHE and NGANGA
 */
int long_hex_print(va_list arguments, char *buf, unsigned int ibuff)
{
	long int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(arguments, long int);
	isnegative = 0;
	if (int_input == 0)
	{
		ibuff = buffer_handler(buf, '0', ibuff);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}

	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_array(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 0, 16);
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
	return (count);
}
