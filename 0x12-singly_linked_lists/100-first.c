#include <stdio.h>

void print_first(void) __attribute__ ((constructor));


/**
 * print_first - prints a sentence befor main func
 * Return : void
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
