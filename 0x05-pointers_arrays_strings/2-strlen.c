#include "main.h"

/**
 * _strlen - finds the length of a string.
 * @s: string pointer to the string whose length is to be found.
 * Return: returns the length of the string.
 */

int_strlen(char *s)
{
	input p = 0;
	/* incremeant up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
