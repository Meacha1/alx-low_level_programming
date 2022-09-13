#include "main.h"

/**
 * _isalpha - check the code.
 *@c: The character to be checked
 *
 * Return: Always 1 if c is alphabet.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
return (0);
}
