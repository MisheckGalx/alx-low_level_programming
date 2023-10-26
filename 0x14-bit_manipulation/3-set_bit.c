#include "main.h"

/**
 * set_bit - Sets bit at a given index to one
 * @n: Pointer to number to change
 * @index: Index of the bit to set to one
 *
 * Return: one for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
