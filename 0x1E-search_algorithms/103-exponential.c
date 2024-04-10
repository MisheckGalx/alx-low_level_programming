#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @left: the left range
 * @right: the right range
 * Return: the index where value is located
 */

int Binary_Search(int *array, int value,
		size_t left, size_t right)
{
	size_t  i;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 *  exponential_search - searches for a value in a sorted array of
 *  integers using the Exponential search algorithm
 *  @array: is a pointer to the first element of the array to search in
 *  @size: is the number of elements in array
 *  @value: is the value to search for
 *  Return: return the first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", (i / 2), i);
	result = Binary_Search(array, value,
			(i / 2), (i < size) ? i : (size - 1));

	return (result);
