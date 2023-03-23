#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal line on the terminal.
 *@n : number of line
 *Return: void
 */


void print_diagonal(int n)
{
	int i, y;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
		return;

	}

	for (i = 0; i < n; i++)
	{
		for (y = 0; y < i ; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
