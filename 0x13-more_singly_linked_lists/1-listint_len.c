#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: the head.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	listint_t *node = (listint_t *)h;
	int num = 0;

	while (node != NULL)
	{
		num++;
		node = node->next;
	}
	return (num);
}
