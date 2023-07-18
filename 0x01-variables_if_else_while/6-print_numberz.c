#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints all single-digit numbers in base 10, starting from 0,
 * using only the putchar function and without using char variables.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
