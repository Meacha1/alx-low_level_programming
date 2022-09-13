#include "main.h"

/**
* print_last_digit - Computes the absolute value of an integer.
*@n: The number to be checked
*
* Return: Value of the last digit of number
*/
int print_last_digit(int n)
{
int ld;
ld = n % 10;
if (n < 0)
{
	ld = ld * -1;
}
_putchar('0' + ld);
return (ld);
}

