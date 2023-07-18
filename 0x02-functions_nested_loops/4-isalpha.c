#include "main.h"
/**
* _isalpha -Checks for alphabetic order
* @t: alphabet to check for
* Return:1 if t is a letter, 0 if not
*/
int _isalpha(int t)
{
return ((t >= 'a' && t <= 'z')|| (t >= 'A' && t <= 'Z'));
}
