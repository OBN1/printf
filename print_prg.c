#include "main.h"
#include <stido.h>
/**
 * print_prg - Writes the character c to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 */
int print_prg(va_list a _attribute_((unused)), cgar *buf, unsigned int i)
{
	handl_buf(buf, '%', i);

	return (1);
}
