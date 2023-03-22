#include "main.h"
/**
 *times_table  -  a function that prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int d = a * b;

			if (d < 10)
			{
				_putchar(d + '0');

			}
			else
			{
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}

			if (b < 9)
				_putchar(',');

			if (d < 9)
				_putchar(' ');

			_putchar(' ');
		}

		_putchar('\n');
	}
}
