#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: character string
 * @age: float
 * @owner: character string
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggo;
	int i, j, k;
	char *n, *o;

	doggo = malloc(sizeof(struct dog));
	if (doggo == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(doggo);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(doggo);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	doggo->name = n;
	doggo->age = age;
	doggo->owner = o;

	return (doggo);
}
