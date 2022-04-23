#include "main.h"

/**
* *_strcat - concantenates two strings
* @dest: The string to be appended upon
* @src: The strng to be appended to dest
* @n: The number of bytes from src to be appended to
*
* Return: A pointer to the resulting string dest
*/
#include "main.h"

/**
 * *_strcat - concantenates two strings
 * @dest: The string to be appended upon
 * @src: The strng to be appended to dest
 * @n: The number of bytes from src to be appended to
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
