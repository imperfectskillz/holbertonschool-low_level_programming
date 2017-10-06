#include "holberton.h"

int check(char *a, char *b);
int end(char *b);
int is_palindrome(char *s);

/**
 *check - checks
 *@a: variable
 *@b: variable
 *Return: 1 if palindrome
 */

int check(char *a, char *b)
{
	if (*a == *b)
	{
		return (check(a + 1, b - 1));
	}
	if (a > b || a == b)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *end - last char
 *@b: char
 *Return: 0 or 1
 */

int end(char *b)
{
	if (*b != '\0')
		return (1 + end(b + 1));
	return (0);
}

/**
 *is_palindrome - checks to see if palind
 *@s: characters
 *Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check(s, s + (end(s) - 1)));
}
