#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */
void jack_bauer(void)
{
int s;
int t;
int u;
int v;

	for (s = 0; s <= 2; s++)
	{
		for (t = 0; t <= 9; t++)
		{
			if ((s <= 1 && t <= 9) || (s <= 2 && t <= 3))
			{
				for (u = 0; u <= 5; u++)
				{
					for (v = 0; v <= 9; v++)
					{
						_putchar(v + '0');
						_putchar(t + '0');
						_putchar(58);
						_putchar(u + '0');
						_putchar(v + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
