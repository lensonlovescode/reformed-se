#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog  struct with members age, name and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typde for the dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the owner
 */

typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);




#endif

