#include <stdio.h>

int main(int argc, char *argv[])
{
	int counter;
	(void) argc;

	printf("Numero de contadores: %d\n", argc);

	for (counter = 0; counter < argc; counter++)
	{

	printf("%s\n", argv[counter]);
	}
	return (0);

}
