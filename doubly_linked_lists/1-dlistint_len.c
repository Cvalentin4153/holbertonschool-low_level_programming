#include "lists.h"
/**
 * dlistint_len - Returns the number of
 * elements in a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Description: This function iterates
 * through a doubly linked list
 * starting from the node pointed to by @h.
 * For each node encountered,
 * it increments a counter.
 * Once it reaches the end of the list, the
 * total count of nodes is returned.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
