#include <stdio.h>
/**
 * main -Entry point
 * Description: 'print comb of numbers’
 * Return: Always 0
 */
int main(void)
{
int n;
int m;
for (n = 0; n < 100; n++)
{
for (m = 0; m <= 99; m++)
{
if (n < m)
{
putchar(n / 10 + 48);
putchar((n % 10) + 48);
putchar(' ');
putchar(n / 10 + 48);
putchar((m % 10) + 48);
if (n == 98 && m == 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
