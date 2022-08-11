#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: linked list of type list_t to print
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s", h->len, h->str);
		}
		printf("\n");
		return ((count + 1) + print_list(h->next));
	}
	return (count);
}


