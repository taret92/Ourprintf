#include "main.h"
/**
 * print_string - funtion print string
 * @list: variable
 * a: iterador
 * s: pointer
 * Return: a
 */
int print_string(va_list list) /*guarda las strings dadas*/
{
	int a; /*declaramos iterador*/
	char *s = va_arg(list, char *); /*se le asigna un argumento*/

	if (s == NULL) /*condicion de comparacion al NULL*/
	{
		s = "(null)"; /*retorna al NULL si se cumple condicion*/
	}
	for (a = 0; s[a] != '\0'; a++) /*recorremos la string*/
	{
		_putchar (s[a]);
	}
	return (a); /*imprime iterador*/
}
