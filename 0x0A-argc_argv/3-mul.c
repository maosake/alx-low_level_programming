#include "main.h"
#include <stdio.h>

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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	result = a * b;

	printf("The result is: %d\n", result);

	return (0);
}
