#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse followed by a new line
 * using putchar
 *
 * Return: 0 to signal good execution
 */
int main(void)
{
	int c;

	for (c = 122; c > 96 ; c--)
	{
		putchar(c);
	}
	putchar(10);

	return (0);
}
