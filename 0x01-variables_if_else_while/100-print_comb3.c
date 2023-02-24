#include <stdio.h>

/**
 * main - prints all possible combinations of two digits.
 *
 * Return: 0 to signal good execution
 */
int main(void)
{
	int d1, d0;

	for (d1 = 48; d1 < 57; d1++)
	{
		for (d0 = d1 + 1; d0 < 58; d0++)
		{
			putchar(d1);
			putchar(d0);
			if (d1 != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}

