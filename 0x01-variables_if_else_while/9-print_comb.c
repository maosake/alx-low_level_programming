#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- function to print
 *
 * return: 0
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
if (c != '9')
{
putchar(',');
putchar(' ');
}
return (0);
}
