#include "main.h"

/**
 * binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @intin: input number
 * @is_it_neg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 * designed by WANDHE and NGANGA
 */
char *binary_array(char *binary, long int intin, int is_it_neg, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		binary[i] = '0';
	binary[limit] = '\0';
	for (i = limit - 1; intin > 1; i--)
	{
		if (intin == 2)
			binary[i] = '0';
		else
			binary[i] = (intin % 2) + '0';
		intin /= 2;
	}
	if (intin != 0)
		binary[i] = '1';
	if (is_it_neg)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
	}
	return (binary);
}
