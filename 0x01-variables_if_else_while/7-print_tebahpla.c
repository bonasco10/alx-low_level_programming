#include <stdio.h>

/**
 * main - Is the main function
 *
 * Return: is always 0
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
