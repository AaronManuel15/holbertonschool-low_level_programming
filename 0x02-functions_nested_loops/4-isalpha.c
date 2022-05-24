#include "main.h"
/**
 * _isalpha - Task 4 program returns character case
 *
 * @c: Input from user or program
 *
 * Return: 0 (Successful)
 *
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	} else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
return (0);
}
