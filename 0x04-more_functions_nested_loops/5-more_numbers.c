#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14, then a new line
*
* Return: void
*/
void more_numbers(void)
{
char *nums;
int c;
int l;

nums = "01234567891011121314";
l = 0;

while (l < 10)
{
for (c = 0; c < 20; c++)
{
_putchar(nums[c]);
}
_putchar('\n');
l++;
}
}
