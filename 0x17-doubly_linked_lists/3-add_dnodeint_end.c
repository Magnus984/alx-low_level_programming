#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: address of head node
 * @n: number to put inside node
 *
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *travPtr;
	dlistint_t *endPtr = malloc(sizeof(dlistint_t));

	if (!endPtr)
		return (NULL);
	endPtr->prev = NULL;
	endPtr->n = n;
	endPtr->next = NULL;
	if (*head == NULL)
	{
		*head = endPtr;
		return (endPtr);
	}
	travPtr = *head;
	while (travPtr->next != NULL)
		travPtr = travPtr->next;
	travPtr->next = endPtr;
	endPtr->prev = travPtr;
	return (endPtr);
}
