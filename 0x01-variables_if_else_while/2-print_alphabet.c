#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *Description: Print alphabet in lowercase
 *
 *Return: return Always 0 (Success)
 */

int main(void)
{

	char low;

for (low = 'a'; low <= 'z'; low++)
putchar(low);
putchar('\n');

return (0);
}
