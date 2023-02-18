#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	char z;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
	}
	for (z = 'a' ;  z <= 'f' ; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
