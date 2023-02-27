#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	/* Declarations */
	int i;

	/* Statements */
	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	if (i != 0)
	{
		while (i >= 0)
		{
			_putchar(*(s + i));
			i--;
		}
	}
	_putchar('\n');
}
