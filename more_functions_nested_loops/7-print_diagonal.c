#include "main.h"
/**
 * print_diagonal - function
 * @n: variable
 *
 */

void print_diagonal(int n)
{
	int z, v;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 0; z < n; z++)
		{
			for (v = 0; v < z; v++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
