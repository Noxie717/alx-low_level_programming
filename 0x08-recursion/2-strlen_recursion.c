#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: char string
 * Return: c
 */
int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s == '\0')
		return (0);

	c = 1 + _strlen_recursion(s + 1);

	return (c);
}
