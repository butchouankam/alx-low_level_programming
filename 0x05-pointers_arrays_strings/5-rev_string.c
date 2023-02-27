#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the pointer to the first character of the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	/* Declarations */
	int i, j;
	char tmp;

	/* Statements */
	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	if (i > 1)
	{
		for (j = 0; j < i; j++)
		{
			tmp = *(s + j);
			*(s + j) = *(s + (i - 1 - j));
			*(s + (i - 1 - j)) = tmp;
		}
	}
}
