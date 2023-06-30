#include "main.h"
#include <stdio.h>

/**
 * print_chr - function that writes the character c to stdout
 * @arguments: this is the input char
 * @buf: this is the buffer pointer
 * @ibuf: this is the index for buffer pointer
 * Return: 1 (success).
 */

int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buf, c, ibuf);

	return (1);
}

