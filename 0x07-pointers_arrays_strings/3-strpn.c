#include "main.h"
/**
 * _strspn - returns number of bytes that much specified criteria
* @s: string to search
* @accept:Accept search string
* Return: number of bytes matching search criteria
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, k = 0;

for (i = 0; *(s + i); i++)
{
for (j = 0; *(accept + j); j++)
{
if (*(s + i) == *(accept + j))
{
k += 1;
break;
}
}
if (*(s + i) != *(accept + j))
break;
}
return ((unsigned int) k);
}
