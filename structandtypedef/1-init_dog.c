#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable struct dog
 * @d: this is the dog datatype
 * @name: this is the name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
