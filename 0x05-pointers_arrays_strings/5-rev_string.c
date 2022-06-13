#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char type
 */
void rev_string(char *s)
{
	int b = 0, d = 0;
	char g;

	while (s[b] != '\0')
		b++;

	while (d < b--)
	{
		g = s[d];
		s[d++] = s[b];
		s[b] = g;
	}
}
