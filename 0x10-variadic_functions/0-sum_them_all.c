#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: other parameters
 * Return: 0, if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(p, n);
	for (; i < n; i++)
		sum += va_arg(p, int);

	va_end(p);
	return (sum);
}
