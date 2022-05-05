#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: char array
 * @b: char variable
 * @n: number of bytes
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}


