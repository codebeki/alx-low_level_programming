#include "stdio.h"
#include "lists.h"

/**
 * free_listint - frees all the node in a list.
 * @head: the pointer to a list.
 * by beki
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}

