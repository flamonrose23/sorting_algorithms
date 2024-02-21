#include "sort.h"

/**
 * selection_sort - sorting  array of integers
 * using Selection of sort algorithm
 * @size: pointing to size of array
 * @array: pointing to array
 */

void selection_sort(int *array, size_t size)
{
	size_t x, idex;
	int temp, swp, flag = 0;

	if (array == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		temp = x;
		flag = 0;
		for (idex = x + 1; idex < size; idex++)
		{
			if (array[temp] > array[idex])
			{
				temp = idex;
				flag += 1;
			}
		}
		swp = array[x];
		array[x] = array[temp];
		array[temp] = swp;
		if (flag != 0)
			print_array(array, size);
	}
}
