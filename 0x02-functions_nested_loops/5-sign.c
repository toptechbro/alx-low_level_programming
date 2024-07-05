#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the character to be checked.
 *
 * Return: (1) if sign is positive, negative one if sign is negative, else (0).
 */
int print_sign(int n)
{
	if (n != 0)
	{
		while (n < 0)
		{
			_putchar(45);
			return (-1);
		}
		_putchar(43);
		return (1);
	}
	_putchar('0');
	return (0);
}
