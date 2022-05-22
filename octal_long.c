#include "main.h"
/**
 * octal_long - prints long decimal number in octal
 * @arguments: input number
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed.
 * designed by WANDHE and NGANGA
 */
int octal_long(va_list arguments, char *buf, unsigned int ibuff)
{
	long int int_input, i, isneg, count, first_digit;
	char *octal, *binary;

	int_input = va_arg(arguments, long int);
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

	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_array(binary, int_input, isneg, 64);
	octal = malloc(sizeof(char) * (22 + 1));
	octal = long_octal_array(binary, octal);
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
	return (count);
}
