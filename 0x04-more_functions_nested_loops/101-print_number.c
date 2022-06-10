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
		x = n;
	}
	else
	{
		_putchar(45);
		x = n * -1;
	}

	y = x;
	c = 1;

	while (y > 9)
	{
		y /= 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
		_putchar(((x / c) % 10) + 48);
}
