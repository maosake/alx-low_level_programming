#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function generates alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch = 'a';
int CH = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
