#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Task 4
 *
 *@s: initial segment that contains bytes from accept
 *@accept: bytes being checked for in s
 *
 * Return: unsigned int
 */

char *_strpbrk(char *s, char *accept)
{
	int pos, j;

	pos = 0;
	while (s[pos] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[pos] == accept[j])
			{
				return (&s[pos]);
			}
			j++;
		}
		pos++;
	}

return (NULL);
}
