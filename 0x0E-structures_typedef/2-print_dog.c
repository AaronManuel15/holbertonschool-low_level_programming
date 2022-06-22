#include "dog.h"
/**
 * print_dog - Task 2: Write a function that prints a struct dog
 *
 *@d: struct given from user
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}

