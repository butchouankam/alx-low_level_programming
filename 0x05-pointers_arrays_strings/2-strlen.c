/**
 * _strlen - returns the length of a string
 * @str: the pointer to a string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	/* Declarations */
	int i;

	/* Statements */
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
