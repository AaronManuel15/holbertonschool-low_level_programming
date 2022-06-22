#include "dog.h"
/**
 * init_dog - Task 1: Write a function that init a var of type struct dog
 *
 *@d: struct given from user
 *@name: name of dog
 *@age: age of dog
 *@owner: owner's name
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

