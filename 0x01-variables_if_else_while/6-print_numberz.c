#include <stdio.h>

/**
 * main - is the main function
 *
 * Return: is always 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putcar(x + '0');
	}
	putchar('\n');
	return (0);
}
