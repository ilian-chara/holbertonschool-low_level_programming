#include "main.h"
/**
 * _isalpha - function
 * @c: variable
 * Return: 1 if letter, 0 if something else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
		else
			return (0);
}
