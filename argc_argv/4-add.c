/**
 * main - receive 2 arguments
 * @argc: coutns the arguments on argv
 * @argv: add the arguments
 * Return: 0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, num, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
		}
		sum += num;
	}

	printf("%d\n", sum);
return (0);
}
