#include <stdio.h>

int add(int a, int b, int c)
{
	int result;

	result = a + b + c;
	return (result);
}
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 1 + 2 + 3 * 4 - 1;
	b = 23 + add(32, a, a + b);
	printf("%d\n", b);
	return (0);
}
