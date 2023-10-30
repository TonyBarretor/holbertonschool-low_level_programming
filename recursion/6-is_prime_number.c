/**
 * is_prime_number - returns 1 
 * @n: the number
 * Return: 1 if prime if not 0
 */

#include "main.h"

int is_prime_number(int n)
{
	int i;
    if (n <= 1) {
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
