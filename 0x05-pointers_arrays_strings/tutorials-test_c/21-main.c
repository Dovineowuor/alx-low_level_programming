#include <stdio.h>
/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   *(a + 1) = 198;
   *(a + 2) = 298;
   a[3] = 398;
   *(a + 4) = 498;
   p = a + 1;
   *p = 98;  
   p2 = a + 3;
   *p2 = *p + 1337;
   // Available variables: a, a+1, a+2, a+3/a[3], a
   // =4, p, p2 and reassignment occurs for a3 and p2
printf("The address of 'a', %p\n", a);
printf("The address of 'a': %p\n", &a);
printf("The value of ' a': %ld\n", sizeof(a));
printf("The value of 'a': %d\n ", a[0]);
printf("The value of 'a': %d\n",*(a));
printf("_______ a[0]________\n");
printf(" \n");


printf("The address of 'a+4', %d\n", a[4]);
printf("The address of 'a+4': %p\n", &a[4]);
printf("The value of ' a+4': %ld\n", sizeof(a[4]));
printf("The value of 'a+4': %d\n ", a[4]);
printf("The value of 'a+4': %d\n",*(a+4) );
printf("_______ a[4] _______\n");
printf("\n");


printf("The address of 'a+3', %d\n", a[3]);
printf("The address of 'a+3': %p\n", &a[3]);
printf("The value of ' a+3': %ld\n", sizeof(a[3]));
printf("The value of 'a+3': %d\n ", a[3]);
printf("The value of 'a+3': %d\n",*(a+3) );
printf("_______ a[3] _______\n");
printf("\n");

printf("The address of 'a+2', %d\n", a[2]);
printf("The address of 'a+2': %p\n", &a[2]);
printf("The value of ' a+2': %ld\n", sizeof(a[2]));
printf("The value of 'a+2': %d\n ", a[2]);
printf("The value of 'a2': %d\n",*(a+2) );
printf("_______ a[2] _______\n");
printf("\n");


printf("The address of 'a+1, %d\n", a[1]);
printf("The address of 'a+1': %p\n", &a[1]);
printf("The value of ' a+1': %ld\n", sizeof(a[1]));
printf("The value of 'a+1': %d\n ", a[1]);
printf("The value of 'a[1]': %d\n",*(a+1) );
printf("_______ a[1] _______\n");
printf("\n");


printf("The address of 'p, %d\n", p[0]);
printf("The address of 'p': %p\n", &p[0]);
printf("The value of ' p': %ld\n", sizeof(p[0]));
printf("The value of 'p': %d\n ", p[0]);
printf("The value of 'p[0]': %d\n",*(p) );
printf("_______ p[0]________\n");
printf("\n");

		
printf("The address of 'p+2, %d\n", p[2]);
printf("The address of 'p+2': %p\n", &p[2]);
printf("The value of ' p+2': %ld\n", sizeof(p[2]));
printf("The value of 'p+2': %d\n ", p[2]);
printf("The value of 'p[2]': %d\n",*(p+2));
printf("_______ p[2] _______\n");
printf("\n");


printf("The address of 'p2, %ls\n", p2);
printf("The address of 'p2': %p\n", &p2);
printf("The value of ' p2': %ld\n", sizeof(p2));
printf("The value of 'p2': %ls\n ", p2);
printf("The value of 'p2': %d\n",*p+2);
printf("_______ p[2] _______\n");
printf("\n");
return (0);
}
