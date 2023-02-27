#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the integer whose absolute value is computed
 *
 * Return:
 * - n if n is more than or equal to zero
 * - -n otherwise
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
