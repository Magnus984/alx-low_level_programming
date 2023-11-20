#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head node
 *
 * Return: no return value.
 */
void free_listint(listint_t *head)
{
	listint_t *current, *ptr;

	current = head;
	while (current->next != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
	free(current);
}
