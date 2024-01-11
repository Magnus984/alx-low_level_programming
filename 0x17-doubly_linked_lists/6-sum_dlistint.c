#include "lists.h"

/**
 * sum_dlistint - sum of all the data(n)
 * of a dlistint_t linked list.
 * @head: head node
 *
 * Return: sum of data or 0 if list it empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ptr;

	sum = 0;
	if (head == NULL)
		return (sum);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
