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
	char A = 'A';
	char Z = 'Z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	while (A <= Z)
	{
		putchar(A);
		A++;
	}
	putchar('\n');	
	return (0);
}
