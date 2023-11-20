#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a listint_t linked list.
 * @head: address of pointer to firstnode
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int temp_data;
	listint_t *temp_ptr, *ptr2;

	if (*head == NULL)
		return (0);
	ptr2 = *head;
	temp_data = ptr2->n;
	temp_ptr = ptr2->next;
	free(ptr2);
	*head = temp_ptr;
	return (temp_data);
}
