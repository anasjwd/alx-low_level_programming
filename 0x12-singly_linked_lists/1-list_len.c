#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: the head.
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	list_t *node;
	int num = 0;

	node = (list_t *)h;
	while (node != NULL)
	{
		num++;
		node = node->next;
	}
	return (num);
}
