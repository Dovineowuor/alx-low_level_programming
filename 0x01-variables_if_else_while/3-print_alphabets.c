#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main - Entry point
 *
 *Description: program to print alphabets in lowercase anc uppercase
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	char low;
	char up;

for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (up = 'A'; up <= 'Z'; up++)
putchar(up);
putchar('\n');

return (0);
}
