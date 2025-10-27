#include "main.h"
/**
 * more_numbers - function
 *
 */

void more_numbers(void)
{
	int n, l;

	for (n = 0; n < 10; n++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l > 9)
			{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
