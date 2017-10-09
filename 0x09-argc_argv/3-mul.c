#include <stdio.h>

/**
 *main - prints multiplication
 *@argc - number of commands
 *@argv - array
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	return (0);
}
