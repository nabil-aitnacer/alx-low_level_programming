#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal line on the terminal.
 *@n : number of line
 *Return: void
 */


void print_diagonal(int n)
{
	int i, y;

	for (i = 0; i < n; i++)
	{
		for (y = 0; y < i ; y++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
