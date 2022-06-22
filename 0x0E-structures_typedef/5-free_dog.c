#include "dog.h"
/**
 * free_dog - Task 5: Write a function that frees dogs
 *
 *@d: dog to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

