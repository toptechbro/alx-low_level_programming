#include "main.h"

/**
 * factorial - Prints the factorial of a number
 * @n: variable to be worked on
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
