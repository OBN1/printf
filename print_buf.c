#include "main.h"

/**
 * print_buf - functions that prints buffer
 * @buf: this is the buffer pointer
 * @nbuf: this is the number of bytes to print
 * Return: returns number of bytes printed (success).
 */

int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}

