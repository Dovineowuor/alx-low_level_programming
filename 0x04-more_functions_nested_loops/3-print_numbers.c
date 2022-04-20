#include "main.h"
/**
* print_numbers - print numbers zero to nine followed by a new line
*
* Return: void
*/
void print_numbers(void)
{
int c;

for (c = 48; c < 58; c++)
{
_putchar(c);
}
_putchar(10);
}
