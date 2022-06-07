#include "main.h"
#include <stddef.h>

/**
 * _strstr - Task 5
 *
 *@haystack: string being looked into.
 *@needle: substring being checked for in haystack
 *
 * Return: pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;

	b = needle;

	if (*b == 0)
	{
		return (char *) haystack;
	}

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
			{
				continue;
			}

		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return (char *) haystack;
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}

return (NULL);
}
