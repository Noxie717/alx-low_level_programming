#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of unsigned int
 * @c: char type
 * Return: a pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int b;

	if (size == 0)
		return (NULL);

	z = malloc(size * sizeof(*z));
	if (z == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		z[b] = c;

	return (z);
}
