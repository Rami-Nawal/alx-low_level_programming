#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *t;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				t = &s[i];
				return (t);
			}
		}
	}
	return (0);
}
