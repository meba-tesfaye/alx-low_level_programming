#include "main.h"

/**
* print_diagonal - print diagonal lines
* Return: 10 times of the number from 0 to 14 
*/
  
void print_diagonal(int n);
{
int x, y;
for (x = 0; x < n; x++)
{
if (n > 1)

for (y = 0; y < x; y++)
{
_putchar(' ');

}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
