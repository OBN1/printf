#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointer to a printer function
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int ev_print_func(const char *s, int index);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
#endif
