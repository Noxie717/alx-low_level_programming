#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: memory area
 * @src: memroy area
 * @n: int type
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x;

	x = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (x);
}
