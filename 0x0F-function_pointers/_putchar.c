#include "variadic_functions.h"
#include <stdlib.h>

/**
 * _putchar - prints a character
 * @c: character to print
 * Return: 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
