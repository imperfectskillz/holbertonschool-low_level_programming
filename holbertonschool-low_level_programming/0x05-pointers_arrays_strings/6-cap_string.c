#include "holberton.h"

/**
 *cap_string- aweofij
 *@s: waeofij
 *Return: s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		if ((s[i - 1] == ' ' ||  s[i - 1] == '\t' ||  s[i - 1] == '\n' ||
		    s[i - 1] == ',' ||  s[i - 1] == ';' ||  s[i - 1] == '.' ||
		    s[i - 1] == '!' ||  s[i - 1] == '?' ||  s[i - 1] == '"' ||
		    s[i - 1] == '(' ||  s[i - 1] == ')' ||  s[i - 1] == '{' ||
		     s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
