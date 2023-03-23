#include "main.h"

/**
 *print_square -  a function that prints a square
 *@size : the size of the square
 *Return: void
 */

void print_square(int size)
{
	int i, y;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (y = 0; y < size; y++)
		{

			_putchar('#');
		}

		_putchar('\n');
	}
}
