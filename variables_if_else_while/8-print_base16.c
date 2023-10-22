/**
 *main - return the alphabet
 * Return: 0
 */

#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
int i;

for (i = 0; i < 10; i++)

{
	putchar('0' + i);
}

for (i = 0; i < 6; i++)

{
	putchar('a' + i);
}
	putchar('\n');
	return (0);
}
