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
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
