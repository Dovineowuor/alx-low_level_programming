#include <stdio.h>

/**
 * main - illustrates pointers arithmetic
 *
 * Return: Always 0.
 *
 * Anaother way of accessing ellements of an array is using "*(a+x)", were a is the name of the variable-array  and x is the "a+xth/nth" element/term of the array
 * i is always referenced as the first element of the array which also means tat calling the array would also give the first elemet of the array starting to count from the zeroeth/ first term of the array.
 * The first term of an array = "i", 2nd = "i+1" ...
*/
int main(void)
{
   int a[5];

   *a = 98; /* same as *(a + 0) */
   *(a + 1) = 198;
   *(a + 2) = 298;
   *(a + 3) = 398;
   *(a + 4) = 498;
   printf("Value of a[0]: %d\n", *a);
   printf("Value of a[1]: %d\n", *(a + 1));
   printf("Value of a[2]: %d\n", *(a + 2));
   printf("Value of a[3]: %d\n", *(a + 3));
   printf("Value of a[4]: %d\n", *(a + 4));
   printf("----------------\n");
   printf("Value of 'a' (also address of a[0]): %p\n", a);
   printf("Address of 'a[1]': %p\n", (a + 1));
   printf("The address of the '5(a+4'): %p\n", *(a+4));
   printf("Address of 'a[1]': %p\n", &(*(a + 1)));
   return (0);
}
