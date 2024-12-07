#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node, starting from 0
 *
 * Description:
 * This function traverses the list until it reaches the given index
 * or runs out of nodes. If it finds the node at that index, it returns
 * that node. Otherwise, it returns NULL.
 *
 * Return: The nth node of the list, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (count < index && head != NULL)
	{
		head = head->next;
		count++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
	
}
