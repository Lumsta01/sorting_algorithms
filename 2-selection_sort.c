#include "sort.h"

/**
 * selection_sort - sort array in ascendin order section sort
 * @array: array of integers
 * @size: size of an array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int i, j, min_index;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		int temp = array[min_index];
		array[min_index] = array[i];
		array[i] = temp;

		printf("sorted array: ");
		for (size_t k = 0; k < n; k++)
			printf("%d ", array[k]);
	}
	printf("\n");
}


