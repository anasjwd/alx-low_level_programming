#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the head.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	list_t *node;
	int num = 0;

	node = (list_t *)h;
	while (node != NULL)
	{
		if (node->str)
			printf("[%u] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");
		num++;
		node = node->next;
	}
	return (num);
}
