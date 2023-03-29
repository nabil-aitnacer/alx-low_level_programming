#include <stdio.h>

/**                                                                                                                                                                                                                * main - create all pairs of two-digit numbers that do not repeat                                                                                                                                                 * Return: 0                                                                                                                                
 */
int main(void)
{
        int num1_tens, num1_ones, num2_tens, num2_ones;

        for (num1_tens = 0; num1_tens <= 9; num1_tens++) {
                for (num1_ones = 0; num1_ones <= 9; num1_ones++) {
                        for (num2_tens = num1_tens; num2_tens <= 9; num2_tens++) {
                                for (num2_ones = (num2_tens == num1_tens) ? num1_ones + 1 : 0; num2_ones <= 9; num2_ones++) {
                                        putchar('0' + num1_tens);
                                        putchar('0' + num1_ones);
                                        putchar(' ');
                                        putchar('0' + num2_tens);
                                        putchar('0' + num2_ones);
                                        if (num1_tens < 9 || num1_ones < 8 || num2_tens < 9 || num2_ones < 9) {
                                                putchar(',');
                                                putchar(' ');
                                        }
                                }
                        }
                }
        }

        putchar('\n');
        return (0);
}
