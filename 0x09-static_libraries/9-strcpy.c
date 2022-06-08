#include "main.h"

/**
 * _strcpy -  a function that copies the string
 * @dest : character value
 * @src  : character value
 * Description - function that copies the string pointed to by src
 *
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
