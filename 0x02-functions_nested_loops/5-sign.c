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
                return (1);
		_putchar('+');
        }
	else if (n = 0)
        {
                return (0);
                _putchar('0');
        }
	else if (n < 0)
        {
                return (-1);
                _putchar('-');
        }

return (0);
}

