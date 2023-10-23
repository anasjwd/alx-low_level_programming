#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at given index.
 * @head: pointer to te head.
 * @index: the index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *_node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (node != NULL && i <= (index - 1))
	{
		node = node->next;
		i++;
	}
	i = 0;
	while (i <= (index - 2))
	{
		_node = _node->next;
		i++;
	}
	if (node != NULL)
	{
		_node->next = node->next;
		free(node);
		return (1);
	}
	return (-1);
}
