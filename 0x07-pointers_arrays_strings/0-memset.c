#include "main.h"

/**
 * _memset - Task 0
 *
 *@s: memory area to be filled
 *@b: the constant byte being used as a filler
 *@n: number of bytes to be filled
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
