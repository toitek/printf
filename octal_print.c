#include "main.h"
/**
 * octal_print - print the number in octal begining with zero
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 * designed by WANDHE and NGANGA
 */
int octal_print(va_list arguments, char *buf, unsigned int ibuff)
{
	int int_input, i, isneg, count, first_digit;
	char *octal, *binary;

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
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, int_input, isneg, 32);
	octal = malloc(sizeof(char) * (11 + 1));
	octal = octal_array(binary, octal);
	for (first_digit = i = count = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuff = buffer_handler(buf, octal[i], ibuff);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count + 1);
}
