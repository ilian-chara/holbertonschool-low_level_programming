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
		e++;
	_putchar(str[e]);
		return;
}
