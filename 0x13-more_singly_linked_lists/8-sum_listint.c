#include "stdio.h"
#include "lists.h"

/**
 * sum_listint -  the sum up all the value in each element of a listint_t
 * @head:  the pointer to the head of a list.
 *
 * Return: Sum (INT) else 0 if empty.
 * by beki
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

