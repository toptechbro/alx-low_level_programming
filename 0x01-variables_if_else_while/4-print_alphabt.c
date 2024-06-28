#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z' && (a != 'e' || a != 'q'))
	{
		putchar(a);
		a++;

		while (a == 'e' || a == 'q')
		{
			a++;
		}
	}
	putchar('\n');
	return (0);
}
