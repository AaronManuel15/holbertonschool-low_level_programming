#include "holberton.h"

/**
 * _strncat - Task 1
 *
 * @dest: destination that string is getting appended to
 * @src: string to be copied
 * @n: byte count limit
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j])
		{
			dest[i] = src[j];
			i++;
		} else
		{
			break;
		}
	}
return (dest);
}
