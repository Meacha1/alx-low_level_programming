#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
int c = 1;

for (c = 1; c <= 10; c++)
{
for (i = 'a'; i < 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
