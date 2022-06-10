#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int a, b, c;

	if (n >= 0)
	{
		a = n;
	}
	else
	{
		_putchar(45);
		a = n * -1;
	}

	b = a;
	c = 1;

	while (b > 9)
	{
		b /= 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
		_putchar(((a / c) % 10) + 48);
}
