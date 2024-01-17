#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - this creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *DOG_name;
	char *DOG_owner;
	float DOG_age;

	doggy = malloc(sizeof(dog_t));

	DOG_owner = owner;
	DOG_name = name;
	DOG_age = age;
	
	doggy->name = DOG_name;
	doggy->owner = DOG_owner;
	doggy->age = DOG_age;

	if (doggy == NULL){
		return (NULL);
	}
	return (doggy);
}
