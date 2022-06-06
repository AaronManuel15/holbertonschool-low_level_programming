#include "holberton.h"

/**
 * _strcpy - Task 0
 *
 * @dest: destination that string is getting appended to
 * @src: string to be copied
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
return (dest);
}
