#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 */

void print_to_98(int n)
{
	int cont;

	if (n > 98)
		for (cont = n; cont > 98; --cont)
			print("%d, ", cont);
	else
		for (cont = n; cont < 98; ++cont)
			printf("%d, ", cont);
	printf("98\n");
}
