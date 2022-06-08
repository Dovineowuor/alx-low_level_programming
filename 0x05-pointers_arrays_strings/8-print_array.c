#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of integers
 * @a: integer value
 * @n: Integer value
 * Description - function to print array of integers
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
			printf(", ");
	}
	printf("\n");
}
