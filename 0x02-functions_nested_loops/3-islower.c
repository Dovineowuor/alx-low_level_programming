#include "main.h"

/**
* main - check the code.
*
* Return: Always 0.
*/
/**
*int main(void)
*{
*int c;

*c = _islower('p');
*_putchar(c + 'u');
*c = _islower('t');
*_putchar(c + 'c');
*c = _islower('h');
*_putchar(c + 'a');
*_putchar(c + 'r');                                                                                                      *_putchar('\n');
*return (0);
*}
*/
#include "main.h"

/**
 * _islower - Short descritpion, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}
}
