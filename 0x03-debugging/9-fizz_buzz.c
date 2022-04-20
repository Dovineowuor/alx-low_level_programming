#include <stdio.h>

/**
* main - prints 1 to 100, prints Fizz for multiples of three,
* Buzz for multiples of five and FizzBuzz for multiple of three and five
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i == 100)
{
printf("Buzz");
}
else if ((i % 3 == 0) && (i % 15 != 0))
{
printf("Fizz ");
}
else if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");

return (0);
}
