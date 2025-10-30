#include "main.h"
/**
 * _strncat - function name
 * @dest: first pointer
 * @src: second pointer
 * @n: null byte
 * Return: dest value
 */

char *_strncat(char *dest, char *src, int n)
{
	int e = 0, r = 0;

	while (dest[e] != '\0')
	{
		e++;
	}
	while (r < n && src[r] != '\0')
	{
		dest[e] = src[r];
	e++;
	r++;
	}

	dest[e] = '\0';
	return (dest);
}
