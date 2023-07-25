#include "main.h"

/**
 * _strlen - Prints the lenght of a string
 * @s: Pointer to string
 * Return: String lenght
 */
int _strlen(char *s)
{
	int i;
	int strlen = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		strlen++;
	return (strlen);
}
