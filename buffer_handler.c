#include "main.h"

/**
 * buffer_handler - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @ibuff: index of buffer pointer
 * Return: index of buffer pointer.
 * designed by WANDHE and NGANGA
 */
unsigned int buffer_handler(char *buf, char c, unsigned int ibuff)
{
	if (ibuff == 1024)
	{
		buffer_print(buf, ibuff);
		ibuff = 0;
	}
	buf[ibuff] = c;
	ibuff++;
	return (ibuff);
}
