#include "holberton.h"

/**
 * _strncpy - Task 2
 *
 * @dest: destination that string is getting appended to
 * @src: string to be copied
 * @n: byte count limit
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

return (dest);
}
