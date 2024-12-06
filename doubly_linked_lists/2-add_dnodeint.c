#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the
 * beginning of a dlistint_t list
 * @head: Double pointer to the head of
 * the doubly linked list
 * @n: Integer value to be stored in the new node
 *
 * Description: This function allocates memory
 * for a new node in a doubly
 * linked list, assigns the provided integer
 * value to it, and inserts it
 * at the beginning of the list.
 * If the list is not empty, it adjusts the
 * previous head’s prev pointer to point
 * to the new node. If memory
 * allocation fails, it returns NULL.
 *
 * Return: The address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t)); /*Creation of new node*/

	if (new == NULL) /*Return adress or NULL if it failed*/
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL; /*New node pointer prev points to NULL*/
	new->next = (*head)->next; /*New node next will point to head*/
	return (new);

	if (*head != NULL)
	{
		(*head)->prev = new; /*head prev points to new*/
	}
	*head = new; /* *head points to new */
	return (new);
}
