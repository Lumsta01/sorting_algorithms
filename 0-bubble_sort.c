#include "sort.h"

/**
 * bubble_sort - function that sort integers in ascending order.
 * @array: sequence of intergers.
 * @size: size of array.
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{

		swapped = false;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{

				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}
