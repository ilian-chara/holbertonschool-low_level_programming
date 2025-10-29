#include "main.h"
/**
 * puts_half - function name
 * @str: pointer
 *
 */

void puts_half(char *str)
{
	int l = 0, n;

	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
