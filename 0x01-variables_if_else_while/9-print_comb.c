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

	for (ch = 0; ch < 10; ch++)
	{
		putchar('0' + ch);
		if (ch != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
