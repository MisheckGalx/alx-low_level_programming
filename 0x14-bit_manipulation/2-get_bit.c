#include "main.h"

/**
 * get_bit - Returns value of bit at index in a decimal number
 * @n: Number search
 * @index: Index of bit
 *
 * Return: value bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
