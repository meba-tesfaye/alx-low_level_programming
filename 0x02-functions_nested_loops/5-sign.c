#include "main.h"
/**
* print_sign - prints the sign of a number
* @r: the int to check
* Return:1 and prints + if n is greater than zero
* 0 and prints 0 if n is zero
* -1 and prints - if n is less than zero
*/
int print_sign(int r)
{
if (r > 0)
{
_putchar('+');
return (1);
}
if (r = 0)
{
_puchar( '0');
}
else if (r < 0)
{
_putchar('-');
}
return (-1);
}
