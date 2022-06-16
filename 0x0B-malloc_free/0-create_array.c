#include "main.h"

/**
 * create_array - Task 0
 *
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: NULL if size = 0, 
 */

 char *create_array(unsigned int size, char c)
 {
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));

	for (i = 0; i <= size; i++)
	{
		ar[i] = c;
	}
	return (ar);
 }
