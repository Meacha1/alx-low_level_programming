#include "main.h"
/**
 * swap_int - swap a & b.
 *
 *@a: integer to be swaped.
 *@b: integer to be swaped.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
