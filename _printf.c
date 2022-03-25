#include "main.h"

/**
 * _printf - prints parameters
 * @format: writing format
 * i: iterator
 * Return: len
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i, len = 0;
	int (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
			continue;
		}
		if (format[i + 1] == '\0')
		{
			return (-1);
		}
		f = get_commands(format + i + 1);
		if (f != NULL)
		{
			len = len + f(list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			len++;/*contador de el numero de veces que se imprime*/
		}
	}
	va_end(list);
	return (len);/*retorna el numero de veces que se imprime*/
}
