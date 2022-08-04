#include "main.h"

/**
 * _strlen - code entry
 * @str: string
 *
 * Return: code status
 */

int _strlen(char *str)
{
if (*str == '\0')
	return (0);
else
	return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - code entry
 * @l: left index
 * @r: right index
 * @p: palindrome
 *
 * Return: code status
 */

int check_palindrome(int l, int r, char *p)
{
if (l >= r)
	return (1);
else if (p[l] != p[r])
	return (0);
else
	return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - code entry
 * @s: string
 *
 * Return: code status
 */

int is_palindrome(char *s)
{
int number;

number = _strlen(s) - 1;
return (check_palindrome(0, number, s));
}
