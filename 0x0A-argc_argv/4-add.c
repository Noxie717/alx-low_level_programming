#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int Total, i, n;
	char *p;

	Total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &p, 10);
			if (!*p)
				Total += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", Total);
	return (0);
}
