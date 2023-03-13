#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * main - prints results od adding two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int num, sum, i;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num_str = argv[i];
		int j = 0;

		while (num_str[j] != '\0')
		{
			if (!isdigit(num_str[j]))
			{
				printf("Error\n");
				return (1);
			}
		j++;
	}

	num = _atoi(num_str);

	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
