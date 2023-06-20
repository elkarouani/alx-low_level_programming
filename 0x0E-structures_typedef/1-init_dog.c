#include <stdlib.h>
#include "main.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog structure to be initialized
 * @name: initial dog's name
 * @age: initial dog's age
 * @owner: initial dog's owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
