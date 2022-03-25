#include "main.h"
/**
 * print_string - funtion print string
 * @list: variable
 * a: iterador
 * s: pointer
 * Return: a
 */
int print_string(va_list list) 
{
	int a; 
	char *s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar (s[a]);
	}
	return (a);
}
