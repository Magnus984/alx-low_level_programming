#include "lists.h"

/**
 * list_len - calculates number of elements
 * in list
 * @h: head pointer
 *
 * Return: number of elements in linked
 * list
 */
size_t list_len(const list_t *h)
{
	unsigned int list_len;
	const list_t *ptr;

	list_len = 0;
	if (h == NULL)
		return (list_len);
	ptr = h;
	while (ptr != NULL)
	{
		list_len++;
		ptr = ptr->next;
	}
	return (list_len);
}
