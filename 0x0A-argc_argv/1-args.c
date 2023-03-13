#include "main.h"
#include <stdio.h>
/**
 * main -prints the no of arguments passed into it
 * prints a number folllowed by a new line
 * Return: 0
 */
int main (int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
