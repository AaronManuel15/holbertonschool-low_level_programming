#include "dog.h"
/**
 * new_dog - Task 4: Write a function that creates a new dog
 *
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *
 * Return: type if successfull
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *namecpy, *ownercpy;

	dog_t *newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	namecpy = malloc(sizeof(name) + 1);
	strcpy(namecpy, name);
	ownercpy = malloc(sizeof(owner) + 1);
	strcpy(ownercpy, owner);

	newdog->name = namecpy;

	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->owner = ownercpy;

	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->age = age;

	return (newdog);
}

