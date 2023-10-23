#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: the head.
 */
void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *_node;

	if (head == NULL || *head == NULL)
		return;
	while (node != NULL)
	{
		_node = node;
		node = node->next;
		free(_node);
	}
	*head = NULL;
}
