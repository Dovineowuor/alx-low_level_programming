#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: input parameter string
 * @src: input parameter string
 * Description: _strcat take two params and concat them
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
