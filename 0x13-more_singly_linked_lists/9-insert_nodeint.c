#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position.
 * @head: address of head node
 * @idx: index of new node
 * @n: number to be placed in new node
 *
 * Return: the address of new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node_number;
	unsigned int index;
	listint_t *ptr, *ptr2;

	node_number = 0;
	while (*head == NULL)
		return (NULL);
	/*traversing the list to get node number*/
	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		node_number += 1;
	}
	index = 0;
	ptr = *head;
	ptr2 = malloc(sizeof(listint_t));
	ptr2->n = n;
	while (index < (idx - 1))
	{
		if (idx > node_number || idx == 0)
			return (NULL);
		ptr = ptr->next;
		index++;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
