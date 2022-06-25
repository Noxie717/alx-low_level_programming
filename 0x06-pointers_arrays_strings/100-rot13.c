#include "main.h"
/**
 * rot13 - encodes a string
 * @str: char string
 * Return: s
 */
char *rot13(char *str)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i]; i++)
	{
		int x;

		for (x = 0; x < 54; x++)
		{
			if (((str[i] > 'z' || str[i] < 'a') && (str[i] > 'Z' || str[i] < 'A'))
				|| str[i] != alpha[x])
				continue;

			str[i] = rot13[x];
			break;
		}
	}

	return (str);
}
