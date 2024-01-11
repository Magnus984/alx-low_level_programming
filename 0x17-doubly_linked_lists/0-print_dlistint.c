#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *travPtr;
	size_t nodeNum = 0;

	travPtr = h;
	while (travPtr != NULL)
	{
		printf("%d\n", travPtr->n);
		nodeNum++;
		travPtr = travPtr->next;
	}
	return (nodeNum);
}
