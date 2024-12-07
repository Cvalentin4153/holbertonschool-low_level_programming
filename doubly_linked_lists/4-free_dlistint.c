#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 *
 * Description: This function traverses a doubly linked list starting
 * at the node pointed to by @head, frees each node encountered, and
 * releases all allocated memory. After the function completes, no nodes
 * remain in the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
