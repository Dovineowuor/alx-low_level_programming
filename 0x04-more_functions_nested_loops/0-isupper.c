#include "main.h"
/**
* _isupper - checks if input is an uppercase letter
* @c: user input
* Return: 1 if input is uppercase and 0 if otherwise
*/
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
