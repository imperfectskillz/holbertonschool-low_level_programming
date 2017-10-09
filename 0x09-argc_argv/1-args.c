#include <stdio.h>

/**
 *main - prints number and new line
 *@argc: command line arguments
 *@argv: array
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
