#include "main.h"

/**
* _isdigit - check if a letter is upper
* @z: The number to be checked
* Return: 1 for a character that will be a digit or 0 for any else
*/
int _isdigit(int z)
{
if (z >= 48 && z <= 57)
{
return (1);
}
return (0);
}
