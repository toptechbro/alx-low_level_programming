#include "main.h"

/**
 * _pow_recursion - Evaliates x with the power of y
 * @x: base number
 * @y: power of the base
 *
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
