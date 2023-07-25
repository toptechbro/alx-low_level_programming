#include <stdio.h>

int main(void)
{
	char f,l,m;
	int age;

	printf("Enter your initials\n");
	scanf("%c %c %c", &f, &l, &m);
	printf("Enter your age\n");
	scanf("%d", &age);
	printf("My initials are: %c %c %c and my age is: %d\n", f, l, m, age);
	return (0);
}
