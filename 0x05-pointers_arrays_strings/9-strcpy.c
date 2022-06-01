#include "main.h"

/**
 * _strcpy - Task 9
 *
 * @dest: destination that string is getting copied to
 * @src: string to be copied
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *copier = src;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (copier);
}
