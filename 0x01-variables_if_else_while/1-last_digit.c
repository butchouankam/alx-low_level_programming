#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the last digit of random number n and its range
 *
 * Desciption: This program will assign a random number to the variable n
 * each time it is executed. The output of the program should be
 * the string "Last digit of", followed by the value of n,
 *  followed by the string "is", followed by the said digit, followed by:
 *  - if the last digit of n is greater than 5: "and is greater than 5"
 *  - if the last digit of n is 0: "and is O"
 *  - if the last digit of n is less than 6 and not 0: "and is less that 6 and not 0"
 *  followed by a new line.
 *  Return: O to signal good execution
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;/* set ld - last digit */
	printf("Last digit of %d is %d and is ", n, ld);
	if (ld > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		if (ld > 0)
			printf("less than 6 and not ");
		printf("0\n");
	}
	return (0);
}
