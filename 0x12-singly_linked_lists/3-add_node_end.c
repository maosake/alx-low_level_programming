#include "lists.h"

/**
 * add_node_end - add end  node
 * @head: the head
 * @str: string
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;
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
	new->next = NULL;

	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
		return (new);
	}
}
