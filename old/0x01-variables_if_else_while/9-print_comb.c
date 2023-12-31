#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Description: This program uses a loop to print all possible combinations of
 *              single-digit numbers separated by commas and spaces.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');

		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
