#include "main.h"

/**
 * print_all - print all numbers
 * @n: Variable
 * Return: Numbers
 */

void print_all(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
	{
		n = n;
	}
	if (n != 0)
	{
		if (n / 10)
		{
			print_all(n / 10);
		}
		_putchar((n % 10) + '0');
	}
	else
		_putchar(n + '0');
}
