#include "lists.h"

/**
 * add_node_end - adds new node at the end of
 * a list_t list
 * @str: string parameter
 * @head: address of head pointer
 *
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(ptr->str);
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = ptr;
	}
	return (ptr);
}
