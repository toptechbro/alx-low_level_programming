#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and determines the last digit.
 * It classifies the last digit as greater than 5, less than 6 (excluding 0),
 * or 0, and prints the corresponding result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Initialize random seed */
	n = rand() - RAND_MAX / 2;

	/* Determine the last digit of n and classify it */

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}

	return (0);
}
