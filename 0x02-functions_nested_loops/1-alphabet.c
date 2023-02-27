/**
 * print_alphabet - prints the alphabet, in lower case, followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	/* Declarations */
	char c

	/* Statements */
	while (c <= 'z')
	{
		c_putchar(c);
		c++;
		(char)c;
	}
	_putchar('\n');
}
