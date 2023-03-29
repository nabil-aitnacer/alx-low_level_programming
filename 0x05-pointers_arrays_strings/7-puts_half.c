#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str : string
 * Return:  the length of a string.
 */

void puts_half(char *str)
{
	int i, j, half, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	half = (len - 1) / 2;

	for (j = half; j > len; j++)
	{
		_putchar(str[j]);
	}

}
