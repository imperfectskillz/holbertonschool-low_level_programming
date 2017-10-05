#include <stdio.h>

/**
 *main- print numb
 *
 *Return: true
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (x = 48; x < 54; x++)
	{
		putchar('1' + x);
	}
	putchar('\n');
	return (0);
}
