#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: other parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;
	int num;

	va_start(p, n);
	for (; i < n; i++)
	{
		num = va_arg(p, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
