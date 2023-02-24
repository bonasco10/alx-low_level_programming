#include "main.h"
/**
 * add - add two numbers
 *
 * @x: parameter 1
 * @y: parameter 2
 *
 * Return: sum
 */

int add(int x, int y)
{
	int sum;

	sum = x + y;
	_putchar(sum + '0');
	return (sum);
}
