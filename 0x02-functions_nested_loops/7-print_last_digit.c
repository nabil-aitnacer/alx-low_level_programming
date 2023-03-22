#include "main.h"

/**
 *print_last_digit - a function that computes the absolute value of an integer
 *@n : number
 *Return: last number
 */

int print_last_digit(int n)
{
	int a = n % 10;

	_putchar('0' + a);

	return (a);
}
