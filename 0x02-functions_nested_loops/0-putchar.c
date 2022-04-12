#include "0-putchar.h"
#include "main.h"

/**
 * main - Print the word "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char h[] = "ALx Software engineering";
  int i;

  for (i = 0; i < 9; i++)
    {
      _putchar(h[i]);
    }
  _putchar('\n');
  return (0);
}
