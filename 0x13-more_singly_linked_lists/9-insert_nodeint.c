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
	listint_t *ptr, *ptr2;

	if (*head == NULL)
		return (NULL);
	ptr = *head;
	ptr2 = malloc(sizeof(listint_t));
	if (!ptr2)
		return (NULL);
	ptr2->n = n;
	if (idx == 1)
	{
		ptr2->next = ptr->next;
		ptr->next = ptr2;
		return (ptr2);
	}
	else if (idx != 1)
	{
		while (idx != 1)
		{
			ptr = ptr->next;
			idx--;
		}
		ptr2->next = ptr->next;
		ptr->next = ptr2;
		return (ptr2);
	}
	return (NULL);

}
