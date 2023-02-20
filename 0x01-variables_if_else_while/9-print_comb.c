#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- function to print
 *
 * return: 0
 */int main(void)
{
int c =0;
while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
return (0);
}
