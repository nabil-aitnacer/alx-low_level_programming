#include <stdio.h>

/**
 *main - main function
 *Return: 1 succes
 */

int main(void)
{
	int result, a;

	result = 0;
	for (a = 1; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			result += a;
		}
	}
	printf("%d", result);
	printf("\n");

	return (0);
}
