#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Description: prints all possible combinations of three digits :
 * - Numbers must be separated by ',', followed by a space
 * - The three digits must be different
 * - 012, 120, 102, 201, 210 are considered the same combination of digits
 * - Print only the smallest combination of three digits
 * - Numbers should be printed in ascending order with three digits
 * - You can only use the putchar function
 *   (every other function (printf, puts, etc…) is forbidden)
 * - You can only use putchar six times maximum in your code
 * - You are not allowed to use any variable of type char
 * - All your code should be in the main function
 * Return: 0 to signal good execution
 */
int main(void)
{
	int d0, d1, d2;

	for (d2 = 48; d2 < 56; d2++)
	{
		for (d1 = d2 + 1; d1 < 57; d1++)
		{
			for (d0 = d1 + 1; d0 < 58; d0++)
			{
				putchar(d2);
				putchar(d1);
				putchar(d0);
				if (d2 != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
