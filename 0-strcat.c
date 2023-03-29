#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest : string
 * @src : string
 * Return: string concatenates.
 */

char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;
	int i, j;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	while (src[srcLen] != '\0')
	{
		srcLen++;
	}

	int len = destLen + srcLen + 1;

	char *temp[len];

	for (i = 0; i < destLen; i++)
	{
		temp[i] = dest[i];
	}
	for (j = 0; j < srcLen; j++)
	{
		temp[i++] = src[j];
	}

	temp[len - 1] = '\0';

	return (temp);
}
