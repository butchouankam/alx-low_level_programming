#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	/* Declarations */
	int i;

	/* Statements */
	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
