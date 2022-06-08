#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: Integer value
 * @b: integer value
 * Description: function swap_int to swap value of two integers
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
