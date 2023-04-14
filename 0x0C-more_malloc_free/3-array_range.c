#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: integer
 * @max: integer
 * Return: result
 */

int *array_range(int min, int max)
{
	int i, len;
	int *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (p == 0)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min++;
	return (p);
}
