#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: character
 * Return: the first occurrence of the character c in the string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
