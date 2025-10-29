#include "main.h"
/**
 * _puts - function name
 * @str: pointer to a string
 * Return: nothing
 */

void _puts(char *str)
{
	int e = 0;

	while (str[e] != '\0')
	{
	_putchar(str[e]);
	++e;
	}
	_putchar('\n');
}
