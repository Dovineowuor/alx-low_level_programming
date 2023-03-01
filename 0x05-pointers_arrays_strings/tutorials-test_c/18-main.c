#include <stdio.h>

/**
 * main - prints the address of an array
 *
 * Return: Always 0.
 */
int main(void)
{
   char b[98];

   printf("The address of 'b': %p\n", b);// evaluated as the element of the array bis of type character(char)
   printf("The value of '&b': %p\n", &b);// Evaluated s the array itself as the rule states that for arrays, their addresses is equivalent to the first element of the arrays' elements. b is of type character pointer to value 98 and hence a pointer to the array 98
   printf("The value of 'b'%lu\n ", sizeof(b)); // This outputs the value of the array with all its elements and keeping in mind that it points on the array 98
   printf("The value of '&b': %lu\n", sizeof(&b)); //This outputs the value of the last element of the array 98. This is achieved as the system approaches this differently as each element is pointed to by differet elements.
   return (0);
}
