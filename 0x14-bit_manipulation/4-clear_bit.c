#include "main.h"

/**
 * clear_bit - Sets the value of given bit to zero
 * @n: pointer number to change
 * @index: index the bit to clear
 *
 * Return: one for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
