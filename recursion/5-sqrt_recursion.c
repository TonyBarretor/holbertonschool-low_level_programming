/**
 * _sqrt_recursion - return natural square
 * find_sqrt - fin the square root
 * @n: number
 * @i: number to be root
 * Return: 0
 */

#include "main.h"

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}
