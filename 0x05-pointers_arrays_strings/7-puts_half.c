#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 *
 * Return: void;
 */
void puts_half(char *str)
{
	/* Declarations */
	int length, i;

	/* Statements */
	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}
	for (i = length - length / 2; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
