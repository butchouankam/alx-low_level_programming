void _putchar(char *c);

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds the terminating null byte.
 * Return: a pointer to the string dest.
 */
char *_strcat(char *dest, char *src)
{
	/* Declarations */
	int idst, isrc; /* indexes */

	/* Statements */
	idst = 0;
	isrc = 0;
	while (*(src + isrc) != '\0')
	{
		if (*(dest + idst) == '\0')
		{
			*(dest + idst) = *(src + isrc);
			*(dest + idst + 1) = '\0';
			isrc++;
		}
		idst++;
	}
	return (dest);
}
