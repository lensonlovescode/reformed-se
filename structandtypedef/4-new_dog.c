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
	int name_len;
	int owner_len;

	doggy = malloc(sizeof(dog_t));
	
	if (name != NULL && owner != NULL)
	{
		doggy = malloc(sizeof(dog_t));
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;

		if (doggy == NULL)
			return (NULL);

		doggy->name = malloc(name_len + 1);

		if (doggy->name == NULL)
		{
			free(doggy->name);
			return (NULL);
		}

		doggy->owner = malloc(owner_len + 1);

		if (doggy->owner == NULL)
		{
			free(doggy->owner);
			return (NULL);
		}

		doggy->name = _strcpy(doggy->name, name);
		doggy->owner = _strcpy(doggy->owner, owner);
		doggy->age = age;
	}
	return (doggy);
}
/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;
	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
	}
