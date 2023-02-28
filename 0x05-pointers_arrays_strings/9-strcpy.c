/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the pointer to the buffer
 * @src: the pointer to the string to be copied
 *
 * Return: the pointer dest.
 */
char *_strcpy(char *dest, char *src)
{
	/* Declarations */
	int i;

	/* Statements */
	i = 0;
	do {
		*(dest + i) = *(src + i);
		i++;
	} while (*(src + (i - 1)) != '\0');
	return (dest);
}
