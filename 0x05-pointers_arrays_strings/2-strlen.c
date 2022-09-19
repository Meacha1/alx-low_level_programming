#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: string to be checked
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}

	return (count);
}
