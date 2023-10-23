#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of the list.
 * @head: the head.
 *
 * Return: the sum of all the data (n) of the list.
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
