#include "main.h"

/**
* _islower - Short descritpion, single line
* @c: contains value to be compared
* Return: Always 0.

int _isalpha(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}
}
*/

/**
* _isalpha - alphabet case checker. Return  if true and 0 if false
* @c: integer parameter
* Return: Returns value
*/

int _isalpha(int c)
{
int value;

if ((c >= 'A' || c >= 'a') && (c <= 'Z' || c <= 'z'))
{
value = 1;
}
else

value = 0;
}
return (value);
}
