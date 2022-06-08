#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Description: function print_alphabet, in lowercase
 *
 * Return: void (Success)
 */
void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar (alpha);
}
_putchar ('\n');
}
