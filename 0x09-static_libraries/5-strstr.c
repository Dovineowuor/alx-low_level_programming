#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to search
 * Return: to beginning of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int length, size, count;
	int i, j;

	count = 0;
	length = 0;
	for (; needle[length] != '\0'; length++)
	{
	}
	size = length - 1;
	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (size == count)
		{
			return (haystack + (i - (size - 1)));
		}
		if (haystack[i] == needle[j])
		{
			count++;
			break;
		}
		else if (needle[j + 1] == '\0')
		{
			count = 0;
		}
		else if (haystack[i + 1] == '\0' && needle[j + 1] == '\0')
		{
			return (0);
		}
	}
	}
	return (haystack);
}
