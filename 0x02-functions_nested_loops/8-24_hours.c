#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Description: prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: void/
 */
void jack_bauer(void)
{
	/* Declarations */
	int h, m;

	/* Statements */
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}
