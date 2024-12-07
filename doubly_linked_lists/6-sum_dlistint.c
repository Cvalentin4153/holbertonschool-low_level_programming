#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) in a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 *
 * Description:
 * Traverses the doubly linked list, summing up all the integer data
 * (n) in the nodes. If the list is empty, it returns 0.
 *
 * Return: Sum of all the data in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
