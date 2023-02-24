#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: prints all possible combinations of two two-digit numbers:
 * - The numbers should range from 0 to 99
 * - The two numbers should be separated by a space
 * - All numbers should be printed with two digits. 1 should be printed as 01
 * - The combination of numbers must be separated by comma, followed by a space
 * - The combinations of numbers should be printed in ascending order
 * - 00 01 and 01 00 are considered as the same combination
 *   of the numbers 0 and 1
 * - You can only use the putchar function
 *   (every other function (printf, puts, etc…) is forbidden)
 * - You can only use putchar eight times maximum in your code
 * - You are not allowed to use any variable of type char
 * - All your code should be in the main function
 * Return: 0 to signal good execution
 */
int main(void)
{
	/* Declarations */
	int n1d1, n1d0;/* number one digits for 10^1 and 10^0 */
	int n2d1, n2d0;/* number two digits for 10^1 and 10^0 */

	/* Statements */
	for (n1d1 = 48; n1d1 < 58; n1d1++)
	{
		for (n1d0 = 48; n1d0 < 57; n1d0++)
		{
			for (n2d1 = n1d1; n2d1 < 58; n2d1++)
			{
				for (n2d0 = n1d0; n2d0 < 58; n2d0++)
				{
					if (((n1d1 == n2d1) && (n1d0 < n2d0)) || (n2d1 > n1d1))
					{
						putchar(n1d1);
						putchar(n1d0);
						putchar(32);
						putchar(n2d1);
						putchar(n2d0);
						if ((n1d1 != 57) && (n1d0 != 56))
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);

	return (0);
}
