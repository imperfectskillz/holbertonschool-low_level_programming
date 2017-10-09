#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints multiplication
 *@argc: number of commands
 *@argv: array of commands
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	return (0);
}
