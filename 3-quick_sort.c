#include "sort.h"

/**
 * *swap - positions of 2 elements into array
 * *@array: pointing to array
 * *@item1: array one
 * *@item2: array two
*/

void swap(int *array, ssize_t item1, ssize_t item2)
{
	int temp;

	temp = array[item1];
	array[item1] = array[item2];
	array[item2] = temp;
}

/**
 *lomuto_partition - means lomuto partition of scheme implementation
 *@array: pointing to array
 *@first: pointing to first array
 *@last: pointing to last array
 *@size: means size of array
 *Return: returning position of last array sorted
 */

int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size)
{
	int piv = array[last];
	ssize_t curr = first, find;

	for (find = first; find < last; find++)
	{
		if (array[find] < piv)
		{
			if (array[curr] != array[find])
			{
				swap(array, curr, find);
				print_array(array, size);
			}
			curr++;
		}
	}
	if (array[curr] != array[last])
	{
		swp(array, curr, last);
		print_array(array, size);
	}
	return (curr);
}

/**
 *qs - meaning quicksort of algorithm implementation
 *@array: pointing to array
 *@first: pointing to first array
 *@last: pointing to last array
 *@size: means size of array
 */

void qs(int *array, ssize_t first, ssize_t last, int size)
{
	ssize_t position = 0;


	if (first < last)
	{
		position = lomuto_partition(array, first, last, size);

		qs(array, first, position - 1, size);
		qs(array, position + 1, last, size);
	}
}

/**
 *quick_sort - preparing terrain to quicksort algorithm
 *@array: pointing to array
 *@size: means size of array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size);
}
