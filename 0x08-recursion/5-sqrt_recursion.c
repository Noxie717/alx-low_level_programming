#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number value
 * Return: -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - helper function to slove _sqrt_recursion
 * @a: number to determine if square root
 * @i: incrementer to compare against a
 * Return: square root if natural square root, or -1 if not found
 */
int _sqrt(int a, int i)
{
	int square;

	square = i * i;
	if (square == a)
		return (i);
	else if (square < a)
		return (_sqrt(a, i + 1));
	else
		return (-1);
}
