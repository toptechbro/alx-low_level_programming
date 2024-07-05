#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the character to be checked.
 *
 * Return: (1) if sign is positive, negative one if sign is negative, else (0).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	} else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
