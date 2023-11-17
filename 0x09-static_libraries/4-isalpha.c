#include "main.h"
/**
 * _isalpha - the  character is a alphabet character
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 * by beki
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
