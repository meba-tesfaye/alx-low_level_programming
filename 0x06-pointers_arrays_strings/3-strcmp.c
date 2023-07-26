#include <stdio.h>
/**
* _strcmp - compares pointer to two strings
* @s1: a pointer to the first string to be compared
* @s2: a pointer to the second string to be compared
* If str1 == str2, 0
* If str1 > str2, the postive diffrence of the first unmatched charcters
* Return: If str1 > str2, the negative diffrence of the first
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
