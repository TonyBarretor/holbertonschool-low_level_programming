/**
 * check_divisibility - check for
 * is_prime_number - prime number
 * @n: number
 * @i: iterations
 * Return: 0
 */

#include "main.h"

int check_divisibility(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	return (check_divisibility(n, i + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_divisibility(n, 2));
}
