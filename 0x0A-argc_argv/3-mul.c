#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the product of two numbers
 * @argc: argument count
 * @argv: argument vrctro
 *
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		result = a * b;

		printf("%d\n", result);

	return (0);
	}
	printf("Error\n");
	return (1);
}
