#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Return: 0
 */
void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
