#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: n number of bytes to be concatenated
 * Return: Always a pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; *(dest + i) != '\0'; i++)
{
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
