#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: char type
 * Return: length of string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
