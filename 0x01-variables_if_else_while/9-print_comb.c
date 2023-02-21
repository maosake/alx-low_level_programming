#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- main function to print numbers
 *
 * Return:Always 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n  != '9')
{
putchar(',');
putchar(' ');
}
}
return (0);
}
