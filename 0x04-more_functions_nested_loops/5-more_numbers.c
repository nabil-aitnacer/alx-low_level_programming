#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, y, tens, unit;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y <= 14; y++)
		{
			tens = y / 10;
			unit = y % 10;

			if (y > 9)
				_putchar(tens + '0');

			_putchar(unit + '0');
		}

		_putchar('\n');
	}
}
