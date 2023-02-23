#include "main.h"
/**
 * print_alphabet - prints the alphabets ten times.
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	int x;
	char y;

	for (x = 1 ; x <= 10 ; x++)
	{
		for (y = 'a' ; y <= 'z' ; y++)
			_putchar(y);
		_putchar('\n');
	}
}
