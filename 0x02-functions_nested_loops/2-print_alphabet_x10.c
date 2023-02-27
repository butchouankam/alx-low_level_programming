#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	/* Declarations */
	char c;
	int i;

	/* Statements */
	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c++);
		}
		_putchar('\n');
	}
}
