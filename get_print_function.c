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
		{"c", char_print},
		{"s", print_str},
		{"i", integer_print},
		{"d", integer_print},
		{"b", binary_print},
		{"u", print_unt},
		{"o", dec_oct},
		{"x", dec_hex},
		{"X", print_upx},
		{"S", print_usr},
		{"p", address_printer},
		{"li", long_int_print},
		{"ld", long_int_print},
		{"lu", long_unsint},
		{"lo", octal_long},
		{"lx", long_hex_print},
		{"lX", long_dec_hex},
		{"hi", prinhint},
		{"hd", prinhint},
		{"hu", prinhunt},
		{"ho", prinhoct},
		{"hx", prinhhex},
		{"hX", prinhupx},
		{"#o", octal_print},
		{"#x", hex_print},
		{"#X", upper_hex},
		{"#i", integer_print},
		{"#d", integer_print},
		{"#u", print_unt},
		{"+i", plus_int},
		{"+d", plus_int},
		{"+u", print_unt},
		{"+o", dec_oct},
		{"+x", dec_hex},
		{"+X", print_upx},
		{" i", prinsint},
		{" d", prinsint},
		{" u", print_unt},
		{" o", dec_oct},
		{" x", dec_hex},
		{" X", print_upx},
		{"R", rot_print},
		{"r", rev_print},
		{"%", char_c},
		{"l", char_c},
		{"h", char_c},
		{" +i", plus_int},
		{" +d", plus_int},
		{"+ i", plus_int},
		{"+ d", plus_int},
		{" %", char_c},
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
