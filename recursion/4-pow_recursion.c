/**
 * _pow_recursion - int
 * @x: the character checked
 * @y: checked
 * Description: function returns the value of x raised to the power of y
 * Return: 0
 */

#include "main.h"
#include <stdio.h>

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-2);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
