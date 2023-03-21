#include "main.h"
/**
 * main - Entry point
 *
 * Return : always 0 (Succes)
 */
int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 1, i <= 8, i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
