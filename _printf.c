#include "main.h"

/**
 * _printf - funcion para imprimir parametros
 * @format: formato a imprimir
 * @i: iterador
 * @return int
 */


int _printf(const char *format, ...);

va_list list;
	int i, len = 0;
	int (*f)(va_list);
	
	if (format == NULL) /*si es NULL retorna error*/
	{
		return (-1);
	}

	va_start(list, format);

	for (i = 0; format[i]; i++)
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
		f = get_format(format + i + 1);
		if (f != NULL)
		{
			len = len + f(list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			len++;//igual al numero de veces que se imprime
		}
	}
	va_end(list);
	return (len);//retorna el numero de veces que se imprime
