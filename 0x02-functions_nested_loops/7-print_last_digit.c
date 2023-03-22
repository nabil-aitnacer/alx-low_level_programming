#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit - a function that computes the absolute value of an integer
 *@n : number
 *Return: last number
 */

int print_last_digit(int n)
{
	int c = abs(n);

	if (c < 0)
		c = c * -1;

	int a = c % 10;

	_putchar('0' + a);

	return (a);
}
