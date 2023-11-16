#include "lists.h"

/**
 * print_list - prints all elements of
 * a list_t list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int node_number;
	const list_t *ptr;

	node_number = 0;
	if (h == NULL)
		return (node_number);
	ptr = h;
	while (ptr != NULL)
	{
		char *str = ptr->str;

		if (str == NULL)
			printf("[%u] (nil)\n", ptr->len);
		else
			printf("[%u] %s\n", ptr->len, str);
		node_number += 1;
		ptr = ptr->next;
	}
	return (node_number);
}
