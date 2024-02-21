#include "sort.h"

/**
 * bubble_sort - sorting array of int using bubble algorithm
 * @array: pointing to array
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{

	size_t x, idex, temp = 0;

	if (size < 2)
		return;
	for (x = 0; x < size; x++)
		for (idex = 0; idex < size; idex++)
		{
			if (array[idex] > array[idex + 1] && array[idex + 1])
			{
			temp = array[idex];
			array[idex] = array[idex + 1];
			array[idex + 1] = temp;
			print_array(array, size);
			}
		}
}
