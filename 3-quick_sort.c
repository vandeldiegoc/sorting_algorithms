#include "sort.h"

/**
 * partition - separe, change position and print array
 * @array: array to be sort it
 * @size: array size
 * @first: first position of array
 * @last: last position of array
 * Return: i
 */

int partition(int *array, int first, int last, size_t size)
{
int pivot = array[last];
int j, temp;
int i = first;

	for (j = first; j < last; j++)
	{
		if (array[j] <=  pivot)
		{
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
temp = array[last];
			array[last] = array[i];
			array[i] = temp;
			if (i != j)
				print_array(array, size);

return (i);
}

/**
 * quicks - implements QuickSort
 * @array: array to be sort it
 * @size: array size
 * @first: first position of array
 * @last: last position of array
 */

void quicks(int *array, int first, int last, size_t size)
{
int pivot;
	if (first < last)
	{
		pivot = partition(array, first, last, size);
		quicks(array, first, pivot - 1, size);
		quicks(array, pivot + 1, last, size);
	}

}

/**
 * quick_sort - driver Code
 * @array: array to be sort it
 * @size: array size
 */

void quick_sort(int *array, size_t size)
{

if (size < 2 || !array)
	return;
quicks(array, 0, size - 1, size);
}
