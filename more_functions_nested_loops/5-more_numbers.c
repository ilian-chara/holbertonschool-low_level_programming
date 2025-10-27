#include "main.h"
/**
 * more_numbers - function
 *
 */

void more_numbers(void)
{
	int n, l;

	for (n = 0; n <= 14; n++)
	{
		for (l = 0; l <= 10; l++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
}
