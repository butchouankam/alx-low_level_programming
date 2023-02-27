/**
 * swap_int - swaps the value of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	/* Declarations */
	int tmp;

	/* Statements */
	tmp = *a;
	*a = *b;
	*b = tmp;
}
