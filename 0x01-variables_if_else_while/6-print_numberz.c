#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description:alphabet  program.
 * Return: (0) always - Success
 */
int main(void)
{
	char ch = 1;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
