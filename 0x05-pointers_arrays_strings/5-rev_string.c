#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i, temp;
	int l;

	for (l = 0 ; s[l] != '\0' ; ++l)
		;
	for (i = 0 ; i < l / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
