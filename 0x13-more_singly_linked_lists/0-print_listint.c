#include "stdio.h"
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the head of linked list.
 *
 * You are allowed to use printf.
 *
 * Return: all the elements of the list.
 * by beki
 */
size_t print_listint(const listint_t *h)
{
	size_t bek = 0;

	while (h)
	{
		printf("%d\n", h->n);
		bek++;
		h = h->next;
	}

	return (bek);
}
