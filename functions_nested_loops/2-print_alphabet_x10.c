#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - ntm betty
 * Return: always (0)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int multi;

	for (multi = 0; multi < 10; multi++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

	_putchar('\n');
	}
}
