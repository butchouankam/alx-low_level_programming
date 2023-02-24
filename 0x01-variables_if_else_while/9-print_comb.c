#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 to signal good execution
 */
int main(void)
{
	int c;

	for (c = 48; c < 57; c++)
	{
		putchar(c);
		putchar(44);
		putchar(32);
	}
	putchar(57);

	return (0);
}
