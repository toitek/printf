#include "main.h"
/**
 * iden_return_function- returns the amount of identifiers.
 * @s: argument indentifier
 * @ind: index of argument identifier.
 * Return: amount of identifiers.
 * designed by WANDHE and NGANGA
 */
int iden_return_function(const char *s, int ind)
{
	print_a pt[] = {
		{"c", char_print},
		{"s", print_str},
		{"i", integer_print},
		{"d", integer_print},
		{"b", binary_print},
		{"u", print_unt},
		{"o", print_oct},
		{"x", hex_print},
		{"X", print_upx},
		{"S", print_usr},
		{"p", address_printer},
		{"li", prinlint},
		{"ld", prinlint},
		{"lu", prinlunt},
		{"lo", prinloct},
		{"lx", long_hex_print},
		{"lX", prinlupx},
		{"hi", prinhint},
		{"hd", prinhint},
		{"hu", prinhunt},
		{"ho", prinhoct},
		{"hx", prinhhex},
		{"hX", prinhupx},
		{"#o", prinnoct},
		{"#x", prinnhex},
		{"#X", prinnupx},
		{"#i", integer_print},
		{"#d", integer_print},
		{"#u", print_unt},
		{"+i", prinpint},
		{"+d", prinpint},
		{"+u", print_unt},
		{"+o", print_oct},
		{"+x", hex_print},
		{"+X", print_upx},
		{" i", prinsint},
		{" d", prinsint},
		{" u", print_unt},
		{" o", print_oct},
		{" x", hex_print},
		{" X", print_upx},
		{"R", print_rot},
		{"r", print_rev},
		{"%", print_prg},
		{"l", print_prg},
		{"h", print_prg},
		{" +i", prinpint},
		{" +d", prinpint},
		{"+ i", prinpint},
		{"+ d", prinpint},
		{" %", print_prg},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = ind;
	while (pt[i].type_arg)
	{
		if (s[ind] == pt[i].type_arg[j])
		{
			if (pt[i].type_arg[j + 1] != '\0')
				ind++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			ind = first_index;
		}
	}
	return (j);
}
