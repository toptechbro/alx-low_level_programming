#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always s0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
