#include "lists.h"

/**
 * print_listint - prints all the elements of
 * a listint_t list.
 * @h: head node.
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int node_num;
	const listint_t *ptr;

	node_num = 0;
	if (h == NULL)
		return (node_num);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		node_num += 1;
	}
	return (node_num);
}

