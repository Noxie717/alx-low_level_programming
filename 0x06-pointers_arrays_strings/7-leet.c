#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337.
 * @s: string
 * Return: 0
 */
char *leet(char *s)
{
	int i;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; s[i]; i++)
	{
		int z;

		for (z = 0; z < 5; z++)
		{
			if (s[i] != lower[z] && s[i] != upper[z])
				continue;

			s[i] = num[z];
			break;
		}
	}
	return (s);
}
