#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description:alphabet  program.
 * Return: (0) always - Success
 */
int main(void)
{
	int ch = 0;
	int b = 0;

	for (ch = 0; ch < 9; ch++)
	{
		for (b = ch + 1; b <= 9 ; b++)
		{
			putchar('0' + ch);
			putchar('0' + b);
			if (ch < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
