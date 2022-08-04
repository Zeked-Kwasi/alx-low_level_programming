#include "main.h"

/**
 * _puts_recursion - code entry
 * @s: string
 *
 * Return: code status
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
	return (0);
}

_putchar(*s);
s++;
_puts_recursion(s);
}
