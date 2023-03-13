#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of numbers
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;

		printf("%d/n", result);

		return (0);
	}
	printf("Error\n");
	return (1);
}
	
