#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: int type
 * @size: int type
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sizes;

	i = 0;
	sum = 0;
	sizes = size * size;
	while (i < sizes)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < sizes)
	{
		if (i % (size - 1) == 0 && i != (sizes - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
