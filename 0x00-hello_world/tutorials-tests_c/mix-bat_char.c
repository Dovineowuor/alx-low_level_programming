#include <stdio.h>
int main()
{
char alpha;
char bet;

for (alpha = 'a'; alpha >= 'z'; alpha++)
{
putchar(alpha);
}
for (bet = 'A'; bet >= 'Z'; bet++)
{
putchar(bet);
}
putchar('\n');
return (0);
}
