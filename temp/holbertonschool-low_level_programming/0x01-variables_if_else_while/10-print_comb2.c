#include <stdio.h>

/**
 *main-awefaowiefjaoweifj
 *
 *Return: aewoifj
 */

int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			putchar(x);
			putchar(y);
			if (x == '9' && y == '9')
			{
				break;
			}
			else
			{
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
