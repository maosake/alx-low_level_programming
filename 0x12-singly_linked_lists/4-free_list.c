#include "lists.h"

/**
 * free_list - frees list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *ke;

	while (head != NULL)
	{
		ke = head->next;
		free(head->str);
		free(head);
		head = ke;
	}
}
