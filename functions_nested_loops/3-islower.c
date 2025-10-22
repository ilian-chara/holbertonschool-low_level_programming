#include <stdio.h>
#include "main.h"
/**
 * _islower - if lowercase, = 1
 * Return: always (0)
 * @c - is a variable
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
