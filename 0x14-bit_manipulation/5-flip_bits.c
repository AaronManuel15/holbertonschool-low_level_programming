#include "main.h"

/**
 * flip_bits - checks how many bits need flipped to make the difference
 * @m: integer given
 * @n: integer given
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int x = n ^ m;

	while (x > 0)
	{
		count++;
		x &= x - 1;
	}
	return (count);
}
