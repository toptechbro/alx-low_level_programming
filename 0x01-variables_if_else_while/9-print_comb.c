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
		if (a < 9)
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		} else
		{
			putchar(a + '0');
		}
	}
	return (0);
}
