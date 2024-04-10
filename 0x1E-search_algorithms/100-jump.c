#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: size of the array
 * @value: is the value to search for
 * Return: return the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0, i, low;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] == value)
		{
			printf("Value found between indexes ");
			printf("[%ld] and [%ld]\n", low, i);
			return (i);
		}

		if (array[i] < value)
			low = i;

		if (array[i] > value)
		{
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, i);

	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
