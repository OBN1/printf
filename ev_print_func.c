#include "main.h"
/**
 * ev_print_func - Returns the amount fo identifies
 * @s: argument identifier
 * @index: index of argument identifier
 * Return: amount of indentifiers
 */
int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_chr},
		{"s", print_str},
		{" %", print_prg},
		{"%", print_prg},
		{"h", print_prg},
		{"l", print_prg}
	};
	int i = 0, j = 0, first_index;

	first_index = index;
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
	return (j);
}
