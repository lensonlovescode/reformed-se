#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - this prints the details of a dog
 * @d: this is the pointer to the dog variable
 * Return: this returns null
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(98);
	}
	if (d->name != NULL){
		printf("Name: %s\n", d->name);
	}
	else{
		printf("Name: (nil)\n");
	}
	if (d->age != 0.1){
		printf("Age: %f\n", d->age);
	}
	else{
		printf("Age: (nil)\n");
	}
	if (d->owner != NULL){
		printf("Owner: %s\n", d->owner);
	}
	else{
		printf("Owner: (nil)\n");
	}
}
