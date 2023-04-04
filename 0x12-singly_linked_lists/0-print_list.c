#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints number of nodes
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		if (h->str  == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%lu] %s", h->len, h->str);
		}

		h  = h->next;
		count++;
	}

	return (count);
}

