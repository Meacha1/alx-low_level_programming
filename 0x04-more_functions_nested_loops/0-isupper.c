#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @c: The number to be checked
  *
  * Return: 1 for upper letter or 0 for any else
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
return (0);
}
