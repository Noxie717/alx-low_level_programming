#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: An input character
 * Return: 0
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
