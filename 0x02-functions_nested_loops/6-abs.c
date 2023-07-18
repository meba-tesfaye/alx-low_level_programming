#include "main.h"
/**
* _abs - Computes the absolute value of an integer
* @g: the number to be computed
* Return: Absolute value of the number or zero
*/
int _abs(int g)
{
if (g < 0)
{
int abs_val;
abs_val = g * -1;
return (abs_val);
}
return (g);
}
