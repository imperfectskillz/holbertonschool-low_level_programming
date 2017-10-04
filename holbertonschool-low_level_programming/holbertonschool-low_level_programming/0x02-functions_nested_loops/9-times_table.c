#include "holberton.h"

/**
 *times_table - prints numbers
 *
 *Return: nothing
 */

void times_table(void)
{
	int j;
	int k;
	int r;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			r = j * k;
			if (k == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (r < 10)
				{
					_putchar(' ');
					_putchar('0' + r);
				}

				else
				{
					_putchar('0' + (r / 10));
					_putchar('0' + (r % 10));
				}
			}
		}
		_putchar('\n');
	}
}
