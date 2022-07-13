#include "main.h"

/**
 * set_bit - sets the value of the bit referred to by index to 1
 * @index: bit location
 * @n: integer given
 *
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask = *n & ~(1 << index);

	*n = mask | (1 << index);
	return (1);
}
