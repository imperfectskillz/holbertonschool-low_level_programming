#include <stdio.h>

/**
 *main- returns prime
 *
 *Return: numbers
 */

int main(void)
{
	long i = 612852475143;
	int divisor = 2;

	while (divisor <= i)
	{

		if (i % divisor == 0)
		{
			i = i / divisor;
		}
		else
		{
			divisor++;
		}

	}

	printf("%d\n", divisor);
	return (0);
}
