#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: string type
 * @src: string type
 * @n: int type
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b, d;

	for (b = 0; dest[b] != '\0'; b++)
		;


	for (d = 0; src[d] != '\0' && n > 0; b++, n--, d++)
	{
		dest[b] = src[d];
	}
	return (dest);
}
