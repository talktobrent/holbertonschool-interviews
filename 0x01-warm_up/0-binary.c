#include "search_algos.h"


/**
 * binary_search_help - finds value in sorted array of ints
 * @array: array given
 * @lo: current low index
 * @hi: current high index
 * @value: value to find
 * Return: index where value is located, -1 if not found
 */

int binary_search_help(int *array, size_t lo, size_t hi, int value)
{
	size_t split = (hi + lo) / 2;
	size_t pindex;

	printf("Searching in array:");
	for (pindex = lo; pindex <= hi; pindex++)
	{
		printf(" %i", array[pindex]);
		if (pindex != hi)
			printf(",");
	}
	printf("\n");


	if (array[split] == value)
		return (split);

	if (split == hi)
		return (-1);

	if (array[split] < value)
		lo = split + 1;
	else
		hi = split;

	return (binary_search_help(array, lo, hi, value));
}

/**
 * binary_search - finds value in sorted array of ints
 * @array: array given
 * @size: size of array
 * @value: value to find
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_help(array, 0, size - 1, value));
}
