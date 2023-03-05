/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to ba taken from src
 *
 * Description: This function appends at most n bytes of the src string to
 * the dest string, overwriting the terminating null byte (\0) at the end
 * of dest, and then adds the terminating null byte.
 * Return: a pointer to the string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/* Declarations */
	int idst, isrc; /* indexes */

	/* Statements */
	idst = 0;
	isrc = 0;
	while ((*(src + isrc) != '\0') && (isrc < n))
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
