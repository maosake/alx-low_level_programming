#include <stdio.h>
/**
 * main - prints possible combination of numbers
 * Return:0
 */
int main(void)
{
int n, m, i;
for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
{
for (i = 50; i <= 58; i++)
{
if (i > m && m > n)
{
putchar(n);
putchar(m);
putchar(i);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
