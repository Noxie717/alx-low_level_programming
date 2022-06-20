#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int a, b;
	int x;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (a = 0, x = 0; s[a] != '\0'; a++)
	{
		if (s[0] > 96 && s[0] < 123)
		{
			x = 1;
		}

		for (b = 0; nots[b] != '\0'; b++)
		{
			if (nots[b] == s[a])
			{
				x = 1;
			}
		}
		if (x)
		{
			if (s[a] > 96 && s[a] < 123)
			{
				s[a] -= 32;
				x = 0;
			}
			else if (s[a] > 64 && s[a] < 91)
			{
				x = 0;
			}
			else if (s[a] > 47 && s[a] < 58)
			{
				x = 0;
			}
		}
	}
	return (s);
}
