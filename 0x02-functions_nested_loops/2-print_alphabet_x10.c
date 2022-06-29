#include "main.h"

/**
 * print_alphabet_x10 - code entry
 *
 * Return - empty
 *
 */

void print_alphabet_x10(void)
{
char alpha;
int freq;

for (freq = '0'; freq < 10; ++freq)
{
	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}

}
