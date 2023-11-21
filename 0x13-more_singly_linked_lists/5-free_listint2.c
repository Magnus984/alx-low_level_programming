#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: address of head node
 *
 * Return: no return value.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *ptr;

	current = *head;
	while (current != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
	*head = NULL;
}
