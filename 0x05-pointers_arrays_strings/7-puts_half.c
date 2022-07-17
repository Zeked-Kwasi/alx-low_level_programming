#include "main.h"

/**
 * puts_half - code entry
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
int b, a = 0;

while (*(str + a))
	a++;
b = a / 2;
if (a % 2)
	b += 1;
while (b < a)
{
	_putchar(*(str + b));
	b++;
}
_putchar('\n');
}
