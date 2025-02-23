#include "main.h"

/**
 * _memset- a function that fills memory with a constant byte.
 * @s : memory area pointed to by
 * @b : bytes of the memory area
 * @n : element
 * Return: a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int  i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
