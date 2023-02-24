#include "main.h"
/**
 * _islower - function to print lowercase letters
 *
 * @c:parameter to be printed
 *
 * Return: if if successful
 * and 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
