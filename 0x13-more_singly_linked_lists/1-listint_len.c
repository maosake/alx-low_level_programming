#include "lists.h"

/**
 * listint_len - prints length
 * @h: head
 * Return: the length of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{

		count++;
		h = h->next;
	}
	return (count);
}

