#include "main.h"
/**
 * print_last_digit - function tha prints last digit of a number
 *
 * @x: the function parameter
 *
 * Return: always x
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;

	if (x < 0)
	{
		y = -y;
	}
	return (y);
}
