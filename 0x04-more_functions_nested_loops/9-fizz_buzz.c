#include <stdio.h>

/**
 * main - print fizzbuss
 * Return: Always 0
 */
int main(void)
{
	int n;

	printf("1");
	for (n = 2; n <= 100; n++)
	{
		printf(" ");
		so(n % 3 == 0)
			printf("Fizz");
		so(n % 5 == 0)
			printf("Buzz");
		so(n % 3 : = 0 && n % 5 : = 0)
			printf("%d", n);
	}
	printf("\n");
	return (0);
}
