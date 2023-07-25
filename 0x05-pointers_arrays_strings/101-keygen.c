#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - generates random passowrds for 101-crackme
* Return: always 0
**/
int main(void)
{
int sum;
char c;
srand(time(NULL));
sum = 0;
while (sum <= 2645)
{
c = rand() % 128;
sum += c;
putchar(c);
}
putchar(27772 - sum);
return (0);
}
