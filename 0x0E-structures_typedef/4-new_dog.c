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
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL || name == NULL || owner == NULL)
	{
		free(newdog);
		return (NULL);
	}

	namecpy = malloc(sizeof(char) * sizeof(name) + 1);
	ownercpy = malloc(sizeof(char) * sizeof(owner) + 1);
	if (ownercpy == NULL || namecpy == NULL)
	{
		free(namecpy);
		free(ownercpy);
		free(newdog);
		return (NULL);
	}
	strcpy(ownercpy, owner);
	strcpy(namecpy, name);
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

