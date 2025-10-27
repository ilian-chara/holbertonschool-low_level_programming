#include "main.h"
/**
 * print_line - function
 * @n: variable
 */

void print_line(int n)
{
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 0; z < n; z++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
