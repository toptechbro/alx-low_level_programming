#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0.
 *
 * Return: always 0.
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (c < 10)
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
