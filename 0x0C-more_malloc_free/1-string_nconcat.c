#include "main.h"
/**
  *string_nconcat - Task 1: concatenates two strings
  *@s1: string one to be concatenated
  *@s2: string two to be concatenated
  *@n: number of bytes from s2 to concatenate
  *
  *Return: char
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatstr, *junk;
	size_t i, j;

	junk = malloc(5);
	free(junk);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concatstr = malloc(sizeof(s1) + (n * sizeof(char)));

	if (concatstr == NULL)
		return (NULL);

	if (n > strlen(s2))
	{
		for (i = 0; s1[i] != '\0'; i++)
			concatstr[i] = s1[i];
		for (j = 0; s2[j]; j++)
		{
			concatstr[i] = s2[j];
			i++;
		}
	} else
	{
		for (i = 0; s1[i] != '\0'; i++)
			concatstr[i] = s1[i];
		for (j = 0; j < n; j++)
		{
			concatstr[i] = s2[j];
			i++;
		}
	}
	concatstr[i] = '\0';

	return (concatstr);
}
