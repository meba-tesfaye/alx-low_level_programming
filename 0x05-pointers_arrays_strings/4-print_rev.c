#include "main.h"

/**
* print_rev - imprime en reverse
* @p: string
* return: 0
*/
void print_rev(char *p)
{
int a = 0;
while (p[a] != '\0')
{
a++;
}
for (a--; a >= 0; a--)
_putchar(p[a]);
_putchar('\n');
}
