#include <stdio.h>
/*
 *
 *
 *
 */

int main()
{
char x;
char y;


for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (y = 'A'; y <= 'Z'; y++)
{
putchar(y);
}
char z = '\n';

putchar(z);
return(0);
}
