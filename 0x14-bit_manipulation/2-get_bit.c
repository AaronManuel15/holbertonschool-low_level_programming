#include "main.h"

/**
 * get_bit - gets the value of the bit referred to by index
 * @index: bit location
 * @n: integer given
 *
 * Return: value of bit on success, -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
