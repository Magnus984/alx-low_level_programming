#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a
 * dlistint_t linked list
 * @head: head pointer
 * @index: node index
 *
 * Return: nth node of a dlistint_t linked list
 * or NULL if node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodeNum;
	dlistint_t *ptr = head;

	nodeNum = 0;
	while (ptr != NULL)
	{
		if (nodeNum == index)
			return (ptr);
		ptr = ptr->next;
		nodeNum += 1;
	}
	return (NULL);
}
