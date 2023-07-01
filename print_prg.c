#include "main.h"
#include <stdio.h>

/**
 * print_prg - function writes the character C to stdout
 * @buf: The buffer pointer
 * @i: This is the index for buffer pointer
 * Return: 1 (success).
 */

int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handl_buf(buf, '%', i);

	return (1);
}
