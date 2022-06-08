#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: array that returns
 * @src: pointer to recieve the string
 * @n: number of iterations
 * Description: function that copies a string
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
