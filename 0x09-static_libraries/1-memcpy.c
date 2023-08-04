#include "main.h"
/**
* _memcpy - a funcation that copies memory area
* @dest: memory where is stored
* @src: memory where is copied
* @n: number of bytes
* Return: copied memory with n byted changed
*/
char *_strncpy(char *dest, char *src, unsined int n)
{
int p = 0;
int i = n;
for (; p < i; p++)
{
dest[p] = src[p];
n--;
}
return (dest);
}
