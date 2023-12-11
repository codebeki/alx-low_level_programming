#include "lists.h"
#include <stdio.h>

/**
 * listint_len -   the function that returns the number of elements in,
 * @h: pointer to the head of linked list.
 *
 * Return: number of elements.
 * by beki
 */

size_t listint_len(const listint_t *h)
{
	size_t jit = 0;

	while (h != NULL)
	{
		h = h->next;
		jit++;
	}
	return (jit)
}
