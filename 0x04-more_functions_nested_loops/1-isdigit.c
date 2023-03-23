#include "main.h"

/**
 *_isdigit - a function that checks for a digit (0 through 9).
 *@c : character
 *Return: 1 if c is digiy
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
		return (1);

	return (0);

}
