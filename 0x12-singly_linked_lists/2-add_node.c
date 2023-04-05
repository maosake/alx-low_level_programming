#include "lists.h"

/**
 * *add_node - adds node
 * @head: head of node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;

	while (str[count])
	{
		count++;
	}

	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = count;

	ptr->next = *head;

	*head = ptr;

	return (*head);
}


