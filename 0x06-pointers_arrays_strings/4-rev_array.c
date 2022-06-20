#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: int type
 * @n: int type
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < (n / 2); i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
