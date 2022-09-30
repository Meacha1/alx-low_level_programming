#include "main.h"

/**
* _abs - Computes the absolute value of an integer.
*@n: The number to be checked
*
* Return: Absolute value of number or zero
*/
int _abs(int n)
{
if (n < 0)
{
int result;

result = n * -1;

return (result);
}
return (n);
}

