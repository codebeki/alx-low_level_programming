#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 * by beki
 */
void print_chessboard(char (*a)[8])
{
	int jit1, jit2;

	for (jit1 = 0; a[jit1][7]; jit1++)
	{
		for (jit2 = 0; jit2 < 8; jit2++)
			_putchar(a[jit1][jit2]);

		_putchar('\n');
	}
}
