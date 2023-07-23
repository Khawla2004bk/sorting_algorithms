#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;
	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapint(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		length--;
	}
}
