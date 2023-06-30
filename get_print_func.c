#include "main.h"

/**
 * get_print_func - fuction selects correct function to perform the operation.
 * @s: this is the argument identifier
 * @index: this is the index for argument identifier
 * Return: this is the pointer to a function.
 */

int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_chr},
		{"s", print_str},
		{" %", print_prg},
		{NULL, NULL},
	};

	int i = 0, j = 0, first_index = index;

	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
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

	return (pr[i].f);
}

