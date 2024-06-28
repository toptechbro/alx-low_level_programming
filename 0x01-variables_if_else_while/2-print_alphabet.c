#include <stdio.h>

/**
 * main - Emtry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
