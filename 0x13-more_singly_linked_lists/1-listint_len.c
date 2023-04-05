#include "lists.h"

/**
 * listint_len - prints length
 * @h: head
 * Return: the length of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

