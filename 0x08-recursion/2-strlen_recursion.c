#include "main.h"

/**
 * _strlen_recursion -  returns length of string
 * @s: pointer string to params
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
