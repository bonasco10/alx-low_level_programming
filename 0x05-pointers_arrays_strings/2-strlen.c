#include "main.h"
/**
 * _strlen - returns lenght of a string
 * @s: string parapmeter
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
