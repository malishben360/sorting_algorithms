#include "sort.h"

/**
 * bubble_sort - sorts an array of int in asc order using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int swaped;
	int temp;

	for (i = 0; i < size; i++)
	{
		swaped = 0;
		for (j = 0; j < size - (i + 1); j++)
		{
			if(array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swaped = 1;
			}
		}
		if(!swaped)
			break;
	}
}
