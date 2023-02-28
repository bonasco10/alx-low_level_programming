#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: interger parameter 1
 * @b: interger parameter 2
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
