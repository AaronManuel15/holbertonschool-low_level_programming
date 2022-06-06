#include "holberton.h"

/**
 * leet - Task 7
 *
 * @s: string to be encoded
 *
 * Return: char
 */
char *leet(char *s)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;

		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
return (s);
}
