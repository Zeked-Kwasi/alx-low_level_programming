#include <stdio.h>

/**
 *main - prints alphabets with putchar only
 *
 *Return: 0 means success
 */

int main(void)
{	char c;

	for (c = "a"; c <= "z"; ++c)
	putchar(c);
	putchar("\n");

	return (0);

}
