/**
 *main - return the alphabet
 * Return: 0
 */

#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
char lowercase = 'z';

while (lowercase >= 'a')

{
	putchar(lowercase);
	lowercase--;
}

	putchar('\n');
	return (0);
}
