#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: Character value
 * Description: function _strlen ot return string length
 *
 * Return: i value
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
