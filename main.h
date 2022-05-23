#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_a;

int _printf(const char *format, ...);
int char_c(va_list __attribute__((unused)), char *, unsigned int);
int char_print(va_list arguments, char *buf, unsigned int ibuff);
int string_print(va_list arguments, char *buf, unsigned int ibuff);
int integer_print(va_list arguments, char *buf, unsigned int ibuff);
int binary_print(va_list arguments, char *buf, unsigned int ibuff);
int unsign_int(va_list arguments, char *buf, unsigned int ibuff);
int dec_oct(va_list arguments, char *buf, unsigned int ibuff);
int dec_hex(va_list arguments, char *buf, unsigned int ibuff);
int upx_print(va_list arguments, char *buf, unsigned int ibuff);
int usr_print(va_list arguments, char *buf, unsigned int ibuff);
int address_printer(va_list arguments, char *buf, unsigned int ibuff);
int rev_print(va_list arguments, char *buf, unsigned int ibuff);
int rot_print(va_list arguments, char *buf, unsigned int ibuff);
int long_int_print(va_list arguments, char *buf, unsigned int ibuff);
int long_unsint(va_list arguments, char *buf, unsigned int ibuff);
int octal_long(va_list arguments, char *buf, unsigned int ibuff);
int long_hex_print(va_list arguments, char *buf, unsigned int ibuff);
int long_dec_hex(va_list arguments, char *buf, unsigned int ibuff);
int short_integer_print(va_list arguments, char *buf, unsigned int ibuff);
int short_unsint_print(va_list arguments, char *buf, unsigned int ibuff);
int short_octal_print(va_list arguments, char *buf, unsigned int ibuff);
int short_hexadecimal_print(va_list arguments, char *buf, unsigned int ibuff);
int short_upx_print(va_list arguments, char *buf, unsigned int ibuff);
int plus_int(va_list arguments, char *buf, unsigned int ibuff);
int octal_print(va_list arguments, char *buf, unsigned int ibuff);
int hex_print(va_list arguments, char *buf, unsigned int ibuff);
int upper_hex(va_list arguments, char *buf, unsigned int ibuff);
int space_int_print(va_list arguments, char *buf, unsigned int ibuff);
int (*get_print(const char *s, int index))(va_list, char *, unsigned int);
int iden_return_function(const char *s, int ind);
unsigned int buffer_handler(char *buf, char c, unsigned int ibuff);
int buffer_print(char *buf, unsigned int nbuf);
char *binary_array(char *binary, long int int_in, int isneg, int limit);
char *octal_array(char *bnr, char *oct);
char *long_octal_array(char *bnr, char *oct);
char *short_oct_array(char *bnr, char *oct);
char *char_array(char *bnr, char *hex, int isupp, int limit);

#endif