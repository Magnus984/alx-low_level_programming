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
	
	len = 0;
	if (h == NULL)
		return (len);
	ptr = h;
	while (ptr != NULL)
	{
		len += 1;
		ptr = ptr->next;
	}
	return (len);
}
