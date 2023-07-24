#include "main.h"

/**
* _puts - print string followed by new line
* @pstr: prints string
*/
void _puts(char *pstr)
{
int u;
for (u = 0; pstr[u] != '\0'; u++)
{
_putchar(pstr[u]);
}
_putchar('\n');
}
