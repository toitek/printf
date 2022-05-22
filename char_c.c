#include "main.h"
#include <stdio.h>
/**
 * char_c - writes the character c to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 * designed by WANDHE and NGANGA
 */
int char_c(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	buffer_handler(buf, '%', i);

	return (1);
}
