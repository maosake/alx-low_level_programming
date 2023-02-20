#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - function prints all numbers of base 10
 * starting from 0 followed by a new line
 * Return: 0
 */
int main(void)
{
char a = '0';
while (a <= '9')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
