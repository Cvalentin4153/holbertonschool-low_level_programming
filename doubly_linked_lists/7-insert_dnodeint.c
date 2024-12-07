#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the doubly linked list
 * @idx: Index of the list where the new node should be added
 * @n: Integer value to store in the new node
 *
 * Description: If the index is 0, the function adds the node at the
 * beginning of the list. If the index is equal to the length of the
 * list, it appends the node at the end. Otherwise, it inserts the
 * node at the specified position.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int count = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL && count + 1 != idx)
	{
		return (NULL);
	}
	if (temp == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc (sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	if (temp->next !=  NULL)
	{
		temp->next->prev = new;
	}
	temp->next = new;
	return (new);
}
