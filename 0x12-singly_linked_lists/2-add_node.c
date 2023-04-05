#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node
 * @head: head address, dereferenced
 * @str: string
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t count  = 0;

	while (str[count])
		count++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = count;
	new->next = *head;

	*head = new;

	return (new);
}
