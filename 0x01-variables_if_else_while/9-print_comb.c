#include <stdio.h>

/**
 * main - Is the main function
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
	}
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
	}
	else
		putchar('\n');
	return (0);
}
