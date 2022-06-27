#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space in memory which contains s1
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int q, w, e, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (q = 0; s1[q] != '\0'; q++)
		;
	for (w = 0; s2[w] != '\0'; w++)
		;

	p = malloc((q * sizeof(*s1)) + (w * sizeof(*s2)) + 1);
	if (p == NULL)
		return (NULL);

	for (e = 0, r = 0; e < (q + w + 1); e++)
	{
		if (e < q)
			p[e] = s1[e];
		else
			p[e] = s2[r++];
	}
	return (p);
}
