/**
 *main - return the alphabet
 * Return: 0
 */

#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
int a = 0;

while (a < 10)

{
	putchar('0' + a);
	if (a < 9)
{
	putchar(',');
	putchar(' ');
}
a++;
}
	putchar('\n');
	return (0);
}
