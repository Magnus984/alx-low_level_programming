#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given
 * position
 * @h: address of the head node
 * @idx: position in which node will be inserted
 * @n: number to be put into node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *travPtr, *temp, *insertPtr;

	if (idx < dlistint_len(*h))
	{
		insertPtr = malloc(sizeof(dlistint_t));
		if (!insertPtr)
			return (NULL);
		insertPtr->prev = NULL;
		insertPtr->n = n;
		insertPtr->next = NULL;
		if (idx == 0)
		{
			insertPtr->next = *(h);
			(*h)->prev = insertPtr;
			*h = insertPtr;
			return (insertPtr);
		}
		else if (idx > 1)
		{
			travPtr = *h;
			while (idx != 1)
			{
				travPtr = travPtr->next;
				idx--;
			}
			temp = travPtr->next;
			travPtr->next = insertPtr;
			insertPtr->prev = travPtr;
			insertPtr->next = temp;
			temp->prev = insertPtr;
			return (insertPtr);
		}
	}
	return (NULL);
}
/**
 * dlistint_len - calculates number of elements in
 * a doubly linked list
 * @h: head node
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *travPtr;
	size_t nodeNum = 0;

	travPtr = h;
	while (travPtr != NULL)
	{
		nodeNum++;
		travPtr = travPtr->next;
	}
	return (nodeNum);
}
