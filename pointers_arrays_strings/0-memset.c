#include "main.h"
/**
* _memset - function name
* @s: pointer
* @b: variable
* @n: variable
* Return: s value
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e = 0;

	while (e < n)
	{
		s[e] = b;
		e++;
	}
	return (s);
}
