#include "main.h"
/**
 * print_triangle - function
 * @size: variable
 *
 *
 */

void print_triangle(int size)
{
	int r, i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 1; r <= size; r++)
	{
		for (i = 1; i <= size - r; i++)
			_putchar(' ');
		for (i = 0; i < r; i++)
			_putchar('#');
		_putchar('\n');
	}
}
