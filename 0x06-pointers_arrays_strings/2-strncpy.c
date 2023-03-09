/**
 * _strncpy - a function that copies n characters of a string
 * @dest: the pointer of the copied string
 * @src: the pointer to the string to be copied
 * @n: the number of characters to be copied
 *
 * Return: the pointer to the copied string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	/* Declarations */
	int i;

	/* Statements */
	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
