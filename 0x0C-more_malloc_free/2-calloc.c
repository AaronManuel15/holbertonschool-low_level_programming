#include "main.h"
/**
  *_calloc - Task 2: rebuilding calloc
  *@nmemb: number of elements
  *@size: element size in bytes
  *
  *
  *Return: void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		memory[i] = 0;

	return (memory);
}
