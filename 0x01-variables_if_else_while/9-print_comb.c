#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always s0 (success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
			a++;
		} else
		{
			putchar('\n');
			a++;
		}
	}
	return (0);
}
