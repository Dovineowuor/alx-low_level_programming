#include "main.h"
/**
* _isdigit - checks if input is a digit
* @c: user input
* Return: 1 if input is a digit (zero to nine) and 0 if otherwise
*/
int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
