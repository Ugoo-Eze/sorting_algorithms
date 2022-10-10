#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: Array that contain the elements in a disorder way
 * @size: Size of the array
*/

void selection_sort(int *array, size_t size)
{
	int *a, *b, c, tmp;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		a = &array[i];
		c = 0;
		/* select minimum value */
		for (j = i + 1; j < size; j++)
		{
			b = &array[j];
			/**
			 * Change pos of first pointer
			 * if a lower value is found
			*/
			if (*a > *b)
			{
				a = b;
				c = j;
			}
		}
		/* Make change only if a lower value is founf */
		if (c != 0)
		{
			tmp = array[i];
			array[i] = *a;
			array[c] = tmp;
			print_array(array, size);
		}
	}
}
