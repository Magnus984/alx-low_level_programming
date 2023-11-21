#include "lists.h"

/**
 * sum_listint - sum of all the data(n) of a
 * listint_t linked list.
 * @head: head node
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

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
