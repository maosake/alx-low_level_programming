#include "main.h"

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s[8] = { 'K', 'e', 'n', 'n', 'e', 'd', 'y' };

	s = malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		s[i] = c;
		return (s);
	}
}
