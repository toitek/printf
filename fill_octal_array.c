#include "main.h"
/**
 * octal_array - writes the character c to stdout
 *
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 * designed by WANDHE and NGANGA
 */
char *octal_array(char *bnr, char *oct)
{
	int opr, i, j, octal, limit;

	oct[11] = '\0';
	for (i = 31, octal = 10; i >= 0; i--, octal--)
	{
		if (i > 1)
			limit = 4;
		else
			limit = 2;
		for (opr = 0, j = 1; j <= limit; j *= 2, i--)
			opr = ((bnr[i] - '0') * j) + opr;
		i++;
		oct[octal] = opr + '0';
	}
	return (oct);
}
