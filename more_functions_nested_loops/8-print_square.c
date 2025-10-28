#include "main.h"
/**
 * print_square - function
 * @size: variable
 *
 */

void print_square(int size)
{
	int lon, larg;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (lon = 0; lon < size; lon++)
	{
		for (larg = 0; larg < size; larg++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
