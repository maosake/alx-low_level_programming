#include "lists.h"

/**
 * list_len - prints list
 * @h: head
 * Return: number of counts
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->link;
	}
	printf("%lu", count);
}

