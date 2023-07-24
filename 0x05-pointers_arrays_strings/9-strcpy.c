#include "main.h"

/**
* *_strcpy - pointer to a character
* @dest: string 1
* @src: string 2
* Return: the pointer to the dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
