#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (0)
 */
int main(void)
{
	int m, n, o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = 10;
	o = n % m;


	if (o == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, o);
	} else if (o > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	} else if (o < 6 && o != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, o);
	}
	return (0);
}
