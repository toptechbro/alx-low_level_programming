#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char z = 'z';
	char a = 'a';

	while (a <= z)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
