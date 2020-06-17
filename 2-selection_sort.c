#include "sort.h"

/**
 * selection_sort - sort array
 * @array: array to be sort it
 * @size: array size
 */

void selection_sort(int *array, size_t size)
{
size_t i, x, j = 0, temp;

for (i = 0; i < size - 1; i++)
{
j = i;
for (x = i + 1; x < size; x++)
{
if (array[x] < array[j])
{
j = x;
}
}
if (i != j)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
