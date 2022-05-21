#include "main.h"

/**
 * buffer_print - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 * designed by WANDHE and NGANGA
 */
int buffer_print(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
