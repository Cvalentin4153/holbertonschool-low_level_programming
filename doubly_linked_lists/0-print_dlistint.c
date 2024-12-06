#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Description: This function traverses
 * a doubly linked list starting
 * from the node pointed to by @h.
 * For each node, it prints the integer
 * stored in the node’s n field on its own line.
 * It continues until
 * it reaches the end of the list,
 * then returns the total number of nodes.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
