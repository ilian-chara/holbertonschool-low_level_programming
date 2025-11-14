#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* new_dog - create a copy of a dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: nothing
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *copyN, *copyO;
	int e, r;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	return (NULL);

	for (e = 0; name[e]; e++)
	;
	copyN = malloc(e + 1);
	if (copyN == NULL)
	{
		free(d);
		return (NULL);
	}
	for (r = 0; owner[r]; r++)
	;
	copyO = malloc(r + 1);
	if (copyO == NULL)
	{
		free(copyN);
		free(d);
		return (NULL);
	}

	for (e = 0; name[e]; e++)
	copyN[e] = name[e];
	copyN[e] = '\0';

	for (r = 0; owner[r]; r++)
	copyO[r] = owner[r];
	copyO[r] = '\0';

	d->name = copyN;
	d->age = age;
	d->owner = copyO;

	return (d);
}
