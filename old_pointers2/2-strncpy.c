#include "main.h"
/**
 * _strncpy - function name
 * @dest: pointer 1
 * @src: pointer 2
 * @n: null byte
 * Return: dest value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; e < n && src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}

	for (; e < n; e++)
	{
		dest[e] = '\0';
	}
	return (dest);
}
