#include "main.h"

/**
 * _strpbrk - search string for any set of bytes
 * @s: string array to be searched
 * @accept: string array to search
 * Return: pointer to occurence in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			else if (s[i + 1] == '\0' && accept[j + 1] == '\0')
			{
				return (0);
			}
		}
	}
	return (0);
}
