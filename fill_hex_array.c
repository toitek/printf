#include "main.h"
/**
 * fill_hexadecimal_array - writes the character c to stdout
 *
 * @binary: array where is stored the binary.
 * @hexadecimal: array where is stored the hexadecimaladecimal.
 * @is_uppercase: integer that determines if the hexadecimaladecimal array is
 * in uppercase or lowercase letter.
 * @limit: size of hexadecimal
 * Return: binary array.
 * designed by WANDHE and NGANGA
 */
char *fill_hexadecimal_array(char *binary, char *hexadecimal, int is_uppercase, int limit)
{
	int op, i, j, toletter;

	hexadecimal[limit] = '\0';
	if (is_uppercase)
		toletter = 55;
	else
		toletter = 87;
	for (i = (limit * 4) - 1; i >= 0; i--)
	{
		for (op = 0, j = 1; j <= 8; j *= 2, i--)
			op = ((binary[i] - '0') * j) + op;
		i++;
		if (op < 10)
			hexadecimal[i / 4] = op + 48;
		else
			hexadecimal[i / 4] = op + toletter;
	}
	return (hexadecimal);
}
