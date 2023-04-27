#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using bubble sort
 *
 * @array: array of integers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap;

	if (!array || size < 2))
		return NULL;

	for (i = 0; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap < 1)
			break;
	}
}
