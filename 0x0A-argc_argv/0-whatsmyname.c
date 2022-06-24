#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name,  followed by a new line.
 * @argc: argument count
 * @argv: argument vector, a string that comes after calling a function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
