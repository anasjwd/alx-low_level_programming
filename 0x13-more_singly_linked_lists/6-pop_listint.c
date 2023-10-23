#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the head.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	node = *head;
	n = node->n;
	*head = node->next;
	free(node);
	return (n);
}
