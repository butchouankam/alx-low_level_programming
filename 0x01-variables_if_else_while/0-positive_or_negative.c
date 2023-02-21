#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints whether the random number n is positive or negative
 *
 * Description: The variable n will store a different value everytime
 * you run the program. The output of the program should be:
 * 	- the number followed by
 * 		* if the number is greater than zero: is positive
 * 		* if the number is 0: is zero
 * 		* if the number is less than zero: is negative
 * 	- followed by a new line
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	Printf("%d ",n);
	if (n > 0)
	{
		printf("is positive");
	}
	else
	{
		if (n < 0)
			printf("is negative");
		else
			printf("is zero");
	}
	return (0);
}
