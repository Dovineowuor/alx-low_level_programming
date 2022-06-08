#include "main.h"

/**
 * print_line - function to draw a straight line
 * @n: is the number of times character _ should be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
