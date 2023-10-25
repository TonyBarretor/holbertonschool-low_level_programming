/**
 * main - receive 2 parameters, argc and argv
 * @argc: counts the parameters
 * @argv: counts the parameters
 * Return: all the parameters typed in the input
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int counter;
	(void) argc;
	for (counter = 0; counter < argc; counter++)
	{

	printf("%s\n", argv[counter]);
	}
	return (0);

}
