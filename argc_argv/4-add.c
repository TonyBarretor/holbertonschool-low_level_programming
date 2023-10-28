/**
 * main - contains argc y argv
 * @argc: counts the parameters
 * @argv: has the parameters
 * Return: the sum of 2 number
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int result;
	int num1, num2;
	(void) argc;

	if (argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);
	}

	return (0);
}
