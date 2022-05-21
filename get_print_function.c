#include "main.h"
/**
 * get_print_function - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 * designed by WANDHE and NGANGA
 */
int (*get_print_function(const char *s, int index))(va_list, char *, unsigned int)
{
	print_a pt[] = {
		{"c", print_chr},
		{"s", print_str},
		{"i", print_int},
		{"d", print_int},
		{"b", binary_print},
		{"u", print_unt},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_upx},
		{"S", print_usr},
		{"p", address_printer},
		{"li", prinlint},
		{"ld", prinlint},
		{"lu", prinlunt},
		{"lo", prinloct},
		{"lx", prinlhex},
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
		{"#i", print_int},
		{"#d", print_int},
		{"#u", print_unt},
		{"+i", prinpint},
		{"+d", prinpint},
		{"+u", print_unt},
		{"+o", print_oct},
		{"+x", print_hex},
		{"+X", print_upx},
		{" i", prinsint},
		{" d", prinsint},
		{" u", print_unt},
		{" o", print_oct},
		{" x", print_hex},
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

	first_index = index;
	while (pt[i].type_arg)
	{
		if (s[index] == pt[i].type_arg[j])
		{
			if (pt[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pt[i].f);
}
