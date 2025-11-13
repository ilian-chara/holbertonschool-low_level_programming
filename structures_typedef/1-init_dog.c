#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* init_dog - make a variable of struct dog
* @d: pointer to struct dog
* @age: dog age
* @owner: dog owner
* @name: dog name
* Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
