#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: String to duplicate and store in the new node
 *
 * Description: This function allocates a new node,
 * duplicates the provided
 * string, and appends the new node at the end
 * of the existing list. If the
 * provided string or memory allocation fails,
 * the function returns NULL.
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new;
	unsigned int count = 0;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (new->str[count] != '\0')
	{
		count++;
	}
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
