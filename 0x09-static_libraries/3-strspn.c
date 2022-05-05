#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * @s: array to find prefix string
 * @accept: prefix string
 * Return: Length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int count;

count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
	if (s[i] == accept[j])
	{
		count++;
		break;
	}
	else if (s[i] != accept[j] && accept[j + 1] == '\0')
	{
		return (count);
	}
}
}
return (count);
}
