/**
 * print_alphabet - prints the alphabet, in lower case, followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	/* Declarations */
	int i;

	/* Statements */
	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}
