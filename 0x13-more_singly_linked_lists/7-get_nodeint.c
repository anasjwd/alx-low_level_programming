#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list.
 * @head: the head.
 * @index: the index.
 *
 * Return: the nth node of the listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i <= (index - 1); i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	return (node);
}
