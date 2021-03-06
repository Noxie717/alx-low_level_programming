#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input integer
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (prime(n, 2));
}

/**
 * prime - helper function for code
 * @a: number given to original function
 * @d: incrementer divisor
 * Return: 1 if prime, 0 otherwise
 */
int prime(int a, int d)
{
	if (a % d == 0)
		return (0);
	else if (_squrt(a, 1) < d)
		return (1);
	else
		return (prime(a, d + 1));
}

/**
 * _squrt - returns square root of number
 * @x: number
 * @i: incrementor divisor
 * Return: square root of x
 */
int _squrt(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
		return (i);
	else
		return (_squrt(x, i + 1));
}
