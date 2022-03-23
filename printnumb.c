#include "main.h"

/**
 * print_int - Print integers numbers
 * @list: Parameters
 * d: Variable
 * Return: 1 no errors
 */

int print_int(va_list list)
{
	int arr[10];
	int d = va_arg(list, int);
	int n = 1000000000;
	int iter, cont = 0, sum;

	arr[0] = d / n;
	for (iter = 1; iter < 10; iter++)
	{
		n /= 10;
		arr[iter] = (d / n) % 10;
	}
	if (d < 0)
	{
		_putchar('-');
		cont++;
		for (iter = 0; iter < 10; iter++)
		{
			arr[iter] *= -1;
		}
	}
	for (iter = 0, sum = 0; iter < 10 ; iter++)
	{
		sum += arr[iter];
		if (sum != 0 || iter == 9)
		{
			_putchar('0' + arr[iter]);
			cont++;
		}
	}
	return (cont);
}
