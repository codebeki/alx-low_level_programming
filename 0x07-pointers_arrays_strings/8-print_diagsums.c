#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, sum, ece;

	i = 0;
	sum = 0;
	ece = size * size;
	while (i < ece)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < ece)
	{
		if (i % (size - 1) == 0 && i != (ece - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
