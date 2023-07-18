#include "main.h"
/**
* print_sign - prints the sign of a number
* @r: the int to check
* Return:1 and prints + if r is greater than zero
* 0 and prints 0 if r is zero
* -1 and prints - if r is less than zero
*/
int print_sign(int r)
{
if (r > 0)
{
_putchar('+');
return (1);
}
if (r == 0)
{
_putchar('0');
}
else if (r < 0)
{
_putchar('-');
}
return (-1);
}
