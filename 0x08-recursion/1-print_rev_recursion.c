#include "main.h"
/**
 * _print_rev_recursion it Prints a string in reverse.
 * @s: The string to be printed.
 * by beki
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
