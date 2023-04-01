#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest : string
 * @src : string
 * @n : n bytes from src
 *Return: string concatenates.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
