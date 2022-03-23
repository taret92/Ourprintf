#include "main.h"

/**
 * print_dex - Print decimals numbers
 * @list: Parameters
 * d: Variable
 * Return: 1 no errors
 */

int print_dex(va_list list)
{
	int i = va_arg(list, int);

	print_all(i);
	return (1);
}
