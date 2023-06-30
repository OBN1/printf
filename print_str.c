#include "main.h"

/**
 * print_str - This function writes the string to stdout
 * @arguments: This one inputs string
 * @buf: This is the buffer pointer
 * @ibuf: This is the index for buffer pointer
 * Return: 1 (success).
 */

int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuf = handl_buf(buf, str[i], ibuf);
	return (i);
}

