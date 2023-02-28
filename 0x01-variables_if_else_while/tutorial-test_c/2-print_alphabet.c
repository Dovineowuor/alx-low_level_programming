#include <stdio.h>
/*
 * Putchar - this function prints a combination of both upper and lowercase characters prioritizing lower case first
 *
*/

int main(void)
{
char alpha;
char beta;

for (alpha='a'; alpha<='z'; alpha++)
{
putchar(alpha);
}
for (beta='A'; beta<='Z'; beta++)
{
putchar(beta);
}
putchar('\n');
return(0);
}

