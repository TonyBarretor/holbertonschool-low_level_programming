#include "main.h"
#include <stdio.h>

/**
 * print_array - int
 * @a: The array of integers.
 * @n: The number of elements to print
 * Descripcion: write the n elements of an array of integers
 * Return: 0
 */

void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
