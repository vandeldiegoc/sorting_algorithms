#include "sort.h"

/**
 * bubble_sort - sort array
 * @array: array to be sort it
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
size_t a, b;
int t;

for (a = 0; a < size - 1; a++)
{
	for (b = 0; b < size - 1; b++)
	{
		if (array[b] > array[b + 1])
		{
		t = array[b];
		array[b] = array[b + 1];
		array[b + 1] = t;
		print_array(array, size);
		}
	}
	}
}
