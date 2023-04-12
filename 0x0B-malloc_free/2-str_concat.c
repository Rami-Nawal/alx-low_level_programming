#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *s;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	s = malloc((size1 + size2) * sizeof(char) + 1);
	if (s == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
