#include <stdio.h>

/**
 * main - prints the alphabet in lower case followed by a new line
 * using putchar except 'q' and 'e'
 *
 * Return: 0 to signal good execution
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if ((c != 101) && (c != 113))
			putchar(c);
	}
	putchar(10);

	return (0);
}
