#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the head.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	listint_t *node = (listint_t *)h;
	int num = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		num++;
		node = node->next;
	}
	return (num);
}
