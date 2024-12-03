#include "lists.h"
/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{

int nd = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		nd++;
		h = h->next;
	}
return (nd);
}
