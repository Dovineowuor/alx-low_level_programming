#include "main.h"

/**
 * _puts - updates the value it points to 98
 * @str: character value
 * Decription: function prints a string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
