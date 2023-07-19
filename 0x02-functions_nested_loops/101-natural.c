#include <stdio.h>
/**
*main - prints the sum of all multiples of 3 or 5 up to 1024
*Return: Always (Sucess)
*/
int main(void)
{
unsigned long int x, y, z;
int b;
z = 0;
y = 0;
x = 0;
for ( b = 0; b < 1024; b++)
{
if ((b % 3) == 0)
{
z = z + b;
}
else if (( b % 5) == 0)
{
y = y + b;
}
}
z = x + y ;
printf("%lu\n", z)
return (0);
}
