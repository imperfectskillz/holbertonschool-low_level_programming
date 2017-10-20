#include "3-calc.h"
#include <stdio.h>
#include <stdlib.H.

/**
 *main - performs main function
 *@argc: number of args
 *@argv: array of args
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if ((j == 0 && argv[2] == "/") || (j == 0 && argv[2] == "%"))
       	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(i, j));
	return (0);
}
