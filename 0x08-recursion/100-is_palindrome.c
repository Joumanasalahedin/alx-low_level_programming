#include "main.h"

/**
  * strlength - length of a string
  * @s: input string
  * Return: length
  */

int strlength(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlength(s + 1));
}

/**
  * strcomp - compares characters in string
  * @s: input string
  * @a: smallest character
  * @b: largest character
  * Return: 1 if palindrome
  */

int strcomp(char *s, int a, int b)
{
	if (s[a] == s[b])
	{
		if (a == b || a == b + 1)
		{
			return (1);
		}

		return (0 + strcomp(s, a + 1, b - 1));
	}
	return (0);
}
/**
  * is_palindrome - detects if string is a palindrome
  * @s: input string
  * Return: 1 if palindrome, 0 if not
  */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (strcomp(s, 0, strlength(s) - 1));
}
