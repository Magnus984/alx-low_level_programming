#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of
 * a list
 * @head: Address of head node
 * @n: integer to put into node
 *
 * Return: address of the new element, or NULL
 * if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newPtr = malloc(sizeof(dlistint_t));

	if (!newPtr)
		return (NULL);
	newPtr->prev = NULL;
	newPtr->n = n;
	newPtr->next = NULL;
	if (*head == NULL)
	{
		*head = newPtr;
		return (newPtr);
	}
	newPtr->next = *(head);
	(*head)->prev = newPtr;
	*head = newPtr;
	return (newPtr);
}
