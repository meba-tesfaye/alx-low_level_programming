#include "main.h"

/**
* swap_int - swaps the values of two integers
* @m: integer to swap
* @n: integer to swap
*/

void swap_int(int *m, int *n)
{
int l;

l = *m;
*m = *n;
*n = l;
}
