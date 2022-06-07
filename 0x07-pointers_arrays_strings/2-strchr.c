#include "main.h"

/**
 * _strchr - Task 2
 *
 *@s: string being checked for c
 *@c: character being checked for in s
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
return (s + i);
}
