#include "main.h"
/**
 * print_char - Function print a character
 * c: variable
 * @list: contains the list of arguments
 * Return: 1
 */

int print_char(va_list list) /*funcion va_list guarda los argumentos dados*/
{
	char c = va_arg(list, int);

	_putchar(c);

	return (1);
}
