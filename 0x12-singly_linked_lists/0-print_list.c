#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("[0] (nil)");
	list_t *ptr = NULL;
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("%lu ", count);
}

