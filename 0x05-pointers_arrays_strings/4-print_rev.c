#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: character value
 * Description: function to print string in reverse order
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
