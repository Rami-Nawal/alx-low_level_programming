#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char qoute[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";


	write(1, qoute, 59);
	return (1);
}
