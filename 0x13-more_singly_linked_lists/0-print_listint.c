#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints number of nodes
 * @h: head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] \n", h->n)
		h = h->next;
		count++;
	}
	return (count);
}
