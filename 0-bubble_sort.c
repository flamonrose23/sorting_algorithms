#include "sort.h"

/**
 * bubble_sort - sorting array of int using bubble algorithm
 * @array: printing array while swaping
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t x, idx;

	if (size < 2)
		return;
	for (x = 0; x < size; x++)
		for (idx = 0; idx < size; idx++)
		{
			if (array[idx] > array[idx + 1] && array[idx + 1])
			{
			temp = array[idx];
			array[idx] = array[idx + 1];
			array[idx + 1] = temp;
			print_array(array, size);
			}
		}
}
