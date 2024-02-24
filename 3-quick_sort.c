#include "sort.h"

/**
 * swap - swap two array indices.
 * @fi: first index.
 * @si: second index.
 */
void swap(int *fi, int *si)
{
	int tmp = *fi;
	*fi = *si;
	*si = tmp;
}

/**
 * partition - partitioning a array and sorting it recursively.
 * @array: the array to be sorted
 * @start: the start index
 * @end: the end index
 * @size: The size of the array
 */
void partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int pindex = start - 1;
	int i;

	if (start < end)
	{
		for (i = start; i <= end - 1; i++)
		{
			if (array[i] <= pivot)
			{
				pindex++;
				if (i != pindex)
				{
					swap(&array[pindex], &array[i]);
					print_array(array, size);
				}
			}
		}
		if (pindex + 1 != end)
		{
			swap(&array[pindex + 1], &array[end]);
			print_array(array, size);
		}
		partition(array, start, pindex + 1 - 1, size);
		partition(array, pindex + 1 + 1, end, size);
	}
}
/**
 * quick_sort - quick sort function
 *
 * @array: The array
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	partition(array, 0, size - 1, size);
}
