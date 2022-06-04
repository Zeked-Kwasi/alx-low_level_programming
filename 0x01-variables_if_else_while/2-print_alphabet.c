#include <stdio.h>

/**
 *main - prints alphabets with putchar only
 *
 *Return: 0 means success
 */

int main(void)
{	char alpha;

	for (alpha = "a"; alpha <= "z"; ++alpha)
	putchar(alpha);
	putchar("\n");

	return (0);

}
