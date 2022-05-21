#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 * designed by WANDHE and NGANGA
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibufff = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				print_buf(buffer, ibufff), free(buffer), va_end(arguments);
				return (-1);
			}
			else
			{
				function = get_print_function(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					buffer_handler(buffer, format[i], ibufff), len++, i--;
				}
				else
				{
					len += function(arguments, buffer, ibufff);
					i += iden_return_function(format, i + 1);
				}
			}
			i++;
		}
		else
			buffer_handler(buffer, format[i], ibufff), len++;
		for (ibufff = len; ibufff > 1024; ibufff -= 1024)
			;
	}
	print_buf(buffer, ibufff), free(buffer), va_end(arguments);
	return (len);
}
