#include <stdio.h>

/**
 *main - print letters cept q and e
 *
 *Return: true
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
