#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: Value to return last digit
 *
 * Return: success(Last digit of number), fail(0).
 */
int print_last_digit(int r)
{
	int l = r % 10;

	if (l >= 0)
	{
		_putchar(l + '0');
	} else if (l < 0)
	{
		l = -l;

		_putchar(l + '0');
	}
	return (l);
}
