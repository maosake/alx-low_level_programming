#include "lists.h"
#include <unistd.h>

/**
 * _putchar - prints char
 * @c: character
 * Return: 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
