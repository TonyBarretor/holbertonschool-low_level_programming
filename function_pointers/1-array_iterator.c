/**
 * array_iterator - iterates
 * @array: array
 * @size: the size of
 * @action: the function to call
 * Return: 0
 */

#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
