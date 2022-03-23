#include "main.h"
/**
 * get_format - entry point
 * @i: variable
 * @s: pointer
 * Return: NULL
 */
int (*get_format(const char *s))(va_list)
{
	print_f print[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pc},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};

	int i;

	for (i = 0; print[i].format != NULL; i++)
	{
		if (*s == *print[i].format)
		{
			return (print[i].f);
		}
	}
	return (NULL);
}
