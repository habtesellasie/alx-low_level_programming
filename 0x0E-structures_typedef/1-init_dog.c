#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog data structure
 * @doggy: dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 */

void init_dog(struct dog *doggy, char *name, float age, char *owner)
{
	if (doggy != NULL)
	{
		doggy->name = name;
		doggy->age = age;
		doggy->owner = owner;
	}
}
