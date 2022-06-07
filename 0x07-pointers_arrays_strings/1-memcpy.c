#include "main.h"

/**
 * _memcpy - Task 1
 *
 *@dest: memory area to be filled
 *@src: the constant byte being used as a filler
 *@n: number of bytes to be filled
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
