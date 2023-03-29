#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @doggy: The struct dog to be printed.
 */
void print_dog(struct dog *doggy)
{
	if (doggy == NULL)
		return;

	if (doggy->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", doggy->name);

	if (doggy->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", doggy->age);

	if (doggy->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", doggy->owner);
}
