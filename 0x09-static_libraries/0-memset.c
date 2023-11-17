include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory area.
 * @b: parameter defined in main, constant byte
 * @n: parameter defined in main, number of bytes to be filled
 *
 * Return: The pointer  (memory area)
 * by  beki
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *tmp = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	s = tmp;
	return (s);
}
