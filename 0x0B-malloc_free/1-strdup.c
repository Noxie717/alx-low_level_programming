#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char string
 * Return: pointer to the duplicated string
 * NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *s;
	int i, t;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);

	for (t = 0; t < i; t++)
		s[t] = str[t];
	s[t] = '\0';

	return (s);
}
