#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the size of various types of the computer
 * it is compiled and run on.
 *
 * Return: 0 to signal end execution
 */
int main(void)
{
	/* Declarations */
	int i; /* counter */

	/* Statements */
	for (i = 1; i <= 5; i++)
	{
		printf("Size of a");
		switch (i)
		{
		case 1:
			printf(" char: %d", sizeof(char));
			break;
		case 2:
			printf("n int: %d", sizeof(int));
			break;
		case 3:
			printf(" long int: %d", sizeof(long int));
			break;
		case 4:
			printf(" long long int: %d", sizeof(long long int));
			break;
		case 5:
			printf(" float: %d", sizeof(float));
			break;
		}
		printf(" byte(s)\n");
	}
	return (0);
}
