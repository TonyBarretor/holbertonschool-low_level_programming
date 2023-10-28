/**
 * swap_int - int a. int b
 * @a: number
 * @b: number 2
 * Description: this function changes the value variables
 * Return: 0
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
