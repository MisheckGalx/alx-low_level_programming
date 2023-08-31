#include "main.h"

/**
 * Get_endianness - checks if machine is little & big endian
 * Return: zero for big, one for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
