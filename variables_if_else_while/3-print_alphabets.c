/**
 *main - return the alphabet
 * Return: 0
 */

#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)

{
	putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)

{
	putchar(letter);
}
	putchar('\n');

	return (0);
}
