#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: the head.
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *node1;

	node = head;
	while (node != NULL)
	{
		node1 = node;
		node = node->next;
		free(node1->str);
		free(node1);
	}
}
