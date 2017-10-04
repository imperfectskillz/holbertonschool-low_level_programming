#include <stdio.h>

/**
 *main- print alphabet
 *
 *Return: something
 */

int main(void)
{
	char ch;
	char d;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
