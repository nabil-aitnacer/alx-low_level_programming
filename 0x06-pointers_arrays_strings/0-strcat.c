#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest : string
 * @src : string
 * Return: string concatenates.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		desc[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
