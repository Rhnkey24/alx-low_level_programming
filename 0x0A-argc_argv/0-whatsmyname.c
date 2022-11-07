#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - fuction
 * @argc: the int
 * @argv: the chaine of chaine
 *
 * Return: Always zero
 */

int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}
