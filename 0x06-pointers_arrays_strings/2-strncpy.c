#include "main.h"

/**
 * _strncpy - a function that concatenates two strings.
 * @dest : string
 * @src : string
 * @n : n bytes from src
 *Return: string concatenates.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);

}
