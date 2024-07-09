#include "main.h"
#include <stdio.h>

/**
 * _abs - calculates the absolute value of an integer
 * @a: value to calculate absolute value.
 *
 * Return: The absolue value of the integer
 */
int _abs(int a)
{

	if (a < 0)
	{
		return (0 - a);
	} else if (a > 0)
	{
		return (a - 0);
	}
	else
	{
		return (0);
	}
}
