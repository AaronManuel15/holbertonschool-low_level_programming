#include "main.h"

/**
 * str_concat - Task 2
 *
 * @s1: string to be concatenated with s2
 * @s2: string to be appended on s1
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ar;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ar = malloc(strlen(s1) + strlen(s2) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ar[i] = s1[i];
	}
	j = i;
	for (i = 0; s2[i]; i++)
	{
		ar[j] = s2[i];
		j++;
	}
	return (ar);
}
