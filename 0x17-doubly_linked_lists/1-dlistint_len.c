#include "lists.h"

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
