#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lower case, followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	/* Declarations */
	char c = 'a';

	/* Statements */
	while (c <= 'z')
	{
		_putchar(c);
		c++;
		c = (char)c;
	}
	_putchar('\n');
}
