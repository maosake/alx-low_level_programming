#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to st
 * @c: THe character to print
 * Return: 1 on success
 * on erro, -1 and 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
