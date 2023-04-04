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
	const list_t *ptr = h;


	while (ptr != NULL)
	{
		if (ptr->str  == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%lu] %s", ptr->len, ptr->str);
		}

		ptr  = ptr->next;
		count++;
	}

	return (count);
}

