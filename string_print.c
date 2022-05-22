#include "main.h"

/**
 * string_print - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: On success 1.
 * designed by WANDHE and NGANGA
 */
int string_print(va_list arguments, char *buf, unsigned int ibuff)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuff = buffer_handler(buf, nill[i], ibuff);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuff = buffer_handler(buf, str[i], ibuff);
	return (i);
}
