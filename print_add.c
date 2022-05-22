#include "main.h"
#include <stdio.h>
/**
 * print_add - prints the address of an input variable
 * @arguments: input address.
 * @buf: buffer pointer.
 * @ibuff: index for buffer pointer
 *
 * Return: number of chars printed.
 * designed by WANDHE and NGANGA
 */
int print_add(va_list arguments, char *buf, unsigned int ibuff)
{
	void *add;
	long int int_input;
	int i, count, first_digit, isnegative;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	add = (va_arg(arguments, void *));
	if (add == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuff = buffer_handler(buf, nill[i], ibuff);
		return (5);
	}
	int_input = (intptr_t)add;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_array(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = char_array(binary, hexadecimal, 0, 16);
	ibuff = buffer_handler(buf, '0', ibuff);
	ibuff = buffer_handler(buf, 'x', ibuff);
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
