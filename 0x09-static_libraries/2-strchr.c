#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string to be searched
 * @c: character to find
 * Return: pointer to first occurence of c in s or NULL
 * if c not in s
 */
char *_strchr(char *s, char c)
{
int i;

i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
if (s[i] == c)
{
return (s + i);
}
return (0);
}
