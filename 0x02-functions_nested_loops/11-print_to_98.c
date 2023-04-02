#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number from n to 98, followed by a new line
 * @n: the number we start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int increment = 0;

	if (n < 98)
		increment = 1;
	if (n > 98)
		increment = -1;
	do {
		printf("%d", n);
		if (n != 98)
			printf(", ");
		else
			printf("\n");
		n += increment;
	} while ((n - increment) != 98);
}
