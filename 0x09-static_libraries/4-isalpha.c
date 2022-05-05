#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: - is the character to be checked
 * Return: 1 if c is a letter,lowercase or uppercase, 0 if c is otherwise
 */
int _isalpha(int c)
{
int result;
if (c >= 'a' && c <= 'z')
{
	result = 1;
}
else if (c >= 'A' && c <= 'Z')
{
	result = 1;
}
else
{
	result = 0;
}
return (result);
}
