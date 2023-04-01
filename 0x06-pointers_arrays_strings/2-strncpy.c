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

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);

}
