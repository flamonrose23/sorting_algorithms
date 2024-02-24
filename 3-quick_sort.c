#include "sort.h"

/**
 * swap - swapng 2 arrays
 * @first: first index
 * @second: second index
 */
void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

/**
 * partition - function to partition array and sorting it
 * @array: pointing to array to be sorted
 * @strt: the start index
 * @ending:pointing to  the end index
 * @size: means size of the array
 */

void partition(int *array, int strt, int ending, size_t size)
{
	int piv = array[ending];
	int pindx = strt - 1;
	int x;

	if (strt < ending)
	{
		for (x = strt; x <= end - 1; x++)
		{
			if (array[x] <= piv)
			{
				pindx++;
				if (x != pindx)
				{
					swap(&array[pindx], &array[x]);
					print_array(array, size);
				}
			}
		}
		if (pindx + 1 != ending)
		{
			swap(&array[pindx + 1], &array[ending]);
			print_array(array, size);
		}
		partition(array, strt, pindx + 1 - 1, size);
		partition(array, pindx + 1 + 1, ending, size);
	}
}
/**
 * quick_sort - writing functio of quick sort
 *
 * @array: pointing to the array
 * @size: means size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	partition(array, 0, size - 1, size);
}
