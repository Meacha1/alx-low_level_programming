#include "main.h"

/**
 * _islower - check the code.
 *
 * @c: The character to be checked
 * Return: 1 for lowercase if not 0.
 */
int _islower(int c)
{
	int c;
		if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
