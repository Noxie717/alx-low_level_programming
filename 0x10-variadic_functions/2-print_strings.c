#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: Other parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;
	char *string;

	va_start(p, n);
	for (; i < n; i++)
	{
		string = va_arg(p, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
