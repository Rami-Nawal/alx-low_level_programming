#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * @str: pointer
 * Return: result
 */
char *_strdup(char *str)
{
	char *p;
	int i, size = 0;

	if (str == 0)
	{
		return (0);
	}
	else
	{
		while (str[size] != '\0')
			size++;
		p = malloc(size * sizeof(*str) + 1);
		if (p == 0)
		{
			return (0);
		}
		else
		{
			for (i = 0; i < size; i++)
				p[i] = str[i];
		}
	}
	return (p);
}
