#include "main.h"
/**
 * reverse_array - reverse arry of integers
 * @a: arry
 * @n: number of elements in arry
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
