#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a position.
 * @head: pointer to the head.
 * @idx: the position.
 * @n: the data.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *_node;

	if (head == NULL)
		return (NULL);
	_node = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (i <= (idx - 2) && _node != NULL)
	{
		_node = _node->next;
		i++;
	}
	if (_node != NULL)
	{
		node->next = _node->next;
		_node->next = node;
		return (node);
	}
	return (NULL);
}
