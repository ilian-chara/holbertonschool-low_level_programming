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
	for (r = 0; r < size; r++)
	{
		for (i = 0; i < size - (r + 1); i++)
		{
			_putchar(' ');
		}
		for (i = 0; i < r + 1; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
