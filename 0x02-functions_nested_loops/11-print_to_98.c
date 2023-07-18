#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print all natural numbers from y to 98
* @y: The number to start printing from
* Return: 0
*/
void print_to_98(int y)
{
if (y <= 98)
{
for (; y <= 98; y++)
{
if (y == 98)
{
printf("%d", y);
printf("\n");
break;
}
else
{
printf("%d, ", y);
}
}
}
else
{
for (; y >= 98; y--)
{
if (y == 98)
{
printf("%d", y);
printf("\n");
break;
}
else
{
printf("%d, ", y);
}
}
}
}
