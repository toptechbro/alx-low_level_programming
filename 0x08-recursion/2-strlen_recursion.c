#include "main.h"

/**
 * _strlen_recursion - prints the lenght of a string
 * @s: String to be measured
 *
 * Return: Returs the len of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
		return (len);
}
