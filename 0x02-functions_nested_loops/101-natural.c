#include <stdio.h>
/**
*main - Entry point
*Return: 0
*/
int main(void)
{
int b, sum = 0;
for (b = 0; b < 1024; b++)
{
if ((b % 5 == 0) || (b % 3 == 0))
sum += b;
}
printf("%d\n", sum);
return (0);
}
