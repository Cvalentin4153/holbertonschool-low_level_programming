#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the doubly linked list
 * @index: Index of the node to be deleted (starting at 0)
 *
 * Return: 1 if successful, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		return (1);
	}

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	if (temp->prev == NULL)
	{
		temp->prev->next = temp->next;
	}

	if (temp->next != NULL)
	{
		temp->prev->next = temp->prev;
	}

	free(temp);
	return (1);
}
