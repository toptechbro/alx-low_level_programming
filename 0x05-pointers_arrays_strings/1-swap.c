#include "main.h"

/**
 * swap_int - Swaps the value of two int
 * @a: Pointing to value 1
 * @b: Pointing to value 2
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
