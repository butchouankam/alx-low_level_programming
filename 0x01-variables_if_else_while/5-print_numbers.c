#include <stdio.h>

/**
 * main - prints all single digits from base 10 starting from 0,
 * followed by a new line.
 *
 * Return: 0 to signal good execution
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar(10);

	return (0);
}
