#include "main.h"
#include "myPow.c"

/**
 * binary_to_uint - converts string of binary to unsigned int
 * @b: string being passed
 *
 * Return: converted number on success, 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int sum = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += myPow(2, strlen(b) - i - 1);
		i++;
	}
	return (sum);
}
