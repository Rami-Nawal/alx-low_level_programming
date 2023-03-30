#include "main.h"
#include <string.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
