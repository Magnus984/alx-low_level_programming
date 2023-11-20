#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a
 * listint_t linked list.
 * @head: head pointer
 * @index: node index
 *
 * Return: nth node of a listint_t linked list
 * or NULL if node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_number;
	listint_t *ptr = head;

	node_number = 0;
	while (ptr != NULL)
	{
		if (node_number == index)
			return (ptr);
		ptr = ptr->next;
		node_number += 1;
	}
	return (NULL);
}

