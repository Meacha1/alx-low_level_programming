#include "main.h"

/**
* print_sign - check the code.
*@n: The number to be checked
*
* Return: Always 1 if n is +ve, 0 if 0 and -1 of -ve.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
