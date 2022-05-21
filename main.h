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
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuff);
int print_str(va_list arguments, char *buf, unsigned int ibuff);
int print_int(va_list arguments, char *buf, unsigned int ibuff);
int binary_print(va_list arguments, char *buf, unsigned int ibuff);
int print_unt(va_list arguments, char *buf, unsigned int ibuff);
int print_oct(va_list arguments, char *buf, unsigned int ibuff);
int print_hex(va_list arguments, char *buf, unsigned int ibuff);
int print_upx(va_list arguments, char *buf, unsigned int ibuff);
int print_usr(va_list arguments, char *buf, unsigned int ibuff);
int address_printer(va_list arguments, char *buf, unsigned int ibuff);
int print_rev(va_list arguments, char *buf, unsigned int ibuff);
int print_rot(va_list arguments, char *buf, unsigned int ibuff);
int prinlint(va_list arguments, char *buf, unsigned int ibuff);
int prinlunt(va_list arguments, char *buf, unsigned int ibuff);
int prinloct(va_list arguments, char *buf, unsigned int ibuff);
int prinlhex(va_list arguments, char *buf, unsigned int ibuff);
int prinlupx(va_list arguments, char *buf, unsigned int ibuff);
int prinhint(va_list arguments, char *buf, unsigned int ibuff);
int prinhunt(va_list arguments, char *buf, unsigned int ibuff);
int prinhoct(va_list arguments, char *buf, unsigned int ibuff);
int prinhhex(va_list arguments, char *buf, unsigned int ibuff);
int prinhupx(va_list arguments, char *buf, unsigned int ibuff);
int prinpint(va_list arguments, char *buf, unsigned int ibuff);
int prinnoct(va_list arguments, char *buf, unsigned int ibuff);
int prinnhex(va_list arguments, char *buf, unsigned int ibuff);
int prinnupx(va_list arguments, char *buf, unsigned int ibuff);
int prinsint(va_list arguments, char *buf, unsigned int ibuff);
int (*get_print_function(const char *s, int index))(va_list, char *, unsigned int);
int iden_return_function(const char *s, int ind);
unsigned int buffer_handler(char *buf, char c, unsigned int ibuff);
int print_buf(char *buf, unsigned int nbuf);
char *binary_array(char *binary, long int int_in, int isneg, int limit);
char *octal_array(char *bnr, char *oct);
char *long_octal_array(char *bnr, char *oct);
char *short_oct_array(char *bnr, char *oct);
char *hex_array(char *bnr, char *hex, int isupp, int limit);

#endif