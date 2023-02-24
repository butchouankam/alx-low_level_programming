#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
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
	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}
	putchar(10);

	return (0);
}
