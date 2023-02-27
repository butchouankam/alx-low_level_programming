#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	/* Declarations */
	int i, j, p;

	/* Statements */
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (p > 10)
				_putchar('0' + (p / 10));
			_putchar('0' + (p % 10));
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
