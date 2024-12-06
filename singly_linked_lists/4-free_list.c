#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Description: This function iterates
 * through a singly linked list
 * of type list_t, freeing both the
 * dynamically allocated strings
 * stored in each node and the nodes
 * themselves. It continues until
 * the entire list is completely freed,
 * preventing any memory leaks.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
