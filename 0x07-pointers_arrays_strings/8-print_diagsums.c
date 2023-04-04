#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: integger
 * @size: integer
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i];
		sum1 = sum1 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", sum);
	printf("%d\n", sum1);
}
