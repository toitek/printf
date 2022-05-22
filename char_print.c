#include "main.h"
#include <stdio.h>
/**
 * char_print - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: On success 1.
 * designed by WANDHE and NGANGA
 */
int char_print(va_list arguments, char *buf, unsigned int ibuff)
{
	char c;

	c = va_arg(arguments, int);
	buffer_handler(buf, c, ibuff);

	return (1);
}
