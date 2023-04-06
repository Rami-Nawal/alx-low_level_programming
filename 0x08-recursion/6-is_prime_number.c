#include "main.h"

/**
 * is_divisable - function that check if a divise b
 * @a: integer
 * @b: integer
 */

int is_divisable(int a, int b);

int is_divisable(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b != 0)
		is_divisable(a, b + 1);
	else
		return (0);
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * @n: integer
 * Return: result
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_divisable(n, 2));
}
