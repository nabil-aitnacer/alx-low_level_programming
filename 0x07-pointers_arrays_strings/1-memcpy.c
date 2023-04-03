#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest : memory area
 * @src : memory area
 * @n : element
 * Return: a pointer to the memory area s
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int  i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
