#include "sort.h"
/**
 * selection_sort - function that sorts an array of integer in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp, swp, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		flag = 0;
		for (index = i + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				flag += 1;
			}
		}
		swp = array[i];
		array[i] = array[tmp];
		array[tmp] = swp;
		if (flag != 0)
			print_array(array, size);
	}
}
