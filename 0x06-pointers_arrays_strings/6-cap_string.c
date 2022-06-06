#include "holberton.h"

/**
 * cap_string - Task 6
 *
 * @s: string to be capitalized
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
		}
		i++;
	}
return (s);
}
