#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	a = 0x00;

	for (a = 0; a < 16; a++)
	{
		if (a < 10)
		{
			putchar(a + '0');
		} else
		{
			putchar((a - 10) + 'a');
		}
	}
	putchar('\n');
	return (0);
}
