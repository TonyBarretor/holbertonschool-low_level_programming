/**
 * main - has 2 parameters argc and argv
 * @argc: counts the agrv parameters from 1
 * @argv: counts the parameters from 0
 * Return: this function returns the multiply of 2 numbers
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

