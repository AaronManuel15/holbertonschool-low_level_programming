#include "main.h"

/**
 * _strdup - Task 1
 *
 * @str: string to be duplicated
 * 
 *
 * Return: NULL if str = NULL,
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}

	ar = malloc(strlen(str) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
