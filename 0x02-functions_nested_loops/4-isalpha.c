#include "main.h"

/**
 * _isalpha - checks if character is an alphabetic letter
 * @c: character to be checked.
 *
 * Return: Success (1); failed(0).
 */
int _isalpha(int c)
{
	return ((c + '0' > 64 && c < 91) || (c >= 96 && c < 123));
}
