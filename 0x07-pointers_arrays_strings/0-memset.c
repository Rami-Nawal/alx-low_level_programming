#include "main.h"

/**
 * _memset- function that fills memory with a constant byte
 * @s: pointer
 * @b: char
 * @n: integer
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
