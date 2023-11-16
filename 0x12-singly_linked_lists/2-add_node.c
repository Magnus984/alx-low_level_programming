#include "lists.h"

/**
 * add_node - adds a new node at the
 * beginning of a list_t list
 * @head: address of head pointer
 * @str: string to be duplicated
 * and added to node element
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
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
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
