#include "main.h"

/**
 * main - prints all the arguments it receives 
 * @argc: number of arguments
 * @argv: array of argumrnts
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i <= argc; i++)
{
	printf("Arguments argv[%d]: %s\n", i, argv[i]);
}
return (0);
}
