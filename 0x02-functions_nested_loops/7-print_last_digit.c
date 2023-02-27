#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last digit is printed
 *
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	/* Declarations */
	int d;

	/* Statements */
	d = n % 10;
	if (d < 0)
		d = -d;
	_putchar('0' + d);
	return (d);
}
