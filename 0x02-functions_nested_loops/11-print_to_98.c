#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Number to print from
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int o;

	for (o = n; o <= 98; o++)
	{
		if (o != 98)
		{
			printf("%d, ", o);
		}
		else if (o == 98)
		{
			printf("%d\n", o);
		}
	}
	for (o = n; o > 98; o--)
	{
		if (o != 98)
		{
			printf("%d, ", o);
		}
		else if (o == 98)
		{
			printf("%d\n", o);
		}
	}
}
