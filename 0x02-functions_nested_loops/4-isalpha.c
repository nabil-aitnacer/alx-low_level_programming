#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *@c : character
 * Return: Always 0 (Succes)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);

	return (0);

}
