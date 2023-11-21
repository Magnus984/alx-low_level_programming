#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * of a listint_t linked list
 * @head: address of head node
 * @index: position of node to be deleted
 *
 * Return: 1 if it succeedded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;

	current = *head;
	previous = *head;
	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
