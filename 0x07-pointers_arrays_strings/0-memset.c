# include "main.h"

/**
* _memset - entery point
* @s: pointed destination
* @b: constant byte
* @n: bytes
* Return: always 0
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned  int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
