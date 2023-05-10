#include "main.h"

/**
  * print_rev - reverses string
  * @s: input string
  * @rev: reversed string
  * Return: 1 if palindrome, 0 if not
  */

int print_rev(char *s, char *rev)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		rev += _putchar(*s);
	}

	if (s == rev)
		return (1);
	else
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
	return (print_rev(*s, *rev));
}
