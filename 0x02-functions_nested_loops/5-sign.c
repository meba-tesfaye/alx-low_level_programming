#include "main.h"
/**
* print_sign - prints the sign of a number
* @g: the int to check
* Return:1 and prints + if n is greater than zero
* 0 and prints 0 if n is zero
* -1 and prints - if n is less than zero
*/
int print_sign(int g)
{
if (g > 0)
{
_putchar('+');
return (1);
}
else if (g < 0)
{
_putchar('-');
return (-1);
}
}
