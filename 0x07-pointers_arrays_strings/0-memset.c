#include "main.h"
/**
 * _memset - fills memory with a byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
