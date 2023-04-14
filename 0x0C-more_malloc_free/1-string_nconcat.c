#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2;

	if (s1 == 0)
		s1 = " ";
	if (s2 == 0)
		s2 = " ";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	s = malloc(len1 + n + 1);
	if (s == 0)
	{
		return (0);
	}
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
