#include <stdio.h>

/**
 * main - An array is not a pointer, but...
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[98]; /* array */

   printf("The address of 'a': %p\n", a);
   printf("The address of '&a[0]': %p\n", &a[0]);
   printf("The value of '&a':%p\n ", &a);
   return (0);
}
