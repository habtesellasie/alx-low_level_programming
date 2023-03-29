#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - freeing a dog
 * @doggy: a dog to be freed
 * Return: void
 */

void free_dog(dog_t *doggy)
{
	if (doggy == NULL)
		return;
	free(doggy->owner);
	free(doggy->name);
	free(doggy);
}
