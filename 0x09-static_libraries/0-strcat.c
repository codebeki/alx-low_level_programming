#include "main.h"
#include <stdio.h>

/**
 * _strcat -  concatenates two strings
 *
 * @dest: destnation
 * @srcc: source.
 *
 * Return: memory address of function (string)
 * by beki
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest++ = '\0';
	dest = tmp;
	return (dest);
}
