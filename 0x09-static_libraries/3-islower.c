#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: - is the character to be checked
 * Return: 1 if c is lowercase, 0 if c is otherwise
 */
int _islower(int c)
{
int result;
if (c >= 'a' && c <= 'z')
{
	result = 1;
}
else
{
	result = 0;
}
return (result);
}
