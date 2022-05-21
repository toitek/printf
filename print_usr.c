#include "main.h"
/**
 * print_usr - prints a string and values of
 * non-printed chars
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 */
int print_usr(va_list arguments, char *buf, unsigned int ibuff)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int i, sum, op;

	str = va_arg(arguments, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			ibuff = buffer_handler(buf, '\\', ibuff);
			ibuff = buffer_handler(buf, 'x', ibuff);
			op = str[i];
			binary = binary_array(binary, op, 0, 32);
			hexadecimal = hex_array(binary, hexadecimal, 1, 8);
			ibuff = buffer_handler(buf, hexadecimal[6], ibuff);
			ibuff = buffer_handler(buf, hexadecimal[7], ibuff);
			sum += 3;
		}
		else
			ibuff = buffer_handler(buf, str[i], ibuff);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
