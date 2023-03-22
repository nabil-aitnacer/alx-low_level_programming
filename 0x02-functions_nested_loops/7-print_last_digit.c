#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit - a function that computes the absolute value of an integer
 *@n : number
 *Return: last number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (a);
}
