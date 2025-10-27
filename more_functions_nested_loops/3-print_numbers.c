#include "main.h"
/**
 * print_numbers - print digits from 0 to 9
 * num: variable
 *
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
