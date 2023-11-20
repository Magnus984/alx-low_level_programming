#include "lists.h"

/**
 * listint_len - computes number of elements in a
 * linked list
 * @h: head node/pointer
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len;
	const listint_t *ptr;

	if (h == NULL)
		exit(EXIT_FAILURE);
	ptr = h;
	len = 0;
	while (ptr != NULL)
	{
		len += 1;
		ptr = ptr->next;
	}
	return (len);
}
