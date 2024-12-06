#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: String to duplicate and store in the new node
 *
 * Description: This function creates a new node
 * for a singly linked list.
 * It duplicates the given string, determines
 * the string’s length, and
 * inserts the new node at the front of the list.
 * If memory allocation
 * fails at any point, it frees any allocated
 * memory and returns NULL.
 *
 * Return: The address of the new node,
 * or NULL if the function fails
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	unsigned int count = 0;

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
	new->next = *head;
	*head = new;

	return (new);
}
