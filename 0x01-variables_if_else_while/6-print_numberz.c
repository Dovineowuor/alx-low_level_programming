#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Description: program to print single digits of base 10
 *
 *Return: return Always 0 (Success)
 */

int main(void)
{
	int d;

for (d = '0'; d <= '9'; d++)
putchar(d);
putchar('\n');

return (0);

}
