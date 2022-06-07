#include "main.h"
#include <stddef.h>

/**
 * _strspn - Task 3
 *
 *@s: initial segment that contains bytes from accept
 *@accept: bytes being checked for in s
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}

return (i);
}
