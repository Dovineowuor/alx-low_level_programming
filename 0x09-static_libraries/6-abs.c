#include "main.h"
/**
 * _abs - computes absolute value of a number
 * @n: - is the character to be checked
 * Return: Always 0
 */
int _abs(int n)
{
int result;
if (n >= 0)
{
	result = n;
}
else if (n <= 0)
{
	result = -n;
}
return (result);
}
