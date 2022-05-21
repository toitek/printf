#include "main.h"

/**
 * print_rev - writes the str in reverse
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed.
 * designed by WANDHE and NGANGA
 */
int print_rev(va_list arguments, char *buf, unsigned int ibuff)
{
	char *str;
	unsigned int i;
	int j = 0;
	char nill[] = "(llun)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuff = buffer_handler(buf, nill[i], ibuff);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		ibuff = buffer_handler(buf, str[j], ibuff);
	}
	return (i);
}
