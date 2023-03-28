#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 *
 * @p : pointer pramater
 * @j : pointer paramater
 * Return: Always 0.
 *
 */

void  swap_int(int *p, int *j)
{
	int tmp = *p;

	*p = *j;
	*j = tmp;
}
