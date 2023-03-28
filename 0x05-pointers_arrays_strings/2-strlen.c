#include "main.h"

/**
 * _strlen  -  a function that returns the length of a string
 * @c : character param
 *
 * Return:  the length of a string.
 */

int _strlen(char *c)
{
	int i, len;

	for (i = 0; c[i] != '\0'; i++)
	{
		len++;
	}
	return (len);

}
