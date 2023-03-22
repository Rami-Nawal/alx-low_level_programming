#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number
 * @n: integer
 * Return: lest digit of a numbe
 */

int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j >= 0)
		return (j);
	else
		return (-j);
}
