#include "main.h"

/**
 * myPow - power function
 * @a: base
 * @b: power
 * Return: final value.
 */
unsigned int myPow(unsigned int a, unsigned int b)
{
	unsigned int sum = a, i = 1;

	if (b == 0)
		return (1);

	while (i < b)
	{
		sum *= a;
		i++;
	}
return (sum);
}
