#include "stdio.h"
#include "lists.h"

/**
 * listint_len -  it returns the lenth of a list;
 * @h:  the pointer to the head of a list.
 *
 * Return: Length (INT) of a list.
 * by beki
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}

