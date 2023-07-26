#include <stdio.h>
/**
* _strncat - concatenates two strings using at most
* @dest: the string to be appended upon
* @src: the string to be appended to dest
* @n: the number of bytes from src appended to dest
* Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
