#include "sort.h"

/**
 * bubble_sort - function sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: Array contains the elements in an unordered way
 * @size: Size of the array
*/

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, dup;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap */
				dup = array[j];
				array[j] = array[j + 1];
				array[j + 1] = dup;
				print_array(array, size);
			}
		}
	}
}
