#include "main.h"
/**
* print_alphabet_x10 - make the alpahbet x10
*
* Return:void
*/
void print_alphabet_x10(void)
{
char m;
int t;
while (t >= 0)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
t++;
_putchar('\n');
} 
}
