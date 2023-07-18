#include "main.h"
/**
* print_alphabet_x10 - make the alpahbet x10
*
* Return:void
*/
void print_alphabet_x10(void)
{
char m,t;
for(t = 0; t <=9;t++)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
}
}
