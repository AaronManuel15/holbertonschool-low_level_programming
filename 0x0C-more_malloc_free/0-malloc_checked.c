#include "main.h"
/**
  *malloc_checked - allocates memory using malloc
  *@b: the amount of memory to be allocated
  *
  *Return: void
  */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		free(memory);
		exit(98);
	}
	return (memory);
}
