#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: parameter defined in main
 *
 * Return: length of string
 * by beki
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
