#include "main.h"
/**
  *array_range - Task 3: creates an array of integers
  *@min: lower int value
  *@max: upper int value
  *
  *
  *Return: int pointer
  */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		array[i] = min + i;

	return (array);
}
