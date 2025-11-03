#include "main.h"
/**
 * _strcat - function name
 * @dest: pointer 1
 * @src: pointer 2
 * Return: dest value
 */

char *_strcat(char *dest, char *src)
{
	int r = 0;
	int t = 0;

	while (dest[r] != '\0')
		r++;
	while (src[t] != '\0')
	{
		dest[r] = src[t];
			t++;
			r++;
	}
	dest[r] = '\0';
	return (dest);
}
