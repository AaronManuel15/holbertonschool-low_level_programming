#include "holberton.h"

/**
 * _strcmp - Task 3
 *
 * @s1: string 1 to be compared to string 2
 * @s2: string 2 to be compared to string 1
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	i = *s1 - *s2;

return (i);
}
