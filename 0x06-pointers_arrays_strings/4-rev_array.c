#include "main.h"

/**
 * reverse_array - reverses content of an array
 * @n: array
 * @n: number of elements of the array
 * Description: function that reverses ontent of array of integers
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
