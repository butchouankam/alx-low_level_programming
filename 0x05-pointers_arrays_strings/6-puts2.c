#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first one
 * @str: pointer to the string whose characters will be extracted
 *
 * Return: void
 */
void puts2(char *str)
{
	/* Declarations */
	int i;

	/* Statements */
	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
}
