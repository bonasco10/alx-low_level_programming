#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number
 * Return: 1 when n > 0, 0 when n == 0 and -1 when n < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		 _putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}

