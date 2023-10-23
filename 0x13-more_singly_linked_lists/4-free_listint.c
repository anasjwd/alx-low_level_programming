#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: the head.
 */
void free_listint(listint_t *head)
{
	listint_t *node = head;
	listint_t *_node;

	while (node != NULL)
	{
		_node = node;
		node = node->next;
		free(_node);
	}
}
