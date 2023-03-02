#include "main.h"
#include <stdio.h>

/**
 * main -check code
 * Return:0
 */
int main(void)
{
	char str[] = "Look up1\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
