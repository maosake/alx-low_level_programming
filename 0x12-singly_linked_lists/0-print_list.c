#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints number of nodes
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = null;
	ptr = h;

	while (ptr)
	{
		if (ptr == NULL)
			printf("[0] (nil)");
		else 
			printf("[%u] %s", ptr->len, ptr->str);
		ptr = ptr->link;
		count++;
	}

	return (count);
}

