#include "main.h"

/**
 * rev_string - Task 5
 *
 * @s: given from user to be printed normal and in reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int temp;
	int i;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

}
