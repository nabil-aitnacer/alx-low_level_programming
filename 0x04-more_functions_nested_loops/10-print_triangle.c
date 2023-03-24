#include "main.h"

/**
 *print_triangle - a function that prints a triangle, followed by a new line.
 *@size : size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	int i, y, z;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
		return;

	}

	for (i = 0; i < n; i++)
	{
		for (y = 1; y <= size - i ; y++)
		{
			_putchar(' ');
		}
		for (z = 1; z <= i ; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
